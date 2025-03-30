/*	
*	Programa de la Clase 10 de C++ (Funciones y Métodos)
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Francisco Antonio De León Natareno
*/

#include <iostream>

using namespace std;

// Metodos y Funciones = ejecutan una porcion de codigo N cantidad de veces segun se manden a llamar
// Metodo = no retorna un tipo de dato
// Funcion retorna un tipo de dato determinado

int suma(int num1, int num2, int num3);
void suma(int &num1, int &num2);

main() {
	int a = 10, b = 20;
	suma(a, b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	cout << suma(10, 20, 30) << endl;
	
	system("pause");
}

// Funcion que suma tres valores
int suma(int num1, int num2, int num3) {
	int resultado = 0;
	resultado = num1 + num2 + num3;
	
	return resultado;
}

// Metodo y envio de parametros por valor (& referencia)
void suma(int &num1, int &num2) {
	int resultado = 0;
	num1 += 1;
	num2 += 1;
	resultado = num1 + num2;
	
	cout << resultado << endl;
}