#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Sabe-se que, para iluminar corretamente os cômodos de uma casa, para cada m², deve-se usar 18 W de potência.
    Faça um programa que receba as dimensões de um cômodo retangular (em metros),
    calcule e mostre a área de mesmo (em m²) e a potência de iluminação necessária para iluminar corretamente o cômodo.*/
    setlocale(LC_ALL, "");
    float lar,comp,area,pilu;
    cout<<"Insira a Largura: "<<endl;
    cin>>lar;
    cout<<"Insira o Comprimento: "<<endl;
    cin>>comp;
    area=lar*comp;
    pilu=area*18;
    cout<<"A area é: "<<area<<" e a Potência de Iluminação é: "<<pilu<<"W"<<endl;
    system("pause");
    return 0;
}
