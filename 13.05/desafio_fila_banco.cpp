#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

class Fila{
	public:
		Fila() {		}
		
		void enfileirar (string elemento){
			lista.push_back(elemento);
		}
		
		string desenfileirar (){
			if (lista.empty()){
				return 0;
			}
			
			string elemento = lista.front();
			lista.pop_front();
			return elemento;
		}
		
		bool vazia(){
			return lista.empty();
		}
		
		void mostrar (){
			for (string i: lista){
				cout << i << endl;
			}
		}
		
		private:
			list <string> lista;
};

int main (){
	Fila fila;
	
	fila.enfileirar("Joao");
	fila.enfileirar("Jose");
	fila.enfileirar("Maria");
	fila.enfileirar("Lucia");
	fila.enfileirar("Fatima");
	fila.mostrar();
	cout << "-----" << endl;
	Sleep(1000);
	
	fila.desenfileirar();
	fila.enfileirar("Pedro");
	fila.mostrar();
	cout << "-----" << endl;
	Sleep(1000);
	
	fila.desenfileirar();
	fila.enfileirar("Eulalia");
	fila.mostrar();
	cout << "-----" << endl;
	Sleep(1000);
	
	fila.desenfileirar();
	fila.enfileirar("Marcia");
	fila.mostrar();
	cout << "-----" << endl;
	Sleep(1000);
	
	fila.desenfileirar();
	fila.enfileirar("Agenor");
	fila.mostrar();
	cout << "-----" << endl;
	Sleep(1000);
	
	fila.desenfileirar();
	fila.mostrar();
	cout << "-----" << endl;
	Sleep(1000);
	
	fila.desenfileirar();
	fila.mostrar();
	
	return 0;
}
