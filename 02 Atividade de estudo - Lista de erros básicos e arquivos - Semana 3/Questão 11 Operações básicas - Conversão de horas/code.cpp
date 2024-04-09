#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int minutes, hours;
    
    cin>>hours>>minutes;
    ofstream arqS ("saida.txt");
    arqS<<hours*60<<endl<<hours*60+minutes<<endl<<((hours*60)+minutes)*60;
    arqS.close();
    return 0;
}
