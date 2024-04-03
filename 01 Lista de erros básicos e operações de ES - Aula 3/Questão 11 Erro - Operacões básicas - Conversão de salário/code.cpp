#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main  (){
	float real, dolar, euro, libra;
	cin >> real;
	dolar = real / 2.13;
	euro = real / 2.84;
	libra = real / 3.34;
	ofstream arqS ("salario.txt");
	arqS <<dolar<<endl;
	arqS <<euro<<endl;
	arqS <<libra<<endl;
	arqS.close();
	return 0;
}
