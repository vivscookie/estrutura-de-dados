//Encontre o menor e o maior elemento em um vetor de 6 elementos

#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <locale.h>


using namespace std;

int main(){
	setlocale (LC_ALL, "Portuguese");
	int n[6], maior, menor, i;

	
	cout << "Digite número: ";
	cin >> n[0];
	maior = n[0];
	menor = n[0];
	
	for(i=1;i<6;i++){
		cout << "Digite número: ";
		cin >> n[i];
		
		if (n[i]<menor){
			menor=n[i];
		}
		
		if (n[i]>maior){
			maior=n[i];
		}
		
		cout << "Menor elemento: " << menor;
		cout << "Maior elemento: " << maior;
	}

	return 0;
}
