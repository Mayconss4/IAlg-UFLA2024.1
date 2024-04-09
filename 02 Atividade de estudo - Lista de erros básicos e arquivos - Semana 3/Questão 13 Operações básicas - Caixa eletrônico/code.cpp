#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int valor, cem, cinquenta, dez;

  cin>>valor;
  cem = valor/100;
  valor = valor%100;
  cinquenta = valor/50;
  valor = valor%50;
  dez= valor/10;
  ofstream arqS ("saque.txt");
  arqS<<cem<<endl<<cinquenta<<endl<<dez;
  return 0;
}