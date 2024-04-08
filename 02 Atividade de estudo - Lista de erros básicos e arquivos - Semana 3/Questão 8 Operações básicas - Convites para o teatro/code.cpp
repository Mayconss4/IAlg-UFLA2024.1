#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main (){
    double custo, convitePreco;
    int convites;
    ifstream arqE ("teatro.txt");
    arqE >> custo >> convitePreco;
    ofstream arqS ("convite.txt");
    convites = ceil(((int)custo/convitePreco));
    arqS << convites;
    arqE.close();
    arqS.close();
    return 0;
}