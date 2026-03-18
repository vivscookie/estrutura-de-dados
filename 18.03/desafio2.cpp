#include <iostream>
#include <list>

using namespace std;

int main(){
	list<string> listinha;
	string x;
	int i;
	
		
		for(i=0;i<5;i++){
			cout << "Digite string: ";
			cin >> x;
			listinha.push_back(x);
		}
	
		listinha.reverse();
		
		cout << "Invertida:";
		
		for(auto elemento: listinha){
			cout << elemento << " ";
		}
		
		
	
	return 0;
}
