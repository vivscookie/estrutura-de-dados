#include <iostream>

using namespace std;

int soma (int a, int b){
	int resultado = a +b;
	return resultado;
}

int subtracao (int a, int b){
	int sub_res = a-b;
	return sub_res;
}

int multiplicacao (int a, int b){
	int multi_res = a*b;
	return multi_res;
}

float divisao (int a, int b){
	float div_res = a/b;
	return div_res;
}

int main () {
	int x = 5;
	int y = 3;
	int resultadoSoma = soma(x,y);
	int resultadoSub = subtracao(x,y);
	int resultadoMulti = multiplicacao(x,y);
	int resultadoDiv = divisao(x,y);
	
	cout << "A soma de "<< x << " e " << y << " é: " << resultadoSoma << endl;
	
	cout << "A subtracao de "<< x << " e " << y << " é: " << resultadoSub << endl;
	
	cout << "A multiplicacao de "<< x << " e " << y << " é: " << resultadoMulti << endl;
	
 	cout << "A divisao de "<< x << " e " << y << " é: " << resultadoDiv << endl;
	
	return 0; 
}
