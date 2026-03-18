#include <iostream>
#include <list>

using namespace std;

int main(){
	list<int> listinha;
	int x,soma=0,mult=1,i;
		
		for(i=0;i<5;i++){
			cout << "Digite numero: ";
			cin >> x;
			listinha.push_back(x);
		}
		
		for (auto elemento: listinha){
			soma +=elemento;
			mult *=elemento;
		}
		
		cout << "A soma dos elementos: "<< soma << endl;
		cout << "Multiplicacao dos elementos: " << mult << endl;
		
	
	return 0;
}
