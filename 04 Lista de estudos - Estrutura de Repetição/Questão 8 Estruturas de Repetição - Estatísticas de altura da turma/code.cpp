#include <iostream>
#include <string>
using namespace std;

int main(){

    int qtd, contador=1, contadorm=0, contadorf=0;
    double altura, maior, menor, mediam=0, mediaf=0, media;
    string genero;

    cin>>qtd;
    if(qtd>0){
        cin>> altura;
        cin>> genero;
        maior = altura;
        menor = altura;
        media+=altura;
        if (genero=="f"){
            mediaf+=altura;
            contadorf++;
        }else if(genero == "m"){
            mediam+=altura;
            contadorm++;
        }
        while (contador<qtd){
            cin>> altura;
            cin>> genero;
            if (altura > maior){
                maior=altura;
            }else if( altura < menor){
                menor = altura;
            }
            if (genero=="f"){
                mediaf+=altura;
                media+=altura;
                contadorf++;
            } else if (genero=="m"){
                mediam+=altura;
                media+=altura;
                contadorm++;
            }
            contador++;
        }
        cout<<endl<<maior<<endl;
        cout<<menor<<endl;
        if(mediaf>0){
            cout<<mediaf/contadorf<<endl;
        }else{
            cout<<"erro"<<endl;
        }
        if(mediam>0){
            cout<<mediam/contadorm<<endl;
        }else{
            cout<<"erro"<<endl;
        }
        cout<<media/qtd;
    }
    return 0;
}