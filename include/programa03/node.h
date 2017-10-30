/**
* @file	 	node.h
* @brief	Arquivo de cabeçalho contendo a definição da classe Node
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @since	14/05/2017
* @date		15/05/2017S
*/

#ifndef NODE_H
#define NODE_H

template<typename T>
class Node{
	private:
		//informação do no
		T info;

	public:
		//no que aposta para o proximo
		Node<T> *next;
		// no que aposta para o anterior
		Node<T> *prev;
		T get_info();
		void set_info(T v);

		Node(T i);
		Node();
};


/** 
* @brief	construtor padrão
*/
template<typename T>
Node<T>::Node(){
	info = "0";
	next = NULL;
	prev = NULL;
}


/** 
* @brief	construtor parametrizado
* @param 	i I informação do no
*/
template<typename T>
Node<T>::Node(T i){
	info = i;
	next = NULL;
	prev = NULL;
}


/** 
* @brief	funcao que retorna a informação do no
* @return 	info
*/
template<typename T>
T Node<T>::get_info(){
	return info;
}


/** 
* @brief	funcao que atribui a informação do no
* @param 	v V  informação
*/
template<typename T>
void Node<T>::set_info(T v){
	info =  v;
}

#endif