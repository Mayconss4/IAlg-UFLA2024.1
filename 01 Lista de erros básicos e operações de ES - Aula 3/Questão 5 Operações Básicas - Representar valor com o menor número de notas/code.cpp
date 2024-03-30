#include <iostream>
using namespace std;

int main(){
	int valor, resto, nota;
	
	cin>>valor;
	nota = valor/100;
	resto = valor%100;
	cout<<nota<<endl;
	nota = resto/50;
	resto = resto%50;
	cout<<nota<<endl;
	nota = resto/20;
	resto = resto%20;
	cout<<nota<<endl;
	nota = resto/10;
	resto = resto%10;
	cout<<nota<<endl;
	nota = resto/5;
	resto = resto%5;
	cout<<nota<<endl;
	nota = resto/2;
	resto = resto%2;
	cout<<nota<<endl;
	nota = resto/1;
	resto = resto%1;
	cout<< nota<<endl;
	return 0;
}