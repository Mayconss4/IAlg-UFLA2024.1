#include <iostream>
#include <fstream>
#include <cmath>
#include <ctgmath>
using namespace std;
int main (){

    float x;
    cin >> x;
    ofstream saida ("saida.txt");
    saida << (int)x << endl;
    saida << x-((int)x) << endl;
    saida << (int)x << endl;
    saida << ((int)x)+1 << endl;
    saida << round(x);
    saida.close();
    return 0;
}