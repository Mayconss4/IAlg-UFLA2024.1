#include <iostream>
#include <fstream>
using namespace std;
int main (){

    float a, b;
    ifstream entrada ("triangulo.txt");
    entrada >> a >> b;
    ofstream saida ("saida.txt");
    saida << ((a*b)/2);
    entrada.close();
    saida.close();
    return 0;
}
