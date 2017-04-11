using namespace std;
class Termino {
	public:
		//seleccionar parte de una cadena			
		string strprt(string,int,int);
		//buscar un caracter en la cadena, -1 cuando no encuentra resultados
		int strfnd(string,char);
		//divide la ecuacion en 2 lados
		vector<string> separar(string);
		//divide el miembro de la ecuacion en terminos
		vector<string> terminos(string);
};
