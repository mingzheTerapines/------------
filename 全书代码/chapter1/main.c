/* This file is intentionally empty.  You should fill it in with your
   solution to the programming exercise. */
#include "util.h"
#include "slp.h"
#include "prog1.h"
#include <stdio.h>
#include <math.h>

/* Tiger P8 problem1 */

int print_args(A_stm stm);
int exp_args(A_exp exp);
int maxargs(A_stm stm);

//获取打印表达式里面参数数量
int print_args(A_stm stm) {
	int res = 0;
	A_expList cur = stm->u.print.exps;
	while(cur->kind == A_pairExpList) {
		res ++;
		cur = cur->u.pair.tail;
	}
	res++;
	return res;
}


//递归计算并返回给定表达式中的最大参数数量
int exp_args(A_exp exp) {
	int res = 0;
	if(exp->kind == A_eseqExp) {
		res = maxargs(exp->u.eseq.stm) + exp_args(exp->u.eseq.exp);
	}
	return res;
}

//计算并返回给定语句中的最大参数数量
int maxargs(A_stm stm) {
	int res = 0;
	if(stm->kind == A_printStm) {
		res = print_args(stm);
	} else if(stm->kind == A_assignStm) {
		A_exp exp = stm->u.assign.exp;
		res = exp_args(exp);
	} else if(stm->kind == A_compoundStm) {
		A_stm stm1 = stm->u.compound.stm1;
		A_stm stm2 = stm->u.compound.stm2;
		int a = maxargs(stm1), b = maxargs(stm2);
		res = a>b?a:b;
	}
	return res;
}

int main() {
	Table_ t = checked_malloc(sizeof *t);
	interpStm(prog(), t);
	return 0;
}
