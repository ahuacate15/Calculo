#include <iostream>
#include <string.h>

using namespace std;

string strprt(string,int,int);
void separar(string);

int main(){
	string cadena ;
	cout << "Digite ecuacion: ";
	cin >> cadena;
	separar(cadena);
	return 0;
}

//separar la cadena en terminos individuales
void separar(string expresion){
	string termino;
	int posicion = 0;
	string ecuacion[2];
	int igual =  0;
	//separando la ecuacion en 2, lado izquierdo y derecho
	for(int i=0; i<expresion.length(); i++){
		if(expresion[i] == '='){
			ecuacion[0] = strprt(expresion, 0, i-1);
			ecuacion[1] = strprt(expresion, i+1, expresion.length());
			break;
		}
	}
	//separando terminos de cada lado de la ecuacion 
	for(int i=0; i<2; i++){
		posicion = 0;
		cout << "Lado: " << ecuacion[i] << endl;
		for(int j=0; j<ecuacion[i].length(); j++){
			if((ecuacion[i][j] == '+' || ecuacion[i][j] == '-') && j!=0){
				termino = strprt(ecuacion[i],posicion,j-1);
				posicion = j;
				cout << "Termino: " << termino << endl;
			}
			//capturar tambien el ultimo termino
			if(j==ecuacion[i].length()-1){
				termino  = strprt(ecuacion[i],posicion,ecuacion[i].length());
				cout << "Termino: " << termino << endl;
			}
		}
	}
}

//obtener una parte de la cadena
string strprt(string cadena, int inicio, int fin){
	string cadena2;
	for(int i=inicio; i<=fin; i++){
		cadena2 += cadena[i];
	}
	return cadena2;
}
