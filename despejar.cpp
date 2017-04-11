#include <iostream>
#include <string.h>
#include <vector>
#include "Termino.h"

using namespace std;


int main(){
	Termino t;
	vector<string> terminos;
	string ecuacion;
	cout << "Digite ecuacion: ";
	cin >> ecuacion;
	terminos = t.separar(ecuacion);
	for(int i=0; i<terminos.size(); i++){
		cout << terminos[i] << endl;
	}
	return 0;
}

