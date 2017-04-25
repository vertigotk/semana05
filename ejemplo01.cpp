#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // para saber el tamaño del vector e imprimeir un caracter
    vector<char> vtexto = {'h', 'o' , 'l' , 'a'};
        
        cout << " tamaño:" << vtexto.size() << endl;
        cout << "caracter de la posicion 3:" << vtexto[2] << endl;
        
        // imprimir todos los caracteres
        for (auto  i : vtexto)
        {
            cout << i;
        }
    
        return 0;
        
}