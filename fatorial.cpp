#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

 int  N, i, fat;

   cout << "Digite o valor de N: ";
   cin >> N;

   fat = 1;
   for (i = 1; i < N; i++){
      fat = fat * i;
   }


   cout << "FATORIAL = " << fat;




}