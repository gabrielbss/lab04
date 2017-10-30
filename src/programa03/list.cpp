/**
* @file	 	list.cpp
* @brief	Arquivo de corpo contendo a implementação da classe List
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @since	14/05/2017
* @date		15/05/2017
*/

#include <iostream>
#include "list.h"
#include "node.h"

using std::cout;
using std::endl;


/** 
 * @brief	construtor padrão
 */
List::List(){
	quant = 0;
	head = new Node<string>("HEAD");
	tail = new Node<string>("TAIL");

	head->next = tail;
	tail->prev = head;

	head->prev = NULL;
	tail->next = NULL;
}


/** 
 * @brief	destrutor padrão
 */
List::~List(){
	while(head){
		Node<string> *n = head->next;
		delete head;
		head = n;
	}
}


/** 
 * @brief	Função que retorna a quantidade de
 *			elementos na lista
 * @return 	quant
 */
int List::get_quant(){
	return quant;
}


/** 
 * @brief	Função que atribui um valor quantidade de
 *			elementos da lista
 * @param	i I valor somado a total de elementos
 */
void List::set_quant(int i){
	quant += i;
}


/** 
 * @brief	Função que insere um elemento no inicio da lista
 * @param	value VALUE nome atribuido a elemento
 */
void List::insert_beggin(string value){
	Node<string> *n = new Node<string>(value);
	Node<string> *h = head;

	h->next->prev = n;
	n->next = h->next;

	h->next = n;
	n->prev = h;

	set_quant(1);
}


/** 
 * @brief	Função que insere um elemento no final da lista
 * @param	value VALUE nome atribuido a elemento
 */
void List::insert_end(string value){
	Node<string> *n = new Node<string>(value);
	Node<string> *t = tail;

	t->prev->next = n;
	n->prev = t->prev;

	t->prev = n;
	n->next = t;

	set_quant(1);
}


/** 
 * @brief	Função que insere um elemento na lista apos um indice
 * @param	value VALUE nome atribuido a elemento
 * @param	index INDEX indice da lista
 */
void List::insert_after(int index, string value){
	if(index > quant || index < 0){
		cout << "\nImpossívels adicionar nesta posição:\nPosição inexistente\n";
	}else{
		Node<string> *insert;
		Node<string> *n = new Node<string>(value);
		int cont = 0;

		for (insert = head->next; cont < index; insert = insert->next)
		{
			cont++;
		}

		n->prev = insert->prev;
		insert->prev->next = n;
		n->next = insert;
		insert->prev = n;

		set_quant(1);
	}
}


/** 
 * @brief	Função que insere um elemento por ordem alfabética na lista
 * @param	value VALUE nome atribuido a elemento
 */
void List::insert_ordered(string value){
	Node<string> *ord = new Node<string>(value);
	Node<string> *print_list = head->next;
	while(print_list != tail && (print_list->get_info() < ord->get_info())){
		print_list = print_list->next;
	}

	ord->next = print_list;
	ord->prev = print_list->prev;
	print_list->prev->next =  ord;
	print_list->prev = ord;


	set_quant(1);

}


/** 
 * @brief	Função que remove um elemento no final da lista
 */
void List::remove_end(){
	Node<string> *remove = tail->prev;
	tail->prev = remove->prev;
	remove->prev->next = tail;
	delete remove;

	set_quant(-1);

}


/** 
 * @brief	Função que remove um elemento no inicio da lista
 */
void List::remove_beggin(){
	Node<string> *remove = head->next;
	head->next = remove->next;
	remove->next->prev = head;
	delete remove;
	set_quant(-1);
}


/** 
 * @brief	Função que remove um elemento no final da lista
 * @param	index INDEX indice da lista
 */
void List::remove_index(int index){
	Node<string> *remove = new Node<string>();
	int cont = 0;
	for (remove = head->next; cont < index; remove = remove->next)
	{
		cont++;
	}

	remove->prev->next = remove->next;
	remove->next->prev = remove->prev;

	delete remove;
	set_quant(-1);
}


/** 
 * @brief	Função que procura por um elemento na lista
 * @param	value VALUE nome do elemento procurado
 */
void List::search(string value){
	int cont = 0;
	for (Node<string> *search = head; search; search = search->next)
	{
		if (search->get_info() == value)
		{
			cout << "\nvalor encontrado\n";
			cont++;
		}
	}

	if(cont==0){
	 cout << "\nvalor não encontrado\n";
	}

}


/**
 * @brief 	Função que imprime a lista 
*/
void List::print_list(){

	Node<string> *current = head->next;
	cout << endl << head->get_info() << " -> ";
	while(current != tail){
		cout << current->get_info() << " -> ";
		current = current->next;
	} cout << tail->get_info() << endl;
}