#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){

    double n1, n2, n3, n4, n5, n6, n7, n8;
    ifstream arqE ("dados.txt");
    arqE >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
    arqE.close();
    ofstream arqS ("media.txt");
    arqS << fixed << setprecision(3) << ((n1+n2+n3+n4+n5+n6+n7+n8)/8);
    
    return 0;
}