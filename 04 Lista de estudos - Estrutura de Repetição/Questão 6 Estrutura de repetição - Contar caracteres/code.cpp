#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    char letra; 
    string nome;
    int tamanho=0;

    cin>>nome;
    ifstream arqE (nome);
    while (arqE){
        arqE >> letra;
        tamanho++;
    }
    tamanho--;
    cout<<tamanho;
    arqE.close();
    return 0;
}