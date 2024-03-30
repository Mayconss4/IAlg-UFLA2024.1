#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){

    string docName, conteudo;
    cin >> docName;
    cin >> conteudo;
    ofstream arqE (docName);
    arqE << conteudo;
    arqE.close();

    return 0;
}