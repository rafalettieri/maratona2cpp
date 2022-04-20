#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

    int N, X, i, dentro, fora;

   dentro = 0;
   fora = 0;


   cout<<"Quantos numeros voce vai digitar? "<<endl;
   cin>>N;
   
      for(int i = 0; i < N; i++){
      cout<<"Digite um numero: "<<endl;
      cin>>X;
      
        if(X >= 10 && X <= 20){
             dentro = dentro + 1;
        }else{
            fora = fora + 1;
        }
      }
   
   cout<<dentro<<"DENTRO"<<endl;
   cout<<fora<<"FORA"<<endl;
      
}