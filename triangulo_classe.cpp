#include <iostream>
#include <math.h>

// Definição da classe Triangulo
class Triangulo {
    private: 
        double a, b, c;
    public:
        // Construtor da classe Triangulo que recebe os lados como parâmetros e atribui a cada membro correspondente
        Triangulo (double lado1, double lado2, double lado3) {
            a = lado1;
            b = lado2;
            c = lado3;
        }
        
        // Função que calcula a área do triângulo a partir dos lados e retorna o resultado
        double calculaArea() {
            double p = (a + b + c) / 2.0;
            double area = std::sqrt(p * (p - a) * (p - b) * (p - c));
            return area;
        }
        
        // Funções get para obter os valores dos lados do triângulo
        double getLado1() { return a; }
        double getLado2() { return b; }
        double getLado3() { return c; }
};

// Função principal do programa
int main() {
    double a, b, c;
    std::cout << "Digite as medidas dos lados do triangulo X: ";
    std::cin >> a >> b >> c;
    
    // Criação de um objeto da classe Triangulo para o triângulo X
    Triangulo X(a, b, c);
    
    std::cout << "Digite as medidas dos lados do triangulo Y: ";
    std::cin >> a >> b >> c;
    
    // Criação de um objeto da classe Triangulo para o triângulo Y
    Triangulo Y(a, b, c);
    
    // Cálculo da área dos triângulos
    double areaX = X.calculaArea();
    double areaY = Y.calculaArea();
    
    // Impressão das áreas dos triângulos
    std::cout << "Area do Triangulo X: " << areaX << std::endl;
    std::cout << "Area do Triangulo Y: " << areaY << std::endl;
    
    // Comparação das áreas e impressão do resultado
    if (areaX > areaY) {
        std::cout << "Triangulo X tem a maior area" << std::endl;
    }
    else if (areaY > areaX) {
        std::cout << "Triangulo Y tem a maior area" << std::endl;
    }
    else {
        std::cout << "Ambos os triangulos tem a mesma area" << std::endl;
    }
    
    return 0;
}
