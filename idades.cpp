#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

    char   nome1[20], nome2[20];
    int idade1, idade2;
    double media;

    cout<<"Dados da primeira pessoa:"<<endl;
    cout<<"Nome: "<<endl;
    cin>>nome1;
    cout<<"Idade: "<<endl;
    cin>>idade1;

    cout<<"Dados da segunda pessoa:"<<endl;
    cout<<"Nome: "<<endl;
    cin>>nome2;
    cout<<"Idade: "<<endl;
    cin>>idade2;

    media = (idade1 + idade2) / 2;
    
    cout<<"A idade media de "<<nome1<< " e "<< nome2<<" eh de "<< media<< " anos"<<endl;

}
