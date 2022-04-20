#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

   int C, F;
   char simnao;

     do{
          cout<<"Digite a temperatura em Celsius: "; cin>>C;
          F = 9.0 * C / 5.0 + 32.0;
          cout<<"Equivalente em Fahrenheit: "<<F<<endl;
          cout<<"Deseja repetir (s/n)? "<<endl; cin>>simnao;

     }while (simnao = 's');
     
}