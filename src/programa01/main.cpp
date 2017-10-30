/**
* @file	 	main.cpp
* @brief	Programa que testa se uma palavra ou frase
*			é um palindromo
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @since	13/05/2017
* @date		13/05/2017
*/

#include <iostream>
#include "tools.h"
#include "q1.h"

using std::cout;
using std::cin;
using std::string;


int main(){
	
	system("clear");
	string input;
	cout << "texto a ser testado: \n";
	getline(cin, input, '\n');

	convert(input);
	Stack p(input);

	cout << "\n(texto convertido)\n";
	p.print();
	check(p, input);

	return 0;
}