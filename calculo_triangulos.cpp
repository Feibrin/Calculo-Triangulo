#include <iostream>
#include <math.h>
using namespace std;

// Função para calcular a área de um triângulo
double CalcularAreaTriangulo(double a, double b, double c) {
    double p = (a + b + c) / 2; // calcula o semiperímetro
    return sqrt(p * (p - a) * (p - b) * (p - c)); // retorna a área usando a fórmula de Heron
}

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    // Obtém as medidas dos lados do triângulo X a partir do usuário
    cout << "Digite as medidas dos lados do triangulo X (separados por espaco): ";
    cin >> xa >> xb >> xc;
    
    // Obtém as medidas dos lados do triângulo Y a partir do usuário
    cout << "Digite as medidas dos lados do triangulo Y (separados por espaco): ";
    cin >> ya >> yb >> yc;
    
    // Calcula as áreas dos triângulos X e Y usando a função CalcularAreaTriangulo
    double areaX = CalcularAreaTriangulo(xa, xb, xc);
    double areaY = CalcularAreaTriangulo(ya, yb, yc);
    
    // Exibe as áreas calculadas
    cout << "Area do Triangulo X: " << areaX << endl;
    cout << "Area do Triangulo Y: " << areaY << endl;
    
    // Compara as áreas e exibe qual triângulo tem a maior área, ou se ambos têm a mesma área
    if (areaX > areaY) {
        cout << "O triangulo X tem a maior area" << endl;
    } else if (areaY > areaX) {
        cout << "O triangulo Y tem a maior area" << endl;
    } else {
        cout << "Os triangulos tem a mesma area" << endl;
    }
    
    return 0;
}
