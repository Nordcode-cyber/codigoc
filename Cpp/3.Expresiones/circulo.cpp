#include <cstdlib>
#include <iostream>
#define pi 3.141592
using namespace std;
int main(int argc, char *argv[])
{
float radio, longitud, area;
cout << "ingrese radio del circulo: "; 
cin >> radio; //lectura del radio
longitud = 2 * pi * radio;
//ctrl + F5
area = pi * radio * radio;
cout << " radio = " << radio << endl;
cout << " longitud = " << longitud << endl;
cout << " area = " << area << endl;
system("PAUSE");
return EXIT_SUCCESS;
}