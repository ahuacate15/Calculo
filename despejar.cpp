#include <iostream>
#include <string.h>
#include <vector>
#include "Termino.h"

using namespace std;


int main(){
	Termino t;
	string ecuacion;
	cout << "Digite ecuacion: ";
	cin >> ecuacion;
	vector<string> terminos = t.separar(ecuacion);
	for(int i=0; i<terminos.size(); i++){
		Termino ter;
		ter.convertir(terminos[i]);
		cout << "----------------------------" << endl;
		cout << "Termino: " << terminos[i] << endl;
		cout << "Signo: " << ter.signo << endl;
		cout << "Parte Numérica: " << ter.numerica << endl;
		cout << "Parte Literal: " << ter.literal << endl;
		cout << "Potencia: " << ter.potencia << endl;
		
	}
	return 0;
}

