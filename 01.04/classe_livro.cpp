#include <iostream>
#include <string>

using namespace std;
class Livro {
	private:
		string titulo;
		int paginas;
		string autor;
		bool emprestado;
	
public:
	Livro(string titulo, int paginas, string autor, bool emprestado){
		this-> titulo = titulo;
		this-> paginas = paginas;
		this-> autor = autor;
		this-> emprestado = emprestado;
	}
	
	void setTitulo(string novoTitulo){
		titulo = novoTitulo;
	}
	
	string getTitulo(){
		return titulo;
	}
	
	void setPaginas(int novaPaginas){
		paginas = novaPaginas;
	}
	
	int getPaginas(){
		return paginas;
	}
	
	void setAutor(string novoAutor){
		autor = novoAutor;
	}
	
	string getAutor(){
		return autor;
	}
	
	void setEmprestado(bool novoEmprestado){
		emprestado = novoEmprestado;
	}
	
	bool getEmprestado (){
		return emprestado;
	}
	void ver(){
		cout << "Título: " << titulo <<endl;
		cout << "Páginas: " << paginas << endl;
		cout << "Autor: " << autor << endl;
		cout << "Emprestado: " << emprestado << endl;
	}
	void ler(){
		cout << "Lendo " << titulo << endl;
	}
	
	void emprestar(){
		emprestado = true;
		cout << titulo <<" foi emprestado."<<endl;
	}
	
	bool estaEmprestado(){
		if(emprestado){
			cout << titulo <<" está emprestado."<<endl;
		}else{
			cout << titulo <<" está disponível." <<endl;
		}
		
	}
};

int main(){
	Livro livro1 ("Porém Bruxa", 320, "Carol Chiovatto", false);
	livro1.ver();	
}
