#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

  

   int distancia;
   int consumo;
   int combustivel;



   cout<<"Distancia percorrida: "<<endl;
   cin>>distancia;
   cout<<"Combustivel gasto: "<<endl;
   cin>>combustivel;
   
   consumo = distancia / combustivel;
   
cout<<"Consumo medio: "<<consumo<<endl;

}
