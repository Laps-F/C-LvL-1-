#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Calcule e mostre a área total e o valor médio de venda (R$) que Zé Borba Gato pode pedir pelo terreno. */
    setlocale(LC_ALL, "");
    float alt,basemaior,basemenor,vm,area,vterreno;
    cout<<"Insira em Metros a Altura do Trapézio na Planta: "<<endl;
    cin>>alt;
    cout<<"Insira em Metros a Base Maior do Trapézio na Planta: "<<endl;
    cin>>basemaior;
    cout<<"Insira em Metros a Base Menor do Trapézio na Planta: "<<endl;
    cin>>basemenor;
    cout<<"Insira o Valor do Metro Quadrado na Região do lote de Zé Borba: "<<endl;
    cin>>vm;
    area=((basemaior+basemenor)*alt)/2;
    vterreno=area*vm;
    cout<<"O terreno de Zé Borba gato tem "<<area<<" Metros Quadrados"<<endl;
    cout<<"O valor do terreno de Zé Borba gato é de: "<<vterreno<<" Reais"<<endl;
    system("pause");
    return 0;
}
