%option noyywrap nodefault

%{

enum exit{
	word = 1,
	integer = 2,
	parenthesis_open = 3,
	pointer = 4,
	separator = 5,
	character = 6,
	parenthesis_close = 7,
	escope_open = 8,
	escope_close = 9,
	endl = 10,
	print = 11,
	returned = 12,
	number = 13,
	asp_double = 14,
	espace = 15,
	next_line = 16,
	tab = 17,
	invalid = 99,
};

%}

%%
"int" {return integer;}
"char" {return character;}
"printf" {return print;}
"return" { return returned;}
"(" {return parenthesis_open;}
")" { return parenthesis_close;}
"{" { return escope_open;}
"}" { return escope_close;}
"*" {return pointer;}
"," {return separator;}
";" {return endl;}
"\"" {return asp_double;} 
[0-9]+ {return number;}
[a-zA-Z][a-zA-Z0-9]* { return word;}
[ ] { return espace; }
[\n] { return next_line;}
[\t] {return tab; }
. { return invalid;}
%%