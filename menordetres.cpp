#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

    int a, b, c, menor;


   cout<<"Primeiro valor: "<<endl;
   cin>>a;
   cout<<"Segundo valor: "<<endl;
   cin>>b;
   cout<<"Terceiro valor: "<<endl;
   cin>>c;
   
   if (a < b && a < c){
        menor = a;
   }else{

   
    if(b < c){
         menor = b;
    }else{
         menor = c;
    }
   }
   cout<<"MENOR = "<<menor<<endl;

}