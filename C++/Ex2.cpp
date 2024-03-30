#include <iostream>
using namespace std;

int main(){
    float lado_a, lado_b, lado_c;
    
    cout << "Insira o tamanho de cada lado do triangulo:" << endl;
    cin >> lado_a >> lado_b >> lado_c;
    
    if((lado_a == lado_b) && (lado_b == lado_c) && (lado_c == lado_a)){
        cout << "Equilatero" << endl;
    }
    else if((lado_a != lado_b) && (lado_b != lado_c) && (lado_c != lado_a)){
        cout << "Escaleno" << endl;
    }
    else{
        cout << "Isosceles" << endl;
    }
    return 0;
}