/**
* @file	 	tools.h
* @brief	Arquivo de cabeçalho contendo a definição das
*			funções auxiliares 
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @since	13/05/2017
* @date		13/05/2017
*/


#ifndef TOOLS_H
#define TOOLS_H 

#include "q1.h"
#include <string>


/** 
 * @brief	Função que retira espaços, pontuação e
 *			transforma todas as letras para caixa baixa
 * @details nao retira acentuação
 * @param	input INPUT string a ser convertida
 * @return 	input
 */
string convert(string &input);


/** 
 * @brief	Função que checa se a string é um palindromo
 * @param	p P pilha
 * @param	input INPUT string digitada pelo usuario
 */
void check(Stack p, string input);

#endif