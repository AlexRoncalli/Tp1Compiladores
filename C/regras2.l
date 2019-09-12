%option noyywrap nodefault

/*definicoes*/

%{

operador "if"|"else"|"int"|"void"|"return"|"while"
simboloduplo "<="|">="|"=="|"!="
simbolounico [\+|\-|\*|\/|\<|\>|\,|\;|\(|\)|\[|\]|\{|\}|\=]
abrecomentario "/*"
fechacomentario "*/"
simbolo {simboloduplo}|{simbolounico}
letra [a-z]|[A-Z]
digito [0-9]
id {letra}{letra}*
num {digito}{digito}*
branco [ \t\n]

/*regras*/

%%
{abrecomentario} 	{ ligado = 1; }
{fechacomentario} 	{ ligado = 0; }
{operador} 			{ if ( ligado == 0 ) printf("Operador: %s\n",yytext); }
{simbolo} 			{  if ( ligado == 0 ) printf("Simbolo: %s\n",yytext); }
{id} 				{ if ( ligado == 0 ) printf("ID: %s\n",yytext); }
{num} 				{ if ( ligado == 0 ) printf("NUM: %s\n",yytext); }
{branco} 			{}
. 					{ printf("Entrada inválida: %s\n",yytext); }

/*Comandos do usuario*/
%%