#include <iostream>

using namespace std;

bool ehPar(int numero){
	
	int par = numero % 2;
	
	return par;	
}

int main (){
	int numero = 7;
	int teste = ehPar(numero);
	
if (teste==0){
	cout << numero << " é um número par."<<endl;
} else {
	cout << numero << " não é um número par." <<endl;
}

return 0;
}
