#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	stack <int> pilha;
	
	pilha.push(1);
	cout << pilha.top() << endl;
	pilha.push(3);
	cout << pilha.top() << endl;
	pilha.push(5);
	cout << pilha.top() << endl;
	pilha.pop();

	cout << pilha.top()<< endl;
	
	return 0;
	}
