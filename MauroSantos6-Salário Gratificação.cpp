#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber,
    sabendo que esse funcion�rio possui uma gratifica��o de 10% sobre o sal�rio base e paga 5% de imposto sobre o
    valor acumulado (sal�rio base + gratifica��o).*/
    setlocale(LC_ALL, "");
    float salbase,novosal,novosalreaj;
    cout<<"Insira o Salario: "<<endl;
    cin>>salbase;
    novosal=salbase+(10*salbase/100);
    novosalreaj=novosal-(5*novosal/100);
    cout<<"Seu Sal�rio com a gratifica��o � de: "<<novosal<<endl;
    cout<<"Seu Sal�rio com a gratifica��o, Menos o Imposto � de: "<<novosalreaj<<endl;
    system("pause");
    return 0;
}
