#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
int suma = 0, n = 1;
while (n <= 9){
suma = suma + n;
std::cout <<n << std::endl;
n++;
}
cout <<"La suma es de: "<< suma ;
system("PAUSE");
return EXIT_SUCCESS;
}