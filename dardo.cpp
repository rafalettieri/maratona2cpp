#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;


   int d1, d2, d3, maior;


   cout<<"Digite as tres distancias:"<<endl;
   cin>>d1;
   cin>>d2;
   cin>>d3;

   if(d1 > d2 && d1 > d3){
          maior = d1;
   }
   if(d2 > d3 ){
        maior = d2;
   }else{
       maior = d3;
   }
   
   cout<<"maior distancia = "<< maior<<endl;
}