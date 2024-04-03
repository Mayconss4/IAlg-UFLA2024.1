#include <iostream>
#include <fstream>

using namespace std;

int main(){
	float valorProduto, valorLiquido;
	ifstream arqE ("entrada");
	arqE >> valorProduto;
	valorLiquido=valorProduto-(valorProduto*0.09);
	cout<<valorLiquido;
	arqE.close();
    return 0;
}
