#include <iostream>
using namespace std;
int main ()
{
    char opcion, variable = 'x';

    do
    {
     cout    <<"menu" << "\n";
     cout    <<"A carne asada" << "\n";
     cout    <<"B pollo" << "\n";
     cout    <<"C cerdo" << "\n";
     cout    <<"Seleccione una opcion: " << "\n";
     cin     >> opcion;
     cout    <<"opcion seleccionada " <<opcion << "\n";
    } 
    
    while (opcion != variable);

    return 0;
    
}