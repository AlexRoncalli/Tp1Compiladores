#include <stdio.h>

extern FILE *yyin;
extern int yylex();


int main (int argc, char *argv[]){
	int token;
if(!(yyin = fopen(argv[1],"r"))) return 1;

int cont_words = 0;
int var = 0;
int parenthesis_open = 0;
int pointer = 0;
int separator = 0;
int character = 0;
int parenthesis_close = 0;
int escope_open = 0;
int escope_close = 0;
int endl = 0;
int print = 0;
int returned = 0;
int number = 0;
int asp_double = 0;
int espace = 0;
int next_line = 0;
int line = 0;
int tab = 0;
int invalid = 0;


while(token = yylex()){

	switch(token){

		case 1 :

			printf("Word");
			cont_words++;

		break; 

		case 2 :

			printf("int");
			var++;

		break;

		case 3 :

			printf("(");
			parenthesis_open++;

		break;

		case 4 :

			printf("*");
			pointer++;

		break;

		case 5 :

			printf(",");
			separator++;

		break;

		case 6 :

			printf("char");
			var++;

		break;

		case 7 :

			printf(")");
			parenthesis_close++;

		break;

		case 8 :

			printf("{");
			escope_open++;

		break;

		case 9 :

			printf("}");
			escope_close++;

		break;

		case 10:

			printf(";");
			endl++;

		break;

		case 11:

			printf("printf");
			print++;

		break;

		case 12 :

			printf("return");
			returned++;

		break;

		case 13 :

			printf("number");
			number++;

		break;

		case 14 :

			printf("\"");
			asp_double++;

		break;

		case 15 :

			printf(" ");
			espace++;

		break;

		case 16 :

			printf("\n");
			line++;

		break;

		case 17 :

			printf("	");
			tab++;

		break;	

		case 99 :

			printf("-- INVALIDO --\n");
			invalid++;
		break;

	}

}

printf("  			 Relatorio 	 \n");
printf("  ---------- Palavras 	 		:%i\n", cont_words );
printf("  ---------- Variaveis 	 		:%i\n", var );
printf("  ---------- [				:%i\n", parenthesis_open );
printf("  ---------- *				:%i\n", pointer );
printf("  ---------- Separador		 	:%i\n", separator );
printf("  ---------- ]				:%i\n", parenthesis_close );
printf("  ---------- {				:%i\n", escope_open );
printf("  ---------- }				:%i\n", escope_close );
printf("  ---------- ;				:%i\n", endl );
printf("  ---------- Print			:%i\n", print );
printf("  ---------- Returns		 	:%i\n", returned );
printf("  ---------- Numeros		 	:%i\n", number );
printf("  ---------- Aspas duplas 	 	:%i\n", asp_double );
printf("  ---------- Espacos		 	:%i\n", espace );
printf("  ---------- Linhas			:%i\n", line );
printf("  ---------- Tab			:%i\n", tab );
printf("  ---------- Erro de token 	 	:%i\n", invalid );

return 0;
}
