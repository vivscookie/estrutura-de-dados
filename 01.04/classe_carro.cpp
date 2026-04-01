#include <iostream>
#include <string>

using namespace std;
class Carro {
	private:
		string marca;
		int ano;
		string modelo;
		string cor;
	
public:
	Carro(string marca, int ano, string modelo, string cor){
		this->marca = marca;
		this->ano=ano;
		this->modelo=modelo;
		this->cor=cor;
	}
	
	void setMarca (string novaMarca){
		marca = novaMarca;
	}
	
	string getMarca(){
		return marca;
	}
	
	void setAno(int novoAno){
		ano = novoAno;
	}
	
	int getAno(){
		return ano;
	}
	
	void setModelo(string novoModelo){
		modelo = novoModelo;
	}
	
	string getModelo(){
		return modelo;
	}
	
	void setCor(string novaCor){
		cor = novaCor;
	}
	
	string getCor(){
		return cor;
	}
	
	void mostrar(){
		cout << "Fabricante: " << marca << endl;
		cout << "Ano: " << ano << endl;
		cout << "Modelo: " <<modelo << endl;
		cout << "Cor: " <<cor << endl;
	}
};

	int main(){
		
		Carro carro1("Mitsubishi",2018,"Lancer","Amarelo ovo");
		carro1.mostrar();
	}
