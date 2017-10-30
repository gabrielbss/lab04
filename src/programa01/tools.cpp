/**
* @file	 	tools.cpp
* @brief	Arquivo de corpo contendo a implementação das
*			funções auxiliares 
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @since	13/05/2017
* @date		13/05/2017
*/

#include <iostream>
#include <algorithm>
#include <string> // transform, beguin e tolower
#include <cctype> // tolower
#include "tools.h"
using namespace std;


/** 
 * @brief	Função que retira espaços, pontuação e
 *			transforma todas as letras para caixa baixa
 * @details nao retira acentuação
 * @param	input INPUT string a ser convertida
 * @return 	input
 */
string convert(string &input){
	input.erase(remove_if(begin(input), end(input), ::isspace), end(input)); //remove os espaços da string
	input.erase(remove_if(begin(input), end(input), ::ispunct), end(input)); //remove carcters especias da string
	::transform(begin(input), end(input), begin(input), ::tolower); // transforma carcteres Uppercase to Lowercase
	return input;
}


/** 
 * @brief	Função que checa se a string é um palindromo
 * @param	p P pilha
 * @param	input INPUT string digitada pelo usuario
 */
void check(Stack p, string input){
	int cont;
	cont = 0;
	for (int i = 0; i < p.get_tam(); ++i)
	{
		if(p.top()==input[i]){ // checa ultimo elemento da lista com primeiro da string digitada
								// simulando um espelho da string
		}else{
			cont++;
			cout << " não é palindromo\n";
			exit(0);
		}
		p.pop();
	}

	if (cont == 0 )
	{
		cout << " é palíndromo\n";
	}
}
