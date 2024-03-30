#include <iostream>
#include <fstream>
using namespace std;

int main (){
     
    int n, n1, n2, n3, resto;

    cin >> n;
    n1 = n/100;
    resto = n%100;
    n2 = resto/10;
    resto = resto%10;
    n3 = resto;
    cout << n1+n2+n3;
    ofstream arqS ("saida.txt");
    arqS << n1*n2*n3;
    arqS.close();
    return 0;
}