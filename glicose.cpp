#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

   int glicose;


   cout<<"Digite a medida da glicose: "<<endl;
   cin>>glicose;
   
   if(glicose <= 100.0){
        cout<<"Normal"<<endl;
   }
   if(glicose <= 140.0){
        cout<<"Elevado"<<endl;
   }else{
       cout<<"Diabetes"<<endl;
   }
}