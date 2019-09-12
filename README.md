####            Informacoes             ####

Autor: Alexander Cristian Mendes Roncalli de Lima
Data:09 de Setembro de 2019

Este trabalho tem como objetivo criar um analisador lexico baseado em "C".
Foi utilizada a ferramenta FLEX para realizar este trabalho. 

$ apt-get install flex


####        Analisador-lexico           ####
            Analisador lexico

* Arquivo com as regras "regras.l"
* Arquivo com o codigo em c "anl.c"
* Arquivo gerado na compilação "exe"
* Arquivo de teste simples "easy.txt"
* Arquivo de teste do proprio programa "anl.txt"
* Arquivo de teste com erro "ent.txt"

####            Compilação              ####

$ flex regras.l 
$ gcc -c lex.yy.c anl.c
$ gcc -o exe lex.yy.o anl.o

####             Execultar              ####

$ ./exe easy.txt
$ ./exe anl.txt
$ ./exe error.txt
