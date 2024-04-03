#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main  (){
	float c, f, k;
	cin >> c;
	k = c+273;
	f = ((1.8*c)+32);
	ofstream arqS ("temperatura.txt");
	arqS <<k<<" K"<<endl;
	arqS <<f<<" F";
	arqS.close();
	return 0;
}

