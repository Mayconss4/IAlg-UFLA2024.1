#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int dias;
	float valorLiquido;
	ifstream arqE ("entrada");
	arqE >> dias;
	
	
	cin>>valorLiquido;
	
	
	valorLiquido=((dias*60) - (dias*60*0.08)) ;
	
	ofstream arqS ("saida");
	arqS<<"R$ " <<valorLiquido;
	
	arqE.close();
	arqS.close();
    return 0;
}
