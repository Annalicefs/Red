#include <iostream>
#include <cmath>

using namespace std;

class Circulo{
private:
    float raio, X, Y;

    float calculaArea(){
        return M_PI * pow(raio, 2);
    }

    float calculaDistancia(Circulo& outro){
        return sqrt(pow(X - outro.X, 2) + pow(Y - outro.Y, 2));
    }

    float calculaCircunferencia(){
        return 2 * M_PI * raio;
    }

public:
    void setRaio(float r){
        raio = r;
    }

    void setCentro(float x, float y){
        X = x;
        Y = y;
    }

    float getRaio(){
        return raio;
    }

    float getX(){
        return X;
    }

    float getY(){
        return Y;
    }

    void imprimirRaio(){
        cout << "Raio: " << getRaio() << endl;
    }

    void imprimirCentro(){
        cout << "Centro: (" << getX() << ", " << getY() << ")" << endl;
    }

    void imprimirArea(){
        cout << "Área: " << calculaArea() << endl;
    }

    float calcularDistancia(Circulo& outro){
        return calculaDistancia(outro);
    }

    float calcularCircunferencia(){
        return calculaCircunferencia();
    }
};

int main() {
    Circulo c1, c2;
    
    c1.setRaio(3);
    c1.setCentro(0, 0);
    
    c2.setRaio(5);
    c2.setCentro(5, 5);
    
    cout << "Informações sobre o primeiro círculo:" << endl;
    c1.imprimirRaio();
    c1.imprimirCentro();
    c1.imprimirArea();
    
    cout << endl;
    cout << "Informações sobre o segundo círculo:" << endl;
    c2.imprimirRaio();
    c2.imprimirCentro();
    c2.imprimirArea();
    
    cout << endl;
    cout << "Distância entre os centros dos círculos: " << c1.calcularDistancia(c2) << endl;
    cout << "Circunferência do círculo 1: " << c1.calcularCircunferencia() << endl;
    cout << "Circunferência do círculo 2: " << c2.calcularCircunferencia() << endl;
    
    return 0;
}
