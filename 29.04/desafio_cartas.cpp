#include <iostream>
#include <stack>

using namespace std;
//JOGA : JJAA
//JOGB : 4444
void exibirPilha(stack<string>s){
	cout << "Conteudo da pilha (topo -> base): " << endl;
	while (!s.empty()){
		cout << "|" << s.top() << "|" << endl;
		s.pop();
	}
	cout << "-------" << endl;
}

int main(){
	
	stack<string> jogador1, jogador2, mesa, descarte;

	jogador1.push("J");
	jogador1.push("A");
	jogador1.push("7");
	jogador1.push("3");
	jogador1.push("10");
	jogador1.push("A");
	jogador1.push("J");
	jogador1.push("K");
	
	jogador2.push("J");
	jogador2.push("4");
	jogador2.push("A");
	jogador2.push("A");
	jogador2.push("10");
	jogador2.push("4");
	jogador2.push("4");
	jogador2.push("4");
	
	exibirPilha(jogador1);
	exibirPilha(jogador2);
	
	//K
	descarte.push(jogador1.top());
	jogador1.pop();
	
	//J
	mesa.push(jogador1.top());
	jogador1.pop();
	
	//A
	mesa.push(jogador1.top());
	jogador1.pop();
	
	//10
	descarte.push(jogador1.top());
	jogador1.pop();
	
	//3
	descarte.push(jogador1.top());
	jogador1.pop();
	
	//7
	descarte.push(jogador1.top());
	jogador1.pop();
	
	//A
	jogador1.push(mesa.top());
	mesa.pop();
	
	//J
	jogador1.push(mesa.top());
	mesa.pop();
	
	//JOGADOR2
	
	//4
	mesa.push(jogador2.top());
	jogador2.pop();
	
	//4
	mesa.push(jogador2.top());
	jogador2.pop();
	
	//4
	mesa.push(jogador2.top());
	jogador2.pop();
	
	//10
	descarte.push(jogador2.top());
	jogador2.pop();
	
	//A
	descarte.push(jogador2.top());
	jogador2.pop();
	
	//A
	descarte.push(jogador2.top());
	jogador2.pop();
	
	//4
	mesa.push(jogador2.top());
	jogador2.pop();
	
	//J
	descarte.push(jogador2.top());
	jogador2.pop();
	
	//4
	jogador2.push(mesa.top());
	mesa.pop();
	
	//4
	jogador2.push(mesa.top());
	mesa.pop();
	
	//4
	jogador2.push(mesa.top());
	mesa.pop();
	
	//4
	jogador2.push(mesa.top());
	mesa.pop();
	
	cout << "Jogador A" << endl;
	exibirPilha(jogador1);
	
	cout << "Jogador B" << endl;
	exibirPilha(jogador2);
	
	cout << "Descartadas" << endl;
	exibirPilha(descarte);
	
	return 0;
	}
