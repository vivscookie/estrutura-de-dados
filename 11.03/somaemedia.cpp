//Calcule a soma e a média dos elementos de um vetor de tamanho 5

#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <locale.h>


using namespace std;

int main(){
	setlocale (LC_ALL, "Portuguese");
	int n[5], i, soma=0;
	float media;
    
    for(i=0;i<5;i++){
	
	cout << "Digite número: ";
    cin >> n[i];
    soma+=n[i];
	}
    media=soma/5;
    
    std::cout << std::fixed << std::setprecision(2)<<"Soma: " << soma <<endl <<"Média: " << media;
}