#include <iostream>
using namespace std;

int main(){
    int num, resto;
    
    cin >> num;
    resto = num%2;
    
    if(resto == 0){
        cout << "Esse número é par";
    }
    else
        cout<< "Esse número é impar";

    return 0;
}