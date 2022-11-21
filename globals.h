#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#define MAXRESERVED 8 /* the number of reserved words*/

typedef int TokenType;

extern int lineno;      /* source line number for listing */

extern FILE* source;    /* source code text file */
extern FILE* listing;   /* listing output text file */
extern FILE* code;      /* code text file for TM simulator */

typedef enum {
    Stmnt, Exp
} NodeKind;

typedef enum {
    If, While, Return, Assign, VarDecl, FunDecl, Call
} StmntKind;

typedef enum {
    Op, Const, Id
} ExpKind;

typedef enum {
    Void, Int, Bool
} ExpType;

#define MAXCHILDREN 3

typedef struct TreeNode {
    struct TreeNode *child[MAXCHILDREN];
    struct TreeNode *sibling;
    int lineno;
    NodeKind node_kind;
    union {StmntKind stmnt; ExpKind exp;} kind;
    union {
        TokenType op;
        int val;
        char *name;
    } attr;
    ExpType type;
} TreeNode;

/**************************************************/
/***********   Flags for tracing       ************/
/**************************************************/

/* echo_source = TRUE causes the source program to
 * be echoed to the listing file with line numbers
 * during parsing
 */
extern int echo_source;

/* trace_scan = TRUE causes token information to be
 * printed to the listing file as each token is
 * recognized by the scanner
 */
extern int trace_scan;

/* trace_parse = TRUE causes the syntax tree to be
 * printed to the listing file in linearized form
 * (using indents for children)
 */
extern int trace_parse;

/* trace_analyze = TRUE causes symbol table inserts
 * and lookups to be reported to the listing file
 */
extern int trace_analyze;

/* trace_code = TRUE causes comments to be written
 * to the TM code file as code is generated
 */
extern int trace_code;

/* error = TRUE prevents further passes if an error occurs */
extern int error; 

extern char * lastId;
extern int lineno;

/* Yacc/Bison generates internally its own values
 * for the tokens. Other files can access these values
 * by including the tab.h file generated using the
 * Yacc/Bison option -d ("generate header")
 *
 * The YYPARSER flag prevents inclusion of the tab.h
 * into the Yacc/Bison output itself
 */

#ifndef YYPARSER

/* the name of the following file may change */
#include "cminus.tab.h"

/* ENDFILE is implicitly defined by Yacc/Bison,
 * and not included in the tab.h file
 */
#define ENDFILE 0

#endif

#endif