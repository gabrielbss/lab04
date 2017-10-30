/**
* @file	 	q1.h
* @brief	Arquivo de cabeçalho contendo a definição da classe Stack
* @details 	Não foi usado template e nem set_tam() porque não se fez
*			nescessário da maneira que implementei a pilha.
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @since	13/05/2017
* @date		13/05/2017
*/

#ifndef STACK_H
#define STACK_H

#include <string>
using std::string;


class Stack{
	private:
		int tam;
		string vec;

	public:


		/** 
		 * @brief	Função que retorna o tamanho da pilha
		 * @return 	tam
		 */
		int get_tam();
		

		/** 
		 * @brief	Função que imprime a pilha
		 */
		void print();


		/** 
		 * @brief	Função que insere um elemento no inicio da lista
		 * @details	Esvazia a pilha antes de dar push
		 * @param	n N string a ser inserida
		 */
		void push(string n);


		/** 
		 * @brief	Função que insere um char a pilha
		 * @param	n N char a ser inserido
		 */
		void push(char n);


		/** 
		 * @brief	Função que elimina o último elemento da pilha
		 */
		void pop();


		/** 
		 * @brief	Função que limpa a pilha
		 */
		void clear();


		/** 
		 * @brief	Função que retorna o último elemento da pilha
		 * @return 	ultimo elemento
		 */
		char top();


		/** 
		 * @brief	construtor padrão
		 */
		Stack();


		/** 
		 * @brief	construtor parametrizado
		 * @param 	s S elementos da pilha
		 */
		Stack(string s);


		/** 
		 * @brief	destrutos padrão
		 */
		~Stack();
};

#endif