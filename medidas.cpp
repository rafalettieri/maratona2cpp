#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

       double A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

    cout<<"Digite a medida A: "<<endl;
    cin>>A;
    cout<<"Digite a medida B: "<<endl;
    cin>>B;
    cout<<"Digite a medida C: "<<endl;
    cin>>C;

    areaQuadrado = A * A;
    areaTriangulo = (A * B) / 2;
    areaTrapezio = (A + B) / 2 * C;

    cout<<"QUADRADO = "<<areaQuadrado<<endl;
    cout<<"TRIANGULO = "<<areaTriangulo<<endl;
    cout<<"TRAPEZIO = "<< areaTrapezio<<endl;

}
    
