#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
     
     int n, factorial = 1;

     cout << "Ingrese un numero: "<<"\n";
     cin >> n;

     for(int i = 1; i<= n; i++ ){

        factorial = factorial * i;




     }
     cout << "\n El factorial del numero es. "<< factorial << "\n"; 
     


    return 0;
}