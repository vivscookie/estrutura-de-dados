#include <iostream>
#include <stack>

using namespace std;

int main () {
	string expressao = "();";
	
	stack<char> pilha;
	
	for(int i = 0; i < expressao.length(); i++){
		char caracter = expressao[i];
		
		if (caracter == '('){
			pilha.push(caracter);
		}
		
		if (caracter == ')'){
			pilha.push(caracter);
		}
		else if (caracter == ';'){
			if (pilha.empty() || pilha.top() != caracter){
				cout << "FIM" << endl;
				while (!pilha.empty()){
					pilha.pop();
				}
				return 0;
			}
			pilha.pop();
		}
	}
	if (pilha.empty()){
		cout << "Pilha vazia" << endl;
	}
	return 0;
}
