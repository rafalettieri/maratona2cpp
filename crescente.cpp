#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

   int X, Y;



   cout<<"Digite dois numeros:"<<endl;
   cin>>X;
   cin>>Y;
   
   while(X && Y){
        if(X < Y){
            cout<<"crescente"<<endl;
        }else{
            cout<<"decrescente"<<endl;
        }
   

   cout<<"digite outros dois numero: "<<endl;
    cin>>X;
    cin>>Y;
    
   }
}