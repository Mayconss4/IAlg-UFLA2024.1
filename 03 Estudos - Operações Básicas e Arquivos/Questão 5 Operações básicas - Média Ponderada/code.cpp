#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){

    double n1, p1, n2, p2, n3, p3;
    ifstream arqE ("notas.txt");
    arqE >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
    arqE.close();
    ofstream arqS ("final.txt");
    arqS << fixed << setprecision(2)<<(((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3));
    arqS.close();
    
    return 0;
}