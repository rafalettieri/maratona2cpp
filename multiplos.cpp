#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main(){

     int  x, y;

    cout << "Digite dois numeros inteiros: "; cin >> x; cin >> y;

    if((x % y == 0) || (y % x == 0)){
        cout << "Sao multiplos";
    } else {
        cout << "Nao sao multiplos";
    }
}
