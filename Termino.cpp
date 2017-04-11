#include <iostream>
#include <string>
#include <vector>
#include "Termino.h"
using namespace std;

//obtener una parte de la cadena
string Termino::strprt(string cadena, int inicio, int fin){
	string cadena2;
	for(int i=inicio; i<=fin; i++){
		cadena2 += cadena[i];
	}
	return cadena2;
}

//busca un caracter en la cadena y retorna la posicion de la primera coincidencia
//retorna -1 cuando no hay resultados
int Termino::strfnd(string cadena, char caracter){
	int n = -1;
	for(int i=0; i<cadena.length(); i++){
		if(cadena[i] == caracter){
			return i;		
		}
	}
	return n;
}

//separar terminos
vector<string> Termino::terminos(string expresion){
	int posicion = 0;
	vector<string> terminos;
	for(int i=0; i<expresion.length(); i++){
		//separando segun + - / *
		if((expresion[i] == '+' || expresion[i] == '-' || expresion[i] == '*' || expresion[i] == '/') && i!=0){
			terminos.push_back(strprt(expresion,posicion,i-1));
			posicion = i;
		}
		//capturando el ultimo termino
		if(i == expresion.length()-1){
			terminos.push_back(strprt(expresion,posicion,expresion.length()));
		}
	}
	return terminos;
}

//partiendo cadena segun el =
vector<string> Termino::separar(string expresion){
	int posicion = 0;
	string ecuacion[2];
	int igual =  0;
	vector<string> listaTerminos;
	//expresiones que no llevan igual
	if(strfnd(expresion,'=') == -1){
		return terminos(expresion);
	} 
	else {
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
			for(int j=0; j<terminos(ecuacion[i]).size(); j++){
				listaTerminos.push_back(terminos(ecuacion[i])[j]);			
			}
		}	
		return listaTerminos;
	}
}



