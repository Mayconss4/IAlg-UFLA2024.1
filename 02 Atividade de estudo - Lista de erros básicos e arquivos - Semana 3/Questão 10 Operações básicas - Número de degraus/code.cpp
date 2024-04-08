#include <fstream>
#include <math.h>

using namespace std;

int main () {

  double steps, meters;

  ifstream arqE ("entrada.txt");
  arqE>>steps>>meters;
  ofstream arqS ("degraus.txt");
  arqS<<ceil((meters*100)/steps);
  arqE.close();
  arqS.close();
  return 0;
}