#include <iostream>
using namespace std;
int main ()
{
    /*Ejercicio 1 
    int n= 0 , i= 0;
    cout << "ingrese un numero mayor a 2: " "\n";
    cin >> n;
    for ( i= 2; i < n; i = i + 2)
    {
        cout << i << "\n";
    }
    return 0; */

    // Ejercicio 2 

    int n = 0 , primo = 1 , i = 2;
    cout << "Ingrese un numero para saber si es primo: ";
    cin >> n;
    for (i = n - 1; i <= n / 2; ++i)
    {
        if ( n % i == 0){
            primo = 0;
            break;
        }
    }
    if (primo)
    {
       cout << "Su numero es un numero primo. \n";
    } else
    {
        cout << " Su numero no es un numero primo. \n";
    }
    
    return 0;
}


