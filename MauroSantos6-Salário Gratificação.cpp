#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
    sabendo que esse funcionário possui uma gratificação de 10% sobre o salário base e paga 5% de imposto sobre o
    valor acumulado (salário base + gratificação).*/
    setlocale(LC_ALL, "");
    float salbase,novosal,novosalreaj;
    cout<<"Insira o Salario: "<<endl;
    cin>>salbase;
    novosal=salbase+(10*salbase/100);
    novosalreaj=novosal-(5*novosal/100);
    cout<<"Seu Salário com a gratificação é de: "<<novosal<<endl;
    cout<<"Seu Salário com a gratificação, Menos o Imposto é de: "<<novosalreaj<<endl;
    system("pause");
    return 0;
}
