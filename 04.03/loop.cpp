#include <iostream>
#include <sstream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main()
{
    	setlocale (LC_ALL, "Portuguese");
    for (int i = 5; i >= 1; i--)
    {
        cout << i << " ";
    }
    return 0;
}