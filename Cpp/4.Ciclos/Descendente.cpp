#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
cout << "n n*n n*n*n" << endl;
for (int n = 9; n >= 1; n--)
cout << n << '\t' << n * n << '\t' << n * n* n <<endl;
system("PAUSE");
return EXIT_SUCCESS;
}