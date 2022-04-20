#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

     int idade, soma, cont;
     double media;

     soma = 0;
     cont = 0;

     cout<<"Digite as idades:"; cin>>idade;

     while (idade > 0) {
           soma = soma + idade;
           cont = cont + 1;
           cout<<"Digite as idades:"; cin>>idade;
     }

     media = (soma / cont);

     if (cont = 0){
      cout<<"IMPOSSIVEL CALCULAR";

     }else{
      cout<<"MEDIA = "<<media<<endl;

     }

}
