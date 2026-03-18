#include <iostream>
#include <list>

using namespace std;

int main(){
	list<int> listinha, listinha2;
	int x,i;
	
		
		for(i=0;i<5;i++){
			cout << "Digite numero: ";
			cin >> x;
			listinha.push_back(x);
		}
		
		for(i=0;i<5;i++){
			cout << "Digite numero: ";
			cin >> x;
			listinha2.push_back(x);
		}
	
		listinha.merge(listinha2);
		
		listinha.sort();
		
		cout << "Tudo junto e organizado:";
		
		for(auto elemento: listinha){
			cout << elemento << " ";
		}
		
		
	
	return 0;
}
