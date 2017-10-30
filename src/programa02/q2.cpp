/**
* @file	 	q2.cpp
* @brief	Programa que realiza o cálculo de expressóes passadas
* 			por linha de comando utilizando a notação poloneza inversa.
*			Os cálculos são realizados utilizando uma pilha para auxílio.
* @author	Gabriel Barbosa (gbsbarbosa.gb@gmail.com)
* @since	08/06/2017
* @date		08/06/2017
*/

#include <iostream>
#include <stdlib.h>
using std::cout;
using std::endl;

#include <stack>
using std::stack;


/** 
 * @brief	Função que realiza o cálculo do elemento com valor 
 *			mais próximo da média do intervalo.
 * @param	s S pilha utilizada para armazenar os números da expressão.
 * @param	op OP char que armazena caracteres de operação (adição, subtração, divisão e multiplicação).
 */
void op(stack<int> &s, char op){
	int aux = 0;

	if(op == '+'){

		aux = s.top();
		s.pop();
		aux +=  s.top();
		s.pop();
		s.push(aux);

	}else if(op == '-'){

		aux = s.top();
		s.pop();
		aux = s.top() - aux;
		s.pop();
		s.push(aux);

	}else if(op == '/'){
		int div;
		aux = s.top();
		s.pop();
		div = (s.top() / aux);
		s.pop();
		s.push(div);

	}else if(op == 'x'){

		aux = s.top();
		s.pop();
		aux *=  s.top();
		s.pop();
		s.push(aux);
	}
	
}


int main(int argc, char const *argv[])
{
	stack<int> s;

	for (int i = 1; i < argc; ++i)
	{
		if(*argv[i] >= '0' && *argv[i] <= '9'){
			s.push(atoi(argv[i]));
		}else{
			op(s, *argv[i]);
		}
	}

	cout << "\nElementos da pilha: ";
	while (!s.empty()) {
		cout << s.top();
	s.pop();
	}

	cout << endl;

	return 0;
}