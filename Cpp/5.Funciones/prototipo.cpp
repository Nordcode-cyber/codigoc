#include <cstdlib>
#include <iostream>
using namespace std;
void referencia(int& x){ //Parámetro por referencia

x += 2;
}
int main(int argc, char *argv[]){
int x = 20;
cout << " antes de la llamada " << " x= " << x << endl;
referencia (x); //Llamada con nombre de variable
cout << " despues de la llamada " <<" x= " << x << endl;
system("PAUSE");
return EXIT_SUCCESS;
}