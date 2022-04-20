#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

    int N, i;
    double a, b, c, media;


   cout<<"Quantos casos voce vai digitar? "<<endl;
   cin>>N;
   
  for(i = 0; i < N; i++){

      cout<<"Digite tres numeros:"<<endl;
      cin>>a;
      cin>>b;
      cin>>c;
      media = (a * 2 + b * 3 + c * 5) / 10;
      cout<<"MEDIA = "<<media<<endl;


  }
}
   
