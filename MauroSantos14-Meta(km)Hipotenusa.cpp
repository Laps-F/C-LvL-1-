#include<iostream>
#include<math.h>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Sabendo que ela deve caminhar um valor fixo de km por dia e dadas as medidas das ruas A e B da figura abaixo,
     calcule e mostre quantas voltas Dona Maria precisa fazer no quarteirão para que ela atinja sua meta.*/
    setlocale(LC_ALL, "");
    float meta,ruaa,ruab,ruac,ruac2,perimetro,nvoltas;
    cout<<"Insira a Meta de Dona Maria das Couve: "<<endl;
    cin>>meta;
    cout<<"Insira a Medida em Metros da Rua A: "<<endl;
    cin>>ruaa;
    cout<<"Insira a Medida em Metros da Rua B: "<<endl;
    cin>>ruab;
    ruac2=pow(ruaa,2)+pow(ruab,2);
    ruac=sqrt(ruac2);
    perimetro=ruaa+ruab+ruac;
    nvoltas=meta/perimetro;
    cout<<"Dona Maria precisa dar "<<nvoltas<<" para atingir sua Meta"<<endl;
    system("pause");
    return 0;
}
