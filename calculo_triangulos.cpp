#include <iostream>
#include <math.h>
using namespace std;

double CalcularAreaTriangulo (double a, double b, double c) {
    double p = (a + b + c) /2;
    return sqrt (p* (p - a) * (p - b) * (p - c));
    }
    
    int main() {
        double xa, xb, xc, ya, yb, yc;
        
        
        cout << "Digite as medidas dos lados do triangulo X (separados por espaco): ";
        cin >> xa >> xb >> xc;
        
        
        cout << "Digite as medidas dos lados do triangulo Y (separados por espaco): ";
        cin >> ya >> yb >> yc;
        
        
        double areaX = CalcularAreaTriangulo (xa, xb, xc);
        double areaY = CalcularAreaTriangulo (ya, yb, yc);
        
        
        cout << "Area do Triangulo X: " << areaX << endl;
        cout << "Area do Triangulo Y: " << areaY << endl;
        
        
        if (areaX > areaY) {
            cout << "O triangulo X tem a maior area" << endl;
        } else if (areaY > areaX) {
            cout << "O triangulo Y tem a maior area" << endl;
        } else {
            cout << "Os triangulos tem a mesma area" << endl;
        }
        
        return 0;
    }