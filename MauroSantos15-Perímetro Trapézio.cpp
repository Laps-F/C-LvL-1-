#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Calcule e mostre a �rea total e o valor m�dio de venda (R$) que Z� Borba Gato pode pedir pelo terreno. */
    setlocale(LC_ALL, "");
    float alt,basemaior,basemenor,vm,area,vterreno;
    cout<<"Insira em Metros a Altura do Trap�zio na Planta: "<<endl;
    cin>>alt;
    cout<<"Insira em Metros a Base Maior do Trap�zio na Planta: "<<endl;
    cin>>basemaior;
    cout<<"Insira em Metros a Base Menor do Trap�zio na Planta: "<<endl;
    cin>>basemenor;
    cout<<"Insira o Valor do Metro Quadrado na Regi�o do lote de Z� Borba: "<<endl;
    cin>>vm;
    area=((basemaior+basemenor)*alt)/2;
    vterreno=area*vm;
    cout<<"O terreno de Z� Borba gato tem "<<area<<" Metros Quadrados"<<endl;
    cout<<"O valor do terreno de Z� Borba gato � de: "<<vterreno<<" Reais"<<endl;
    system("pause");
    return 0;
}
