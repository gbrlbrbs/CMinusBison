
%{
#include "globals.h"
#include "util.h"
#include "scan.h"
char tokenString[MAXTOKENLEN+1]; /*lexema identificador*/
char* lastId;
char* curToken;
void get_yytext();
%}

%option noyywrap

digit       [0-9]
number      {digit}+
letter      [a-zA-Z]
identifier  {letter}+
newline     \n
whitespace  [ \t]+

%%
"if"            {return IF;}
"else"          {return ELSE;}
"while"         {return WHILE;}
"return"        {return RETURN;}
"int"           {return INT;}
"void"          {return VOID;}
"="             {return ASSIGN;}
"=="            {return EQUALS;}
"!="            {return NOT_EQ;}
">"             {return GT;}
">="            {return GT_EQ;}
"<"             {return LT;}
"<="            {return LT_EQ;}
"+"             {return PLUS;}
"-"             {return MINUS;}
"*"             {return TIMES;}
"/"             {return DIV;}
";"             {return SEMICOL;}
","             {return COMMA;}
"("             {return LPAR;}
")"             {return RPAR;}
"["             {return LBRACK;}
"]"             {return RBRACK;}
"{"             {return LCURLY;}
"}"             {return RCURLY;}
{number}        {return NUMBER;}
{identifier}    {
    if (lastId != NULL) {
        free(lastId);
    }
    get_yytext();
    lastId = copyString(curToken);
    return IDENTIFIER;
}
{newline}       {lineno++;}
{whitespace}    {} /* do nothing - skip whitespace */
"/*" {
    char c = ' ';
    char previous;
    do {
        previous = c;
        c = input();
        if (c == EOF) break;
        if (c == '\n') lineno++;
    } while (c != '/' || previous != '*');
}
. {return ERROR;}
%%

TokenType getToken(void) {
    static int first_time = TRUE;
    TokenType currentToken;
    if (first_time) {
        first_time = FALSE;
        lineno++;
        yyin = source;
        yyout = listing;
    }
    currentToken = yylex();
    strncpy(tokenString, yytext, MAXTOKENLEN);
    if (trace_scan) {
        fprintf(listing, "\t%d:", lineno);
        printToken(currentToken, tokenString);
    }
    return currentToken;
}

void get_yytext() {
    curToken = yytext;
}