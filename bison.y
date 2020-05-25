%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include<ctype.h>

    int number_of_errors = 0;
    int truncated_true=0;
    int display_text_length=0;
    char m1[512] = "";
    char m2[512] = "";
    char m3[512] = "";
    char m4[512] = "";
    char m5[512] = "";
    char tabs_str[16]="\t\t\t\t\t\t\t\t";
    int tabs=0;
    int get_tabs() {
        return 8-tabs;
    }
    char error_msg[100];
	void yyerror(const char *);
	int yylex();
    int is_valid_id_is_str(char*);
    int is_valid_id(char*);
    int is_valid_date(char*);
    int is_valid_retweet_text(char*);
    char *trim(char*);

    void prepare_user_contents(char*,char*,char*,char*,char*);
    void echo(char*,char*,char*,char*,char*,char*,char*,char*,char*);

	extern FILE *yyin;
	extern int error;
	extern int yylineno;

    // Extern
    extern void yyerror(const char *); 
%}

%union{
	char* str;		
}

%type <str> tweet created_at id_str text user
%type <str> id name screen_name location user_contents 
%type <str> object members members_end pair list elements value
%type <str> indices hashtags entities display_text_range full_text extended_tweet truncated
%type <str> hashtag_objects extended_retweet_contents
%type <str> retweet retweet_text retweet_user retweet_tweet_contents retweet_tweet
%type <str> retweet_status
%token <str> NUMBER
%token <str> STRING
%token <str> TRUE FALSE NIL
%token <str> CREATED_AT ID_STR TEXT USER
%token <str> ID NAME SCREEN_NAME LOCATION
%token <str> DAY
%token <str> TRUNCATED EXTENDED_TWEET FULL_TEXT DISPLAY_TEXT_RANGE 
%token <str> ENTITIES HASHTAGS INDICES
%token <str> TWEET RETWEET_STATUS
%%

json: tweet | retweet;

tweet: '{' { tabs++;} members created_at ',' members id_str ',' members text ',' members user members_end { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members id_str ',' members created_at ',' members text ',' members user members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members text ',' members created_at ',' members id_str ',' members user members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members created_at ',' members text ',' members id_str ',' members user members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members id_str ',' members text ',' members created_at ',' members user members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members text ',' members id_str ',' members created_at ',' members user members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members text ',' members id_str ',' members user ',' members created_at members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members id_str ',' members text ',' members user ',' members created_at members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members user ',' members text ',' members id_str ',' members created_at members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members text ',' members user ',' members id_str ',' members created_at members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members id_str ',' members user ',' members text ',' members created_at members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members user ',' members id_str ',' members text ',' members created_at members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members user ',' members created_at ',' members text ',' members id_str members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members created_at ',' members user ',' members text ',' members id_str members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members text ',' members user ',' members created_at ',' members id_str members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members user ',' members text ',' members created_at ',' members id_str members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members created_at ',' members text ',' members user ',' members id_str members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members text ',' members created_at ',' members user ',' members id_str members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members id_str ',' members created_at ',' members user ',' members text members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members created_at ',' members id_str ',' members user ',' members text members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members user ',' members id_str ',' members created_at ',' members text members_end  { tabs--;} '}'  { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members id_str ',' members user ',' members created_at ',' members text members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members created_at ',' members user ',' members id_str ',' members text members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }
    | '{' { tabs++;} members user ',' members created_at ',' members id_str ',' members text members_end  { tabs--;} '}' { 
        echo($3, $4, $6, $7, $9, $10, $12, $13, $14);
    }

created_at: 
    CREATED_AT ':' STRING {
        if (!is_valid_date($3)) {
            yyerror("invalid date!\n");
        } 
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", trim($1), trim($3));
    };

id_str: 
    ID_STR ':' STRING {
        if (!is_valid_id_is_str($3)) {
            yyerror("id_str must be an integer!\n");
        } 
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", $1, $3);
    };

text: 
    TEXT ':' STRING {
        if (strlen($3) > 142) {
            yyerror("text length over 140!\n");
        } 
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", $1, $3);
    };

user: 
    USER ':' '{' { tabs++;} user_contents { tabs--;} '}'  {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($5)+10));
        sprintf($$,"%s: { %s \n\t}", $1, $5);
    };

user_contents:  
    members id ',' members name ',' members screen_name ',' members location members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s ", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members name ',' members id ',' members screen_name ',' members location members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members screen_name ',' members id ',' members name ',' members location members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members id ',' members screen_name ',' members name ',' members location members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members name ',' members screen_name ',' members id ',' members location members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members screen_name ',' members name ',' members id ',' members location members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+10));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members screen_name ',' members name ',' members location ',' members id members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members name ',' members screen_name ',' members location ',' members id members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members location ',' members screen_name ',' members name ',' members id members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members screen_name ',' members location ',' members name ',' members id members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members name ',' members location ',' members screen_name ',' members id members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members location ',' members name ',' members screen_name ',' members id members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members location ',' members id ',' members screen_name ',' members name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members id ',' members location ',' members screen_name ',' members name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members screen_name ',' members location ',' members id ',' members name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members location ',' members screen_name ',' members id ',' members name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members id ',' members screen_name ',' members location ',' members name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members screen_name ',' members id ',' members location ',' members name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members name ',' members id ',' members location ',' members screen_name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members id ',' members name ',' members location ',' members screen_name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members location ',' members name ',' members id ',' members screen_name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members name ',' members location ',' members id ',' members screen_name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members id ',' members location ',' members name ',' members screen_name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }
    | members location ',' members id ',' members name ',' members screen_name members_end {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($2)+strlen($4)+ strlen($5)+strlen($7)+strlen($8)+strlen($10)+strlen($11)+strlen($12)+100));
        prepare_user_contents($1, $4, $7, $10, $12);
        sprintf($$,"\n%s \t\t%s, %s \n\t\t%s, %s \n\t\t%s, %s \n\t\t%s%s", m1, $2, m2, $5, m3, $8, m4, $11, m5);
    }

id: 
    ID ':' NUMBER {
        if (!is_valid_id($3)) {
            yyerror("invalid user id!\n");
        } 
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", $1, $3);
    };

name: 
    NAME ':' STRING {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", $1, $3);
    };

screen_name: 
    SCREEN_NAME ':' STRING {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", $1, $3);
    };

location: 
    LOCATION ':' STRING {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", $1, $3);
    };

object: 
    '{' { tabs++;} members { tabs--;} '}' {
        $$ = (char *)malloc(sizeof(char)*(strlen($3)+10));
        sprintf($$,"{\n\t%s%s \n%s}", tabs_str+get_tabs(), $3, tabs_str+get_tabs());
    };

members: 
    %empty { 
        $$ = " ";
    }
    | pair {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }
    | pair ',' members {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s,\n%s%s", $1, tabs_str+get_tabs(), $3);
    };

pair: 
    STRING ':' value {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", $1, $3);
    }
    | extended_tweet {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }
    | truncated {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }
    | display_text_range {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }
    | indices {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }
    | hashtags {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }
    | entities {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }    
    | full_text {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    };

truncated: 
    TRUNCATED ':' TRUE {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", trim($1), trim($3));
        truncated_true = 1;
    }
    | TRUNCATED ':' FALSE {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", trim($1), trim($3));
    };

extended_tweet:
    EXTENDED_TWEET ':' '{' {++tabs;} extended_retweet_contents {--tabs;} '}' {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($5)+100));
        sprintf($$,"%s : { \n\t\t%s \n\t}", trim($1), trim($5));
    }

extended_retweet_contents:
    full_text ',' display_text_range {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+100));
        sprintf($$,"\n\t\t%s, \n\t\t%s", trim($1), trim($3));
    }
    | full_text ',' display_text_range ',' entities {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+strlen($5)+100));
        sprintf($$,"\n\t\t%s, \n\t\t%s, \n\t\t%s", trim($1), trim($3), trim($5));
    };
    

full_text: 
    FULL_TEXT ':' STRING {
        // if (strlen($3) > 142) {
        //     yyerror("full_text length over 140!");
        // } 
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s : %s", trim($1), trim($3));
    }

display_text_range: 
    DISPLAY_TEXT_RANGE ':' '[' NUMBER ',' NUMBER ']' {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($4)+strlen($6)+10));
        sprintf($$,"%s : [ %s, %s ]", trim($1), trim($4), trim($6));
        display_text_length=atoi($6)-atoi($4);
        if (display_text_length>140 && truncated_true==0) {
            yyerror("display_text_range >= 140 but truncated is false!\n");
        }
    }

entities:
     ENTITIES ':' '{' {++tabs;} hashtags members_end {--tabs;}'}' {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($5)+strlen($6)+100));
        sprintf($$,"%s : { \n%s%s \n%s}, %s", trim($1),  tabs_str+(get_tabs()-1), trim($5), tabs_str+get_tabs(), trim($6));
    }

hashtags: 
    HASHTAGS ':' '[' ']' {
        $$ = (char *)malloc(sizeof(char)*100);
        sprintf($$,"\"hashtags\": [ ]");
    } 
    | HASHTAGS ':' '[' { tabs++;} hashtag_objects { tabs--;} ']' {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($5)+100));
        sprintf($$,"\"hashtags\": [ %s]", trim($5));
    }

hashtag_objects:
    '{' text ',' indices '}'{
        $$ = (char *)malloc(sizeof(char)*(strlen($2)+strlen($4)+100));
        sprintf($$,"%c{%s, %s} \n",'\t', trim($2), trim($4));
    }
    | '{' text ',' indices '}' ',' hashtag_objects {
        $$ = (char *)malloc(sizeof(char)*(strlen($2)+strlen($4)+strlen($7)+100));
        sprintf($$,"{%s, %s}, %s", trim($2), trim($4), trim($7));
    };

indices: 
    INDICES  ':' '[' NUMBER ',' NUMBER ']' {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($4)+strlen($6)+100));
        sprintf($$,"%s : [ %s, %s ]", trim($1), trim($4), trim($6));
    }

members_end: 
    %empty { 
        $$ = " ";
    } 
    | ',' members {
        $$ = (char *)malloc(sizeof(char)*(strlen($2)+100));
        sprintf($$,"%s", $2);
    };

list: 
    '[' ']' {
        $$ = (char *)malloc(sizeof(char)*8);
        sprintf($$,"[ ]");
    } 
    | '[' { tabs++;} elements { tabs--;} ']' {
        $$ = (char *)malloc(sizeof(char)*(strlen($3)+10));
        sprintf($$,"[\n\t%s%s \n%s]", tabs_str+get_tabs(), $3,  tabs_str+get_tabs());
    };

elements: 
    value {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }
    | value ',' elements {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+10));
        sprintf($$,"%s,\n%s%s", $1, tabs_str+get_tabs(), $3);
    };

value: 
    STRING {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }
    | NUMBER {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }  
    | object {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    } 
    | list {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    } 
    | TRUE {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    } 
    | FALSE {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    }
    | NIL {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+10));
        sprintf($$,"%s", $1);
    };

retweet: 
    '{' { tabs++;} members retweet_tweet members_end { tabs--;} '}' {
        printf("{");
        if ($3[0]!=' ') printf("\n\t%s", trim($3));
        printf("\n\t%s", trim($4));
        if ($5[0]!=' ') printf("\n\t%s", trim($5));
        printf("\n}");
    };

retweet_tweet: 
    TWEET ':' '{' { tabs++;} members retweet_tweet_contents members_end { tabs--;} '}' {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($5)+strlen($6)+strlen($7)+100));
        sprintf($$,"%s: {\n %s\t\t%s,\n\t\t%s\n \t}", trim($1), trim($5), trim($6), trim($7));
    };

retweet_tweet_contents:
    text ',' members retweet_user  ',' members retweet_status {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+strlen($4)+strlen($6)+strlen($7)+100));
        sprintf($$,"%s, %s\n \t\t%s, %s\n \t\t%s", trim($1), trim($3), trim($4), trim($6), trim($7));

        if (!is_valid_retweet_text($1+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
    | text  ',' members retweet_status  ',' members retweet_user {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+strlen($4)+strlen($6)+strlen($7)+100));
        sprintf($$,"%s, %s\n \t\t%s, %s\n \t\t%s", trim($1), trim($3), trim($4), trim($6), trim($7));
        if (!is_valid_retweet_text($1+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
    | retweet_user  ',' members text  ',' members retweet_status {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+strlen($4)+strlen($6)+strlen($7)+100));
        sprintf($$,"%s, %s\n \t\t%s, %s\n \t\t%s", trim($1), trim($3), trim($4), trim($6), trim($7));
        if (!is_valid_retweet_text($4+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
    | retweet_user  ',' members retweet_status  ',' members text {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+strlen($4)+strlen($6)+strlen($7)+100));
        sprintf($$,"%s, %s\n \t\t%s, %s\n \t\t%s", trim($1), trim($3), trim($4), trim($6), trim($7));
        if (!is_valid_retweet_text($7+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
    | retweet_status  ',' members retweet_user  ',' members text {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+strlen($4)+strlen($6)+strlen($7)+100));
        sprintf($$,"%s, %s\n \t\t%s, %s\n \t\t%s", trim($1), trim($3), trim($4), trim($6), trim($7));
        if (!is_valid_retweet_text($7+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
    | retweet_status  ',' members text  ',' members retweet_user {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($3)+strlen($4)+strlen($6)+strlen($7)+100));
        sprintf($$,"%s, %s\n \t\t%s, %s\n \t\t%s", trim($1), trim($3), trim($4), trim($6), trim($7));
        if (!is_valid_retweet_text($4+9)) {
            yyerror("Invalid retweet text. Retweet text must contain RT@!\n");
        }
    }
;

retweet_user:
    USER ':' '{' { tabs++;} members screen_name { tabs--;} members_end '}' {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($5)+strlen($6)+strlen($8)+100));
        sprintf($$,"%s: {\n %s%s%s%s\n %s}", trim($1), trim($5),  tabs_str+get_tabs()-1, trim($6), trim($8), tabs_str+get_tabs());
    };

retweet_status: 
    RETWEET_STATUS ':' '{' { tabs++;} members text ',' members retweet_user members_end { tabs--;} '}' {
        $$ = (char *)malloc(sizeof(char)*(strlen($1)+strlen($5)+strlen($6)+strlen($8)+strlen($9)+strlen($10)+100));
        sprintf($$,"%s: {\n %s \t\t\t%s,\n %s \t\t\t%s,\n \t\t\t%s\n \t\t}\n", trim($1), trim($5), trim($6), trim($8), trim($9), trim($10));
    };
    
%%

int yywrap()
{
   return 1;
}

// Overide of yyerror bison function
void yyerror (char const *s) {
    ++number_of_errors;
    fprintf (stderr, "    %s - line %d \n", s, yylineno);
}

// Checks if the retweet text is valid (starts with RT@)
int is_valid_retweet_text(char* str) {
    if(
        (str[1]=='R' && str[2]=='T' && str[3]=='@' ) ||
        (str[1]=='R' && str[2]=='T' && str[3]==' ' && str[4]=='@')
    ) 
    {
        return 1;
    }
    return 0;
}

// Checks if id_str is a number
int is_valid_id_is_str(char* id_str) {
    for (int i=1; i<strlen(id_str)-1; ++i) {
        if (
            id_str[i] !='0' &&
            id_str[i] !='1' &&
            id_str[i] !='2' &&
            id_str[i] !='3' &&
            id_str[i] !='4' &&
            id_str[i] !='5' &&
            id_str[i] !='6' &&
            id_str[i] !='7' &&
            id_str[i] !='8' &&
            id_str[i] !='9'
        )
        {
            yyerror("invalid id_str!\n");
            return 0;
        }
    }
    return 1;
}

// Checks if the id is valid
int is_valid_id(char* id) {
    for (int i=0; i<strlen(id); ++i) {
        if (
            id[i] !='0' &&
            id[i] !='1' &&
            id[i] !='2' &&
            id[i] !='3' &&
            id[i] !='4' &&
            id[i] !='5' &&
            id[i] !='6' &&
            id[i] !='7' &&
            id[i] !='8' &&
            id[i] !='9'
        )
        {
            yyerror("invalid id!\n");
            return 0;
        }
    }
    return 1;
}

// checks if created_at string is valid
int is_valid_date(char* date) {
    if (strlen(date)!=26) {
        return 0;
    }

    if (date[4]!=' ' || date[8]!=' ' || date[11]!=' ' || date[20]!=' ') {
        yyerror("invalid spacing!\n");
        return 0;
    }
    
    if (date[14]!=':' || date[17]!=':') {
        yyerror("invalid time seperators!\n");
        return 0;
    }

    // check day Mon|Tue|Wed|Thu|Fri|Sat|Sun
    if (
        !(date[1] =='M' && date[2] =='o' && date[3] =='n') &&
        !(date[1] =='T' && date[2] =='u' && date[3] =='e') &&
        !(date[1] =='W' && date[2] =='e' && date[3] =='d') &&
        !(date[1] =='T' && date[2] =='h' && date[3] =='u') &&
        !(date[1] =='F' && date[2] =='r' && date[3] =='i') &&
        !(date[1] =='S' && date[2] =='a' && date[3] =='t') &&
        !(date[1] =='S' && date[2] =='u' && date[3] =='n') 
    ) 
    {
        yyerror("invalid day!\n");
        return 0;
    }

    // check month Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec
    if (
        !(date[5] =='J' && date[6] =='a' && date[7] =='n') &&
        !(date[5] =='F' && date[6] =='e' && date[7] =='b') &&
        !(date[5] =='M' && date[6] =='a' && date[7] =='r') &&
        !(date[5] =='A' && date[6] =='p' && date[7] =='r') &&
        !(date[5] =='M' && date[6] =='a' && date[7] =='y') &&
        !(date[5] =='J' && date[6] =='u' && date[7] =='n') &&
        !(date[5] =='J' && date[6] =='u' && date[7] =='l') &&
        !(date[5] =='A' && date[6] =='u' && date[7] =='g') &&
        !(date[5] =='S' && date[6] =='e' && date[7] =='p') &&
        !(date[5] =='O' && date[6] =='c' && date[7] =='t') &&
        !(date[5] =='N' && date[6] =='o' && date[7] =='v') &&
        !(date[5] =='D' && date[6] =='e' && date[7] =='c')
    ) 
    {
        yyerror("invalid month!\n");
        return 0;
    }

    // fprintf (stderr, "%d\n", atoi(date+18));

    int day = atoi(date+9);
    if (day>31 || day < 0) {
        yyerror("invalid day!\n");
        return 0;
    }

    int hour = atoi(date+12);
    if (hour>23 || hour < 0) {
        yyerror("invalid hour!\n");
        return 0;
    }

    int minutes = atoi(date+15);
    if (minutes>59 || minutes < 0) {
        yyerror("invalid minutes!\n");
        return 0;
    }

    int seconds = atoi(date+18);
    if (seconds>59 || seconds < 0) {
        yyerror("invalid seconds!\n");
        return 0;
    }

    int year = atoi(date+21);
    if (year>9999 || year < 0) {
        yyerror("invalid year!\n");
        return 0;
    }

    return 1;
}

// Trims the spaces from a string
char *trim(char *str)
{
    char *end;

    // Trim leading space
    while(isspace((unsigned char)*str)) str++;

    if(*str == 0)  // All spaces?
    return str;

    // Trim trailing space
    end = str + strlen(str) - 1;
    while(end > str && isspace((unsigned char)*end)) end--;

    // Write new null terminator character
    end[1] = '\0';

    return str;
}

// Prints the tweet json
void echo
(
    char* p1,
    char* p2,
    char* p3,
    char* p4,
    char* p5,
    char* p6,
    char* p7,
    char* p8,
    char* p9
)
{
    printf("{\n");
    if (p1[0]!=' ') printf("\t%s\n", p1);
    printf("\t%s,\n", p2);
    if (p3[0]!=' ') printf("\t%s\n", p3);
    printf("\t%s,\n", p4);
    if (p5[0]!=' ') printf("\t%s\n", p5);
    printf("\t%s,\n", p6);
    if (p7[0]!=' ') printf("\t%s\n", p7);
    printf("\t%s", p8);
    if (p9[0]!=' ') printf(",\n\t%s\n", p9);
    else printf("\n");
    printf("}\n");
}

// Prepares user contents
void prepare_user_contents
(
    char *p1,
    char *p2,
    char *p3,
    char *p4,
    char *p5
)
{
    if (p1[0]!=' ') sprintf(m1, "\n\t\t%s\n", p1);
    if (p2[0]!=' ') sprintf(m2, "\n\t\t%s\n", p2);
    if (p3[0]!=' ') sprintf(m3, "\n\t\t%s\n", p3);
    if (p4[0]!=' ') sprintf(m4, "\n\t\t%s\n", p4);
    if (p5[0]!=' ') sprintf(m5, ",\n\t\t%s\n", p5);
}

int main (int argc, char **argv) 
{
    // Check arguments
	  if ( argc < 2 ) {
        printf("Usage: %s <input> \n", argv[0]);
        exit(1);
    }

    // Read from file
    yyin = fopen(argv[1], "r"); 
	
    // Parse
	yyparse(); 

    // Print diagnosis
    if(number_of_errors>0){
        printf("\nFound %d error(s)  \n" , number_of_errors);
    } else {
        printf("\nNo errors\n");
    }

    return number_of_errors;
}