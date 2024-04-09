#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double l, a, p, w;
	
    ifstream arqE ("entrada.txt");
    arqE>>l>>a>>p>>w;
    cout<<(l*a*p)*w;
    arqE.close();
    return 0;
}
