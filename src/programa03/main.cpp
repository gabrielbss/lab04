/**
* @file 	main.cpp
* @brief 	Programa que simula realiza operações numa lista
*			duplamente encadeada ordenada com sentinelas genericos
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @since	14/05/2017
* @date		15/05/2017
*/

#include <iostream>
#include "list.h"

using namespace std;

int main(){
	cout << "\nTestes realizados na lista:\n";
	List l;

	// Teste com funções de inserção, remoção e busca
	l.insert_ordered("joão");
	l.insert_ordered("anna");
	l.insert_ordered("maria");
	l.insert_ordered("yago");
	l.insert_ordered("josé");
	l.print_list();

	l.remove_end();
	l.remove_beggin();

	l.print_list();

	l.remove_index(2);
	l.print_list();

	l.insert_after(2, "novo");
	l.print_list();
	l.search("novo");

	cout << "\nQuantidade de elementos: " << l.get_quant() << endl;

	return 0;
}