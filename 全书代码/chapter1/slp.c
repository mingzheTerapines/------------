#include "util.h"
#include "slp.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

A_stm A_CompoundStm(A_stm stm1, A_stm stm2) {
  A_stm s = checked_malloc(sizeof *s);
  s->kind=A_compoundStm; s->u.compound.stm1=stm1; s->u.compound.stm2=stm2;
  return s;
}


A_stm A_AssignStm(string id, A_exp exp) {
  A_stm s = checked_malloc(sizeof *s);
  s->kind=A_assignStm; s->u.assign.id=id; s->u.assign.exp=exp;
  return s;
}

A_stm A_PrintStm(A_expList exps) {
  A_stm s = checked_malloc(sizeof *s);
  s->kind=A_printStm; s->u.print.exps=exps;
  return s;
}

A_exp A_IdExp(string id) {
  A_exp e = checked_malloc(sizeof *e);
  e->kind=A_idExp; e->u.id=id;
  return e;
}

A_exp A_NumExp(int num) {
  A_exp e = checked_malloc(sizeof *e);
  e->kind=A_numExp; e->u.num=num;
  return e;
}

A_exp A_OpExp(A_exp left, A_binop oper, A_exp right) {
  A_exp e = checked_malloc(sizeof *e);
  e->kind=A_opExp; e->u.op.left=left; e->u.op.oper=oper; e->u.op.right=right;
  return e;
}

A_exp A_EseqExp(A_stm stm, A_exp exp) {
  A_exp e = checked_malloc(sizeof *e);
  e->kind=A_eseqExp; e->u.eseq.stm=stm; e->u.eseq.exp=exp;
  return e;
}

A_expList A_PairExpList(A_exp head, A_expList tail) {
  A_expList e = checked_malloc(sizeof *e);
  e->kind=A_pairExpList; e->u.pair.head=head; e->u.pair.tail=tail;
  return e;
}

A_expList A_LastExpList(A_exp last) {
  A_expList e = checked_malloc(sizeof *e);
  e->kind=A_lastExpList; e->u.last=last;
  return e;
}

/* Tiger P8 problem2 */

Table_ Table(string id, int value, struct table *tail) {
  Table_ t = checked_malloc(sizeof *t);
  t->id = id; t->value = value; t->tail = tail;
  return t;
}

struct IntAndTable GetIntAndTable(int value, Table_ t) {
  struct IntAndTable it;
  it.i = value; it.t = t;
  return it;
}

Table_ update(Table_ t, string key, int value) {
  Table_ head = Table(key, value, t);
  return head;
}

int lookup(Table_ t, string key) {
  Table_ cur = t;
  while(cur!=NULL) {
    if(strcmp(key, cur->id)==0) return cur->value;
    cur = cur->tail;
  }
  return -1;
}

Table_ interpStm(A_stm s, Table_ t) {
  if(s->kind == A_compoundStm) {
    t = interpStm(s->u.compound.stm1, t);
    t = interpStm(s->u.compound.stm2, t);
    return t;
  } else if(s->kind == A_assignStm) {
    struct IntAndTable it = interpExp(s->u.assign.exp, t);
    Table_ newt = update(it.t, s->u.assign.id, it.i);
    return newt;
  } else if(s->kind == A_printStm) {
    A_expList cur = s->u.print.exps;
    while(cur->kind == A_pairExpList) {
      struct IntAndTable it = interpExp(cur->u.pair.head, t);
      printf("%d ", it.i);
      t = it.t;
      cur = cur->u.pair.tail;
    }
    struct IntAndTable it = interpExp(cur->u.last, t);
    t = it.t;
    printf("%d\n", it.i);
    return t;
  }
  return NULL;
}

struct IntAndTable interpExp(A_exp e, Table_ t) {
  if(e->kind == A_idExp) {
    int v = lookup(t, e->u.id);
    return GetIntAndTable(v, t);
  } else if(e->kind == A_numExp) {
    return GetIntAndTable(e->u.num, t);
  } else if(e->kind == A_opExp) {
    struct IntAndTable it = interpExp(e->u.op.left, t);
    t = it.t;
    int l = it.i;
    it = interpExp(e->u.op.right, t);
    t = it.t;
    int r = it.i;
    if(e->u.op.oper == A_plus) {
      return GetIntAndTable(l+r, t);
    } else if(e->u.op.oper == A_minus) {
      return GetIntAndTable(l-r, t);
    } else if(e->u.op.oper == A_times) {
      return GetIntAndTable(l*r, t);
    } else if(e->u.op.oper == A_div) {
      return GetIntAndTable(l/r, t);
    }
  } else if(e->kind == A_eseqExp) {
    t = interpStm(e->u.eseq.stm, t);
    return interpExp(e->u.eseq.exp, t);
  }
}