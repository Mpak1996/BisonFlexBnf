%{
    #include<stdio.h>
    #include "y.tab.h"

    void strrepl_inplace(char*, char*, char*);
%}

NEWLINE [\n]
WHITESPACE [ |\t]

E [eE][+-]?
EXP {E}{DIGITS}
NON_ZERO_DIGIT [1-9]
DIGIT [0-9]
DIGITS {DIGIT}+
INT {DIGIT}|{NON_ZERO_DIGIT}{DIGITS}|-{DIGIT}|-{NON_ZERO_DIGIT}{DIGITS}
REAL {INT}[.]{DIGITS}
NUMBER {INT}|{REAL}|{INT}{EXP}|{REAL}{EXP}

HEX_DIGIT [0-9a-f]
UNESCAPEDCHAR [ -!#-\[\]-~]
ESCAPEDCHAR \\["\\bfnrt/]
UNICODECHAR \\u{HEX_DIGIT}{HEX_DIGIT}{HEX_DIGIT}{HEX_DIGIT}
CHAR {UNESCAPEDCHAR}|{ESCAPEDCHAR}|{UNICODECHAR}
STRING {CHAR}+

%%

"\""created_at"\"" {
    yylval.str = strdup(yytext);
    return CREATED_AT;
};

"\""id_str"\"" {
    yylval.str = strdup(yytext);
    return ID_STR;
};

"\""text"\"" {
    yylval.str = strdup(yytext);
    return TEXT;
};

"\""user"\"" {
    yylval.str = strdup(yytext);
    return USER;
};

"\""id"\"" {
    yylval.str = strdup(yytext);
    return ID;
};

"\""name"\"" {
    yylval.str = strdup(yytext);
    return NAME;
};

"\""screen_name"\"" {
    yylval.str = strdup(yytext);
    return SCREEN_NAME;
};

"\""location"\"" {
    yylval.str = strdup(yytext);
    return LOCATION;
};

"\""truncated"\"" {
    yylval.str = strdup(yytext);
    return TRUNCATED;
};

"\""extended_tweet"\"" {
    yylval.str = strdup(yytext);
    return EXTENDED_TWEET;
};

"\""full_text"\"" {
    yylval.str = strdup(yytext);
    return FULL_TEXT;
};

"\""display_text_range"\"" {
    yylval.str = strdup(yytext);
    return DISPLAY_TEXT_RANGE;
};

"\""entities"\"" {
    yylval.str = strdup(yytext);
    return ENTITIES;
};

"\""hashtags"\"" {
    yylval.str = strdup(yytext);
    return HASHTAGS;
};

"\""indices"\"" {
    yylval.str = strdup(yytext);
    return INDICES;
};

"\""tweet"\"" {
    yylval.str = strdup(yytext);
    return TWEET;
};

"\""retweeted_status"\"" {
    yylval.str = strdup(yytext);
    return RETWEET_STATUS;
};

"\""{STRING}"\"" {
    // + %2B ! %21 space %20 , %2C & %26 
    char *a = strdup(yytext);
    // Handling unicode codes
    strrepl_inplace(a, "%2B", "+");
    strrepl_inplace(a, "%21", "!");
    strrepl_inplace(a, "%20", " ");
    strrepl_inplace(a, "%2C", ",");
    strrepl_inplace(a, "%26", "&");
    yylval.str = strdup(a);
    return STRING;
};

{NUMBER} {
    yylval.str = strdup(yytext);
    return NUMBER;
}

"true" { yylval.str = strdup(yytext); return TRUE; }
"false" { yylval.str = strdup(yytext); return FALSE; }
"null" { yylval.str = strdup(yytext); return NIL; }

"{" { yylval.str = strdup(yytext); return '{'; }
"}" { yylval.str = strdup(yytext); return '}'; }
"[" { yylval.str = strdup(yytext); return '['; }
"]" { yylval.str = strdup(yytext); return ']'; }

"," { yylval.str = strdup(yytext); return ','; }
"%2C" { yylval.str = strdup(yytext); return ','; }
":" { yylval.str = strdup(yytext); return ':'; }

{NEWLINE} { ++yylineno; }
{WHITESPACE}+ { /* ignore whitespace */}

. { printf("Unexpected: %c\n", *yytext);}
%%

// replace every occurrence of a in str with b
void strrepl_inplace(char *str, char *a, char *b)
{
    for (char *cursor=str; (cursor=strstr(cursor,a)) != NULL;)
    {
        memmove(cursor+strlen(b),cursor+strlen(a),strlen(cursor)-strlen(a)+1);
        for (int i=0; b[i]!='\0'; i++)
        {
            cursor[i] = b[i];
        }
        cursor += strlen(b);
    }
}
