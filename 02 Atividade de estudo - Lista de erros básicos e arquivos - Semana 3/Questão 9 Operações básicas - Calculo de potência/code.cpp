#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

  double x, y, potencia;

  cin>>x>>y;
  ofstream arq ("potencia.txt");
  arq<<fixed<<setprecision(1)<<x*y<<"m2"<<endl;
  potencia = 18 * (x*y);
  arq<<fixed<<setprecision(1)<<potencia<<"W";
  arq.close();
  return 0;
}