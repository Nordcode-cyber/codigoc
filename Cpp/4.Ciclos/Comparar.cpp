#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
int num = 10;
while (num <= 100){ //con bucle while
    cout << num << " ";
    num += 10;
}
cout << endl << endl; // con bucle for
for (num = 1;num <= 10;num += 1){
    cout << num << " ";
    cout << endl<< endl;
    num = 1; 
}
 //con bucle do while
do{
    cout << num << " ";
    num += 1;
}
while (num <= 10);
system("PAUSE");
return EXIT_SUCCESS;
}