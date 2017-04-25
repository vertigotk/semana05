#include <iostream>
#include <vector> 
#include <string>

using namespace std;

int main()
{
    
    string nombre;
    string apellido = "perez"; // { 'p', 'e ', 'r' ,'e' ,'z' }
    //ingreso de string 
    cout << "ingrese su nombre:";
    //cin >> nombre;
    getline(cin,nombre);
    
    cout << nombre.size();//tamaño del caracter 
    
    
    cout << " la inicial del nombre es :" << nombre[0] << endl;

cout << " imprimri el texto :" << nombre << endl;
    
    return 0;
}