#include <iostream>
#include <math.h>
using namespace std;

//Função criada para calcular a area do triangulo
double calcularAreaTriangulo (double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p-c));
    
}
int main() {
    double xa, xb, xc, ya, yb, yc;
    
    //Pede os valores dos lados e lê os valores para as variaveis
    cout << "Digite as medidas do triângulo X: ";
    cin >> xa >> xb >> xc;
    
    //Pede os valores dos lados e lê os valores para as variaveis
    cout << "Digite as medidas do triângulo Y: ";
    cin >> ya >> yb >> yc;
    
    //Chama a função da area para calcular a area dos triangulos
    double areaX = calcularAreaTriangulo(xa, xb, xc);
    double areaY = calcularAreaTriangulo(ya, yb, yc);
    
    //Imprime os valores das areas para o usuario
    cout << "A área do triangulo X é: " << areaX << endl;
    cout << "A área do triangulo Y é: " << areaY <<endl;
    
    //Condicional para ver qual tem a maior area, se forem diferentes.
    if (areaX > areaY) {
        cout << "O triangulo X tem a maior area. " << endl;
    }
    else if (areaY > areaX) {
        cout << "O triangulo Y tem a maior area. " << endl;
    } 
    else {
        cout << "Os triangulos possuem a mesma area. " << endl;
    }

    return 0;
}