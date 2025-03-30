/*	
*	Programa de la Clase 11 de C++ (Estructuras o Struct)
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Francisco Antonio De León Natareno
*/

#include <iostream>

using namespace std;

// Estructuras struct (una forma de agrupar varias variables relacionadas en un solo lugar)
struct Estudiante {
	int *codigo;
	string *nombre;
	int **notas;
};

main() {
	Estudiante estudiante;
	
	int fila = 0, columna = 0;
	
	cout << "Cuantos Estudiantes desea agregar?: ";
	cin >> fila;
	cout << "Cuantas Notas por Estudiante desea agregar?: ";
	cin >> columna;
	
	estudiante.codigo = new int [fila];
	estudiante.nombre = new string [fila];
	estudiante.notas = new int *[fila];
	
	for (int i=0; i<fila; i++) {
		estudiante.notas[i] = new int [columna];
	}
	
	cout << "__________________ Ingreso de Notas __________________" << endl;
	
	for (int i=0; i<fila; i++) {
		cout << "Codigo [" << i << "]: ";
		cin >> estudiante.codigo[i];
		cin.ignore();
		cout << "Nombre Completo [" << i << "]: ";
		getline(cin, estudiante.nombre[i]);
		
		for (int j=0; j<columna; j++) {
			cout << "Ingrese Nota [" << j << "]: ";
			cin >> *(*(estudiante.notas+i)+j);
		}
		
		cout << "______________________________________________________" << endl;
	}
	
	cout << "____________________ Mostrar Datos ___________________" << endl;
	
	for (int i=0; i<fila; i++) {
		cout << "Codigo [" << i << "]: " << estudiante.codigo[i] << endl;
		cout << "Nombre Completo [" << i << "]: "<< estudiante.nombre[i] << endl;
		
		for (int j=0; j<columna; j++) {
			cout << "Nota [" << j << "]: " << *(*(estudiante.notas+i)+j) << endl;
		}
		
		cout << "______________________________________________________" << endl;
	}
	
	// LIBERAR MEMORIA
	for (int i=0; i<fila; i++) {
		delete [] estudiante.notas[i];
	}
	
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;

	system("pause");
}