using namespace std;
class Termino {
	public:			
		//atributos de la clase
		char signo;
		int numerica;
		string literal;
		int potencia;
		//metodos y funciones
		string strprt(string,int,int);
		//busca un caracter en la cadena :: retorna -1 si no hay resultados
		int strfnd(string,char);
		vector<string> separar(string);
		vector<string> terminos(string);
		//convierte un string a un termino algebraico		
		void convertir(string);
};
