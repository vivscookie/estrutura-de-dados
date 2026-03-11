//Elabore um programa que receba um número inteiro para contabilizar a quantidade de números pares

#include <iostream>
#include <sstream>
#include <stdio.h>

using namespace std;

int main(){
    int n, p = 0, i;

    cout << "Digite número: ";
    cin >> n;

    for (i=1;i<=n;i++){
        if (i % 2==0){
            p++;
        }
    }
    cout << "Números pares: " << p;
    return 0;
}
