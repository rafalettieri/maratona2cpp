#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

   int N, i;
   int x, y, divisao;

   cout<<"Quantos casos voce vai digitar? "; cin>>N;

     for(int i = 0; i < N; i++){

      cout<<"Entre com o numerador: "; cin>>x;
      cout<<"Entre com o denominador: "; cin>>y;

     divisao = (x / y);

          if(x == 0){
               cout<<"DIVISAO IMPOSSIVEL";
          }else{
               cout<<"DIVISAO = "<<divisao<<endl;
          }

     }


}