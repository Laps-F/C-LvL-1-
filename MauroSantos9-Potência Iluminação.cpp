#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Sabe-se que, para iluminar corretamente os c�modos de uma casa, para cada m�, deve-se usar 18 W de pot�ncia.
    Fa�a um programa que receba as dimens�es de um c�modo retangular (em metros),
    calcule e mostre a �rea de mesmo (em m�) e a pot�ncia de ilumina��o necess�ria para iluminar corretamente o c�modo.*/
    setlocale(LC_ALL, "");
    float lar,comp,area,pilu;
    cout<<"Insira a Largura: "<<endl;
    cin>>lar;
    cout<<"Insira o Comprimento: "<<endl;
    cin>>comp;
    area=lar*comp;
    pilu=area*18;
    cout<<"A area �: "<<area<<" e a Pot�ncia de Ilumina��o �: "<<pilu<<"W"<<endl;
    system("pause");
    return 0;
}
