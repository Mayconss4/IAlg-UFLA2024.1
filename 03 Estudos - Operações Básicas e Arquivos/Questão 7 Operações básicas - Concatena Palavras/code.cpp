#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    string a1, a2, a3, word1, word2;
    
    cin >> a1 >> a2 >> a3;
    ifstream arqE (a1);
    arqE >> word1;
    arqE.close();
    ifstream arqE2 (a2);
    arqE2 >> word2;
    arqE.close();
    ofstream arqS (a3);
    arqS << word1<<" "<<word2;
    arqS.close();

    return 0;
}