/*elabore um programa que solicite um numero inteiro N
e em seguida calcule e imprima a soma dos positivos*/
#include <iostream>
#include <sstream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, s, i;
    cout << "Digite o número: ";
    cin >> n;
    s = 0;
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            s += i;
            cout << "Contador: " << i << endl;
            cout << "Soma: " << s << endl;
            
        }
        
    }
    return 0;
}