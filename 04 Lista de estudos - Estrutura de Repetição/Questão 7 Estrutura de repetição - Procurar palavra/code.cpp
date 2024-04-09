#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    string nome, palavra, teste;
    int palavras=0;

    cin>>nome>>palavra;
    ifstream arqE (nome);
    while (arqE){
        arqE >> teste;
        if(teste==palavra){
            palavras++;
        }
    }
    cout<<palavras;
    arqE.close();
    return 0;
}