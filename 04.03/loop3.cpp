#include <iostream>
#include <sstream>
#include <stdio.h>

using namespace std;

int main()
{
    int a[5], b[5], c[5];

    cout << "#### VETOR A ####" << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Informe um valor: ";
        cin >> a[i];
    }

    cout << "#### VETOR B ####" << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Informe um valor: ";
        cin >> b[i];
    }

    cout << "#####################";

    cout << "SOMA DOS VALORES: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        c[i] = a[i] + b[i];

        cout << c[i] << endl;
    }
    return 0;
}