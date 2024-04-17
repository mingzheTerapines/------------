/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "tiger.grm"
#include <stdio.h>
#include "util.h"
#include "errormsg.h"
#define YYDEBUG 1

int yylex();

void yyerror(char *s)
{
     EM_error(EM_tokPos, "%s", s);
}
#line 16 "tiger.grm"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
    int pos;
    int ival;
    string sval;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 46 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ID 257
#define STRING 258
#define INT 259
#define COMMA 260
#define COLON 261
#define SEMICOLON 262
#define LPAREN 263
#define RPAREN 264
#define LBRACK 265
#define RBRACK 266
#define LBRACE 267
#define RBRACE 268
#define DOT 269
#define PLUS 270
#define MINUS 271
#define TIMES 272
#define DIVIDE 273
#define EQ 274
#define NEQ 275
#define LT 276
#define LE 277
#define GT 278
#define GE 279
#define AND 280
#define OR 281
#define ASSIGN 282
#define ARRAY 283
#define IF 284
#define THEN 285
#define ELSE 286
#define WHILE 287
#define FOR 288
#define TO 289
#define DO 290
#define LET 291
#define IN 292
#define END 293
#define OF 294
#define BREAK 295
#define NIL 296
#define FUNCTION 297
#define VAR 298
#define TYPE 299
#define UMINUS 300
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    2,    2,    3,    3,    3,    4,    7,    7,    7,
    8,    8,    9,    9,    5,    5,    6,    6,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,   12,   12,   14,   14,   13,   13,   11,   11,   10,
   10,   10,   10,
};
static const YYINT yylen[] = {                            2,
    1,    2,    0,    1,    1,    1,    4,    1,    3,    3,
    1,    0,    3,    5,    4,    6,    7,    9,    1,    1,
    1,    1,    3,    2,    2,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    1,    6,    3,
    4,    3,    4,    6,    4,    8,    1,    4,    5,    3,
    3,    3,    4,    1,    3,    3,    5,    1,    3,    1,
    3,    4,    4,
};
static const YYINT yydefred[] = {                         0,
    0,    0,   21,   20,    0,    0,    0,    0,    0,    0,
   47,   22,    0,    0,    0,   38,    0,    0,    0,    0,
    0,   24,    0,    0,   25,    0,    0,    0,    0,    0,
    0,    0,    0,    4,    5,    6,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   52,    0,    0,    0,    0,   40,    0,   50,
    0,   23,    0,    0,    0,    0,    0,    0,    0,    2,
    0,    0,   28,   29,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   61,    0,    0,   53,    0,    0,   41,
   59,    0,    0,    0,    0,    0,    0,    0,   48,    0,
   62,   55,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    8,    0,    0,    7,   49,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   57,    0,   13,    0,
    0,    0,    0,    9,   10,    0,    0,    0,    0,    0,
   14,    0,
};
static const YYINT yydgoto[] = {                         13,
   23,   32,   33,   34,   35,   36,  115,  108,  109,   15,
   24,   16,   59,   55,
};
static const YYINT yysindex[] = {                       -93,
 -252, -183,    0,    0, -199,  -93,  -93,  -93, -231, -236,
    0,    0,    0,  765, -262,    0,  -93, -144,  -93, -249,
 -246,    0,  483, -209,    0,  645,  -28, -254, -184, -182,
 -178, -218, -236,    0,    0,    0,  -93,  -93,  -93,  -93,
  -93,  -93,  -93,  -93,  -93,  -93,  -93,  -93,  -93, -174,
  -93,  765,    0,  -64, -177,  685, -188,    0, -173,    0,
  -93,    0,  -93,  -93,  -93, -170, -255, -168, -103,    0,
 -206, -206,    0,    0,  -99,  -99,  -99,  -99,  -99,  -99,
 -239,  200,  725,    0,  765,  -93,    0, -204,  -93,    0,
    0,  607,  765,  565, -158, -157,  -93, -253,    0, -192,
    0,    0,  -93,  -42,  -93,  -93, -154, -155, -142, -166,
  765,    0, -158, -160,    0,    0,  765, -131,  765,  525,
 -129, -259, -122,  -93, -130, -120,    0,  -93,    0, -118,
  -93, -119,  765,    0,    0,  765, -133,  765, -111,  -93,
    0,  765,
};
static const YYINT yyrindex[] = {                         0,
    0,   41,    0,    0,    0,    0,    0,    0,    0, -143,
    0,    0,    0,  148,   81,    0,    0,    0,    0,    0,
    0,    0, -264,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -143,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  524,    0, -114,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  121,  161,    0,    0,  201,  241,  284,  324,  364,  404,
  444,  484,    0,    0,  566,    0,    0,    1,    0,    0,
    0,  766,  606,    0, -107,    0,    0,    0,    0,    0,
    0,    0,    0, -110,    0,    0,    0,    0, -243,    0,
 -221,    0, -109,    0,    0,    0,  646,    0,  686,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -194,    0,    0,  726,    0, -175,    0,    0,
    0, -167,
};
static const YYINT yygindex[] = {                         0,
    5,  129,    0,    0,    0,    0,    0,   54,    0,    0,
  -52,    0,   51,   89,
};
#define YYTABLESIZE 1065
static const YYINT yytable[] = {                         58,
   63,  130,   49,  112,   14,   96,   50,   57,   91,   17,
   25,   26,   27,  113,  131,   17,  100,   60,   58,   51,
   11,   52,   54,   56,   11,   28,   97,   65,   58,  114,
   37,   38,   39,   40,   41,   42,   43,   44,   45,   46,
   60,   71,   72,   73,   74,   75,   76,   77,   78,   79,
   80,   81,   82,   83,   62,   85,   21,    2,    3,    4,
   29,   30,   31,    5,   22,   39,   40,   92,   93,   94,
   15,    6,   66,   69,   67,   15,   15,   15,   68,   18,
   19,   19,   84,   20,    7,   89,   87,    8,    9,  103,
   54,   10,   95,  104,   90,   11,   12,   16,  107,  110,
  116,  111,   16,   16,   16,   98,  121,  117,  122,  119,
  120,    1,    2,    3,    4,  124,   17,  123,    5,   53,
   26,   17,   17,   17,   18,   57,    6,  129,  133,   18,
   18,   18,  136,  126,  132,  138,  135,  134,  137,    7,
  140,  139,    8,    9,  142,  141,   10,    1,    3,   54,
   11,   12,    1,    2,    3,    4,   12,   56,   12,    5,
   27,   70,    1,    2,    3,    4,  125,    6,  127,    5,
   37,   38,   39,   40,  102,    0,    0,    6,    0,    0,
    7,    0,    0,    8,    9,    0,    0,   10,    0,   99,
    7,   11,   12,    8,    9,   86,    0,   10,    0,    0,
   30,   11,   12,    0,    0,   37,   38,   39,   40,   41,
   42,   43,   44,   45,   46,   47,   48,  118,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   37,   38,   39,
   40,   41,   42,   43,   44,   45,   46,   47,   48,    0,
   31,   37,   38,   39,   40,   41,   42,   43,   44,   45,
   46,   47,   48,    0,    0,    0,    0,    0,    0,    0,
   63,   64,   63,    0,   63,   63,   63,    0,   63,   63,
   63,   63,   63,   63,   63,   63,   63,   63,   63,   63,
   63,   63,   63,   32,    0,   63,   63,    0,    0,   63,
   63,    0,   63,   63,    0,    0,    0,   63,   63,   63,
   60,    0,   60,    0,   60,    0,   60,    0,   60,   60,
   60,   60,   60,   60,   60,   60,   60,   60,   60,   60,
   60,   60,   60,   33,    0,   60,   60,    0,    0,   60,
   60,    0,   60,   60,    0,    0,    0,   60,   60,   60,
   19,    0,   19,    0,   19,    0,   19,    0,   19,    0,
   19,   19,   19,   19,   19,   19,   19,   19,   19,   19,
   19,   19,    0,   34,    0,   19,   19,    0,    0,   19,
   19,    0,   19,   19,    0,    0,    0,   19,   19,   19,
   26,    0,   26,    0,   26,    0,   26,    0,   26,    0,
   26,   26,    0,    0,   26,   26,   26,   26,   26,   26,
   26,   26,    0,   35,    0,   26,   26,    0,    0,   26,
   26,    0,   26,   26,    0,    0,    0,   26,   26,   26,
   27,    0,   27,    0,   27,    0,   27,    0,   27,    0,
   27,   27,    0,    0,   27,   27,   27,   27,   27,   27,
   27,   27,    0,   36,    0,   27,   27,    0,    0,   27,
   27,    0,   27,   27,    0,    0,    0,   27,   27,   27,
   30,    0,   30,    0,   30,    0,   30,    0,   30,   37,
   38,   39,   40,   41,   42,   43,   44,   45,   46,   47,
   30,   30,    0,   37,    0,   30,   30,    0,    0,   30,
   30,    0,   30,   30,    0,    0,    0,   30,   30,   30,
   31,    0,   31,    0,   31,    0,   31,    0,   31,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   31,   31,    0,   51,    0,   31,   31,    0,    0,   31,
   31,    0,   31,   31,    0,    0,    0,   31,   31,   31,
    0,    0,    0,   32,    0,   32,    0,   32,    0,   32,
    0,   32,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   32,   32,   42,    0,    0,   32,   32,
    0,    0,   32,   32,    0,   32,   32,    0,    0,    0,
   32,   32,   32,   33,    0,   33,    0,   33,    0,   33,
    0,   33,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   33,   33,   45,    0,    0,   33,   33,
    0,    0,   33,   33,    0,   33,   33,    0,    0,    0,
   33,   33,   33,   34,    0,   34,    0,   34,    0,   34,
    0,   34,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   34,   34,   39,    0,    0,   34,   34,
    0,    0,   34,   34,    0,   34,   34,    0,    0,    0,
   34,   34,   34,   35,    0,   35,    0,   35,    0,   35,
    0,   35,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   35,   35,   44,    0,    0,   35,   35,
    0,    0,   35,   35,    0,   35,   35,    0,    0,    0,
   35,   35,   35,   36,    0,   36,    0,   36,    0,   36,
    0,   36,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   36,   36,   46,    0,    0,   36,   36,
    0,    0,   36,   36,    0,   36,   36,    0,    0,    0,
   36,   36,   36,   37,   61,   37,    0,   37,    0,   37,
    0,   37,   37,   38,   39,   40,   41,   42,   43,   44,
   45,   46,   47,   48,   37,   43,    0,    0,   37,   37,
    0,    0,   37,   37,    0,   37,   37,    0,    0,    0,
   37,   37,   37,   51,    0,   51,    0,   51,    0,   51,
    0,   51,    0,    0,   37,   38,   39,   40,   41,   42,
   43,   44,   45,   46,   47,   48,    0,    0,   51,   51,
    0,    0,   51,   51,  128,   51,   51,    0,    0,    0,
   51,   51,   51,    0,    0,   42,    0,   42,    0,   42,
    0,   42,    0,   42,   37,   38,   39,   40,   41,   42,
   43,   44,   45,   46,   47,   48,    0,    0,    0,    0,
   42,   42,    0,  106,   42,   42,    0,   42,   42,    0,
    0,    0,   42,   42,   42,   45,    0,   45,    0,   45,
    0,   45,    0,   45,    0,    0,   37,   38,   39,   40,
   41,   42,   43,   44,   45,   46,   47,   48,    0,    0,
   45,   45,  105,    0,   45,   45,    0,   45,   45,    0,
    0,    0,   45,   45,   45,   39,    0,   39,    0,   39,
    0,   39,    0,   39,   37,   38,   39,   40,   41,   42,
   43,   44,   45,   46,   47,   48,    0,    0,    0,   63,
   39,   39,    0,    0,   39,   39,    0,   39,   39,    0,
    0,    0,   39,   39,   39,   44,    0,   44,    0,   44,
   88,   44,    0,   44,   37,   38,   39,   40,   41,   42,
   43,   44,   45,   46,   47,   48,    0,    0,    0,    0,
   44,   44,    0,    0,   44,   44,    0,   44,   44,    0,
    0,    0,   44,   44,   44,   46,    0,   46,    0,   46,
  101,   46,    0,   46,   37,   38,   39,   40,   41,   42,
   43,   44,   45,   46,   47,   48,    0,    0,    0,    0,
   46,   46,    0,    0,   46,   46,    0,   46,   46,    0,
    0,    0,   46,   46,   46,   43,    0,   43,    0,   43,
    0,   43,    0,   43,   37,   38,   39,   40,   41,   42,
   43,   44,   45,   46,   47,   48,    0,    0,    0,    0,
   43,    0,    0,    0,   43,   43,    0,   43,   43,    0,
    0,    0,   43,   43,   43,
};
static const YYINT yycheck[] = {                        264,
    0,  261,  265,  257,    0,  261,  269,  257,   61,  262,
    6,    7,    8,  267,  274,  262,   69,  264,  268,  282,
  264,   17,   18,   19,  268,  257,  282,  282,  293,  283,
  270,  271,  272,  273,  274,  275,  276,  277,  278,  279,
    0,   37,   38,   39,   40,   41,   42,   43,   44,   45,
   46,   47,   48,   49,  264,   51,  256,  257,  258,  259,
  297,  298,  299,  263,  264,  272,  273,   63,   64,   65,
  292,  271,  257,  292,  257,  297,  298,  299,  257,  263,
    0,  265,  257,  267,  284,  274,  264,  287,  288,  294,
   86,  291,  263,   89,  268,  295,  296,  292,  257,  257,
  293,   97,  297,  298,  299,  274,  261,  103,  264,  105,
  106,  256,  257,  258,  259,  282,  292,  260,  263,  264,
    0,  297,  298,  299,  292,  257,  271,  257,  124,  297,
  298,  299,  128,  294,  257,  131,  257,  268,  257,  284,
  274,  261,  287,  288,  140,  257,  291,    0,  292,  264,
  295,  296,  256,  257,  258,  259,  264,  268,  268,  263,
    0,   33,  256,  257,  258,  259,  113,  271,  118,  263,
  270,  271,  272,  273,   86,   -1,   -1,  271,   -1,   -1,
  284,   -1,   -1,  287,  288,   -1,   -1,  291,   -1,  293,
  284,  295,  296,  287,  288,  260,   -1,  291,   -1,   -1,
    0,  295,  296,   -1,   -1,  270,  271,  272,  273,  274,
  275,  276,  277,  278,  279,  280,  281,  260,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  270,  271,  272,
  273,  274,  275,  276,  277,  278,  279,  280,  281,   -1,
    0,  270,  271,  272,  273,  274,  275,  276,  277,  278,
  279,  280,  281,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  260,  290,  262,   -1,  264,  265,  266,   -1,  268,  269,
  270,  271,  272,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  282,    0,   -1,  285,  286,   -1,   -1,  289,
  290,   -1,  292,  293,   -1,   -1,   -1,  297,  298,  299,
  260,   -1,  262,   -1,  264,   -1,  266,   -1,  268,  269,
  270,  271,  272,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  282,    0,   -1,  285,  286,   -1,   -1,  289,
  290,   -1,  292,  293,   -1,   -1,   -1,  297,  298,  299,
  260,   -1,  262,   -1,  264,   -1,  266,   -1,  268,   -1,
  270,  271,  272,  273,  274,  275,  276,  277,  278,  279,
  280,  281,   -1,    0,   -1,  285,  286,   -1,   -1,  289,
  290,   -1,  292,  293,   -1,   -1,   -1,  297,  298,  299,
  260,   -1,  262,   -1,  264,   -1,  266,   -1,  268,   -1,
  270,  271,   -1,   -1,  274,  275,  276,  277,  278,  279,
  280,  281,   -1,    0,   -1,  285,  286,   -1,   -1,  289,
  290,   -1,  292,  293,   -1,   -1,   -1,  297,  298,  299,
  260,   -1,  262,   -1,  264,   -1,  266,   -1,  268,   -1,
  270,  271,   -1,   -1,  274,  275,  276,  277,  278,  279,
  280,  281,   -1,    0,   -1,  285,  286,   -1,   -1,  289,
  290,   -1,  292,  293,   -1,   -1,   -1,  297,  298,  299,
  260,   -1,  262,   -1,  264,   -1,  266,   -1,  268,  270,
  271,  272,  273,  274,  275,  276,  277,  278,  279,  280,
  280,  281,   -1,    0,   -1,  285,  286,   -1,   -1,  289,
  290,   -1,  292,  293,   -1,   -1,   -1,  297,  298,  299,
  260,   -1,  262,   -1,  264,   -1,  266,   -1,  268,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  280,  281,   -1,    0,   -1,  285,  286,   -1,   -1,  289,
  290,   -1,  292,  293,   -1,   -1,   -1,  297,  298,  299,
   -1,   -1,   -1,  260,   -1,  262,   -1,  264,   -1,  266,
   -1,  268,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  280,  281,    0,   -1,   -1,  285,  286,
   -1,   -1,  289,  290,   -1,  292,  293,   -1,   -1,   -1,
  297,  298,  299,  260,   -1,  262,   -1,  264,   -1,  266,
   -1,  268,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  280,  281,    0,   -1,   -1,  285,  286,
   -1,   -1,  289,  290,   -1,  292,  293,   -1,   -1,   -1,
  297,  298,  299,  260,   -1,  262,   -1,  264,   -1,  266,
   -1,  268,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  280,  281,    0,   -1,   -1,  285,  286,
   -1,   -1,  289,  290,   -1,  292,  293,   -1,   -1,   -1,
  297,  298,  299,  260,   -1,  262,   -1,  264,   -1,  266,
   -1,  268,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  280,  281,    0,   -1,   -1,  285,  286,
   -1,   -1,  289,  290,   -1,  292,  293,   -1,   -1,   -1,
  297,  298,  299,  260,   -1,  262,   -1,  264,   -1,  266,
   -1,  268,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  280,  281,    0,   -1,   -1,  285,  286,
   -1,   -1,  289,  290,   -1,  292,  293,   -1,   -1,   -1,
  297,  298,  299,  260,  262,  262,   -1,  264,   -1,  266,
   -1,  268,  270,  271,  272,  273,  274,  275,  276,  277,
  278,  279,  280,  281,  281,    0,   -1,   -1,  285,  286,
   -1,   -1,  289,  290,   -1,  292,  293,   -1,   -1,   -1,
  297,  298,  299,  260,   -1,  262,   -1,  264,   -1,  266,
   -1,  268,   -1,   -1,  270,  271,  272,  273,  274,  275,
  276,  277,  278,  279,  280,  281,   -1,   -1,  285,  286,
   -1,   -1,  289,  290,  290,  292,  293,   -1,   -1,   -1,
  297,  298,  299,   -1,   -1,  260,   -1,  262,   -1,  264,
   -1,  266,   -1,  268,  270,  271,  272,  273,  274,  275,
  276,  277,  278,  279,  280,  281,   -1,   -1,   -1,   -1,
  285,  286,   -1,  289,  289,  290,   -1,  292,  293,   -1,
   -1,   -1,  297,  298,  299,  260,   -1,  262,   -1,  264,
   -1,  266,   -1,  268,   -1,   -1,  270,  271,  272,  273,
  274,  275,  276,  277,  278,  279,  280,  281,   -1,   -1,
  285,  286,  286,   -1,  289,  290,   -1,  292,  293,   -1,
   -1,   -1,  297,  298,  299,  260,   -1,  262,   -1,  264,
   -1,  266,   -1,  268,  270,  271,  272,  273,  274,  275,
  276,  277,  278,  279,  280,  281,   -1,   -1,   -1,  285,
  285,  286,   -1,   -1,  289,  290,   -1,  292,  293,   -1,
   -1,   -1,  297,  298,  299,  260,   -1,  262,   -1,  264,
  266,  266,   -1,  268,  270,  271,  272,  273,  274,  275,
  276,  277,  278,  279,  280,  281,   -1,   -1,   -1,   -1,
  285,  286,   -1,   -1,  289,  290,   -1,  292,  293,   -1,
   -1,   -1,  297,  298,  299,  260,   -1,  262,   -1,  264,
  266,  266,   -1,  268,  270,  271,  272,  273,  274,  275,
  276,  277,  278,  279,  280,  281,   -1,   -1,   -1,   -1,
  285,  286,   -1,   -1,  289,  290,   -1,  292,  293,   -1,
   -1,   -1,  297,  298,  299,  260,   -1,  262,   -1,  264,
   -1,  266,   -1,  268,  270,  271,  272,  273,  274,  275,
  276,  277,  278,  279,  280,  281,   -1,   -1,   -1,   -1,
  285,   -1,   -1,   -1,  289,  290,   -1,  292,  293,   -1,
   -1,   -1,  297,  298,  299,
};
#define YYFINAL 13
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 300
#define YYUNDFTOKEN 317
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID","STRING","INT","COMMA",
"COLON","SEMICOLON","LPAREN","RPAREN","LBRACK","RBRACK","LBRACE","RBRACE","DOT",
"PLUS","MINUS","TIMES","DIVIDE","EQ","NEQ","LT","LE","GT","GE","AND","OR",
"ASSIGN","ARRAY","IF","THEN","ELSE","WHILE","FOR","TO","DO","LET","IN","END",
"OF","BREAK","NIL","FUNCTION","VAR","TYPE","UMINUS",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : exp",
"decs : dec decs",
"decs :",
"dec : tydec",
"dec : vardec",
"dec : fundec",
"tydec : TYPE ID EQ ty",
"ty : ID",
"ty : LBRACE tyfields RBRACE",
"ty : ARRAY OF ID",
"tyfields : tyfield",
"tyfields :",
"tyfield : ID COLON ID",
"tyfield : tyfield COMMA ID COLON ID",
"vardec : VAR ID ASSIGN exp",
"vardec : VAR ID COLON ID ASSIGN exp",
"fundec : FUNCTION ID LPAREN tyfields RPAREN EQ exp",
"fundec : FUNCTION ID LPAREN tyfields RPAREN COLON ID EQ exp",
"exp : lvalue",
"exp : INT",
"exp : STRING",
"exp : NIL",
"exp : LPAREN expseq RPAREN",
"exp : LPAREN RPAREN",
"exp : MINUS exp",
"exp : exp PLUS exp",
"exp : exp MINUS exp",
"exp : exp TIMES exp",
"exp : exp DIVIDE exp",
"exp : exp EQ exp",
"exp : exp NEQ exp",
"exp : exp LT exp",
"exp : exp LE exp",
"exp : exp GT exp",
"exp : exp GE exp",
"exp : exp AND exp",
"exp : exp OR exp",
"exp : funcall",
"exp : ID LBRACK exp RBRACK OF exp",
"exp : ID LBRACE RBRACE",
"exp : ID LBRACE ass RBRACE",
"exp : lvalue ASSIGN exp",
"exp : IF exp THEN exp",
"exp : IF exp THEN exp ELSE exp",
"exp : WHILE exp DO exp",
"exp : FOR ID ASSIGN exp TO exp DO exp",
"exp : BREAK",
"exp : LET decs IN END",
"exp : LET decs IN expseq END",
"exp : LPAREN error RPAREN",
"exp : error SEMICOLON exp",
"funcall : ID LPAREN RPAREN",
"funcall : ID LPAREN para RPAREN",
"para : exp",
"para : exp COMMA para",
"ass : ID EQ exp",
"ass : ID EQ exp COMMA ass",
"expseq : exp",
"expseq : exp SEMICOLON expseq",
"lvalue : ID",
"lvalue : lvalue DOT ID",
"lvalue : lvalue LBRACK exp RBRACK",
"lvalue : ID LBRACK exp RBRACK",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
