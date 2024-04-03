#include <iostream>
#include <fstream>
using namespace std;
int main (){
    double custo, convitePreco;
    int convites;
    cin>>custo>>convitePreco;
    ofstream arqS ("convite.txt");
    convites = ((int)custo/convitePreco);
    arqS << convites;
    arqS.close();
    return 0;
}
