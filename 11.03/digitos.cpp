//Escreva um programa que irá soliciar um número inteiro positivo e contar quantos dígitos ele possui

#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

int main(){
    	setlocale (LC_ALL, "Portuguese");
    string n;

    cout << "Digite número: ";
    cin >> n;
	
	cout << "Dígitos do número: " << n.length();
}