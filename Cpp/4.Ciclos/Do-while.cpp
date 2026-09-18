#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
char car = 'A';
do
{
cout <<car << ' ';
car ++;
} while (car <= 'Y');
system("PAUSE");
return EXIT_SUCCESS;
}