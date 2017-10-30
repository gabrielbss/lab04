/**
* @file	 	stack.cpp
* @brief	Arquivo de corpo contendo a implementação da classe Stack
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @since	13/05/2017
* @date		13/05/2017
*/

#include <iostream>
#include <string>
#include "q1.h"

using std::cout;
using std::endl;
using std::string;



/** 
 * @brief	Função que retorna o tamanho da pilha
 * @return 	tam
 */
int Stack::get_tam(){
	return tam;
}


/** 
 * @brief	Função que imprime a pilha
 */
void Stack::print(){
	cout << vec;
}


/** 
 * @brief	Função que insere uma string a pilha
 * @details	Esvazia a pilha antes de dar push
 * @param	n N string a ser inserido
 */
void Stack::push(string n){
	vec.erase(0, vec.length());
	vec = n;
	tam = n.length();
}



/** 
 * @brief	Função que insere um char a pilha
 * @param	n N char a ser inserido
 */
void Stack::push(char n){
	vec += n;
	tam = vec.length();
}


/** 
 * @brief	Função que elimina o último elemento da pilha
 */
void Stack::pop(){
	vec.erase(vec.length()-1, 1);
}


/** 
 * @brief	Função que limpa a pilha
 */
void Stack::clear(){
	vec.erase(0, vec.size());
}


/** 
 * @brief	Função que retorna o último elemento da pilha
 * @return 	ultimo elemento
 */
char Stack::top(){
	return vec[vec.length()-1];
}


/** 
 * @brief	construtor padrão
 */
Stack::Stack(){
	vec = ("Stack vazia");
	tam = 11;
}


/** 
 * @brief	construtor parametrizado
 * @param 	s S elementos da pilha
 */
Stack::Stack(string s){
	vec = s;
	tam = s.length();
}


/** 
 * @brief	destrutos padrão
 */
Stack::~Stack(){
	//destrutor
}
