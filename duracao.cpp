#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

    int duracao, horas, minutos, segundos, resto;

    cout << "Digite a duracao em segundos: ";
    cin >> duracao;

    horas = duracao / 3600;
    resto = duracao % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    cout << horas << " horas." << endl << minutos << " minutos." << endl << segundos << " segundos."; 
}