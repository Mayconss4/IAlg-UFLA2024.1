#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){

    string arqName, word;

    cin >> arqName;
    ifstream arqE (arqName);
    arqE >> word;
    cout << word;
    arqE.close();
    return 0;
}