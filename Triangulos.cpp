//Bibliotecas usadas
#include <iostream>
#include <math.h>
using namespace std;

//Classe do Triangulo
class Triangulo {
private:
    double a, b, c;
public:
    //Variaves dos lados adquirindo o valor de a, b, c
    Triangulo(double lado1, double lado2, double lado3) {
        a = lado1;
        b = lado2;
        c = lado3;
    } 
    //Calculo da area do triangulo
    double calculoArea () {
        double p = (a + b + c) / 2.0;
        double area = sqrt (p * (p - a) * (p - b) * (p - c));
        return area;
    }
    //Torna os valores de lado para os valores de letra
    double getlado1() { return a; }
    double getlado2() { return b; }
    double getlado3() { return c; }
};
//Programa principal
int main() {
    //Variaveis dos lados
    double a, b, c;
    
    //Pergunta para o usuario os valor dos lados e faz a leitura dos valores
    cout << "Digite os lados do triangulo X: ";
    cin >> a >> b >> c;
    Triangulo X(a, b, c);
    
    //Pergunta para o usuario os valor dos lados e faz a leitura dos valores
    cout << "Digite os lados do triangulo Y: ";
    cin >> a >> b >> c;
    Triangulo Y(a, b, c);
    
    //Calculo das areas de cada triangulo
    double areaX = X.calculoArea();
    double areaY = Y.calculoArea();
    
    //Imprime o valor da area de cada triangulo
    cout << "Area do triangulo X é: " << areaX << endl;
    cout << "Area do triangulo Y é: " << areaY << endl;
    
    //Condicional para ver qual triangulo tem a maior area
    if (areaX > areaY) {
        cout << "A area do X é a maior area" << endl;
    }
    else if (areaX < areaY) {
        cout << "A area do Y é a maior area" << endl;
    }
    else {
        cout << "As areas são iguais" << endl;
    }
    
    return 0;
}
