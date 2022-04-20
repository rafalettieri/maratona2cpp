#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

  double salario;
  int porcentagem;
  int aumento;
  int novoSalario;
  int teste;

   cout<<"Digite o salario da pessoa: "<<endl;
   cin>>salario;

    if (salario <= 1000.0){
      porcentagem = 20;
    }
    else{
        if (salario <= 3000.0){
         porcentagem = 15;
        }
        else{
            if (salario <= 8000.0){
                porcentagem = 10;
            }
            else{
                porcentagem = 5;
            }
        }
    }

   aumento = salario * porcentagem / 100;
   novoSalario = salario + aumento;

   cout<<"Novo salario = R$ "<< novoSalario <<endl;
   cout<<"Aumento = R$ "<< aumento <<endl;
   cout<<"Porcentagem = "<< porcentagem <<endl;

}
