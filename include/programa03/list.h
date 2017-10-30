/**
* @file	 	list.h
* @brief	Arquivo de cabeçalho contendo a definição da classe List
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @since	14/05/2017
* @date		15/05/2017S
*/


#ifndef LIST_H
#define LIST_H

#include <string>
#include "node.h"
using std::string;

class List{
	private:
		//quantidade de nós da lista
		int quant;

	public:

		/** 
 		* @brief	contrutos padrão
		*/
		List();

		/** 
 		* @brief	destrutos padrão
 		*/
		~List();
		
		//no que aponta para o começo da lista
		Node<string> *head;
		//no que aposta para o começo da lista
		Node<string> *tail;


		/** 
		 * @brief	Função que retorna a quantidade de
		 *			elementos na lista
		 * @return 	quantidade de
		 *			elementos na lista
		 */
		int get_quant();


		/** 
		 * @brief	Função que atribui um valor quantidade de
		 *			elementos da lista
		 * @param	i I valor somado a total de elementos
		 */
		void set_quant(int i);


		/** 
		 * @brief	Função que insere um elemento no inicio da lista
		 * @param	value VALUE nome atribuido a elemento
		 */
		void insert_beggin(string value);


		/** 
		 * @brief	Função que insere um elemento no final da lista
		 * @param	value VALUE nome atribuido a elemento
		 */
		void insert_end(string value);


		/** 
		 * @brief	Função que insere um elemento na lista apos um indice
		 * @param	value VALUE nome atribuido a elemento
		 * @param	index INDEX indice da lista
		 */
		void insert_after(int index, string value);


		/** 
		 * @brief	Função que insere um elemento por ordem alfabética na lista
		 * @param	value VALUE nome atribuido a elemento
		 */
		void insert_ordered(string value);


		/** 
		 * @brief	Função que remove um elemento no final da lista
		 */
		void remove_end();


		/** 
		 * @brief	Função que remove um elemento no inicio da lista
		 */
		void remove_beggin();


		/** 
		 * @brief	Função que remove um elemento no final da lista
		 * @param	index INDEX indice da lista
		 */
		void remove_index(int index);


		/** 
		 * @brief	Função que procura por um elemento na lista
		 * @param	value VALUE nome do elemento procurado
		 */
		void search(string value);


		/**
		* @brief 	Função que imprime a lista 
		*/
		void print_list();
};

#endif