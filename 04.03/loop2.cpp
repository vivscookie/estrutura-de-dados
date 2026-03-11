#include <iostream>
#include <sstream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main()
{
    	setlocale (LC_ALL, "Portuguese");
    int a[5];

    for (int i = 0; i < 5; ++i)
    {
        cout << "Informe um valor: ";
        cin >> a[i];
    }

    cout << "Valores informados: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}