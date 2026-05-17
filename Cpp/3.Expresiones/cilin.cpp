#include <cstdlib>
#include <iostream>
#include <cmath>
#define pi 3.141592
using namespace std;
int main(int argc, char *argv[])
{
  float radio, altura, area, volumen, exponente=2;
  cout << "ingrese radio del cilindro: "; cin >> radio;
  cout << "ingrese altura del cilindro: ";cin >> altura;
  area =(2*pi*(radio + altura));
  volumen =(pi*pow(radio, exponente)*altura);
cout << "volumen del cilindro," << volumen <<".\n";
cout << "area del cilindro," << area <<".\n";
//ctrl + F5
system("PAUSE");
return EXIT_SUCCESS;
}