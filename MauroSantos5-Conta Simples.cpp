#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Implemente um algoritmo que receba 3 n�meros reais de entrada.
    Calcule e mostre o resultado da multiplica��o dos dois primeiros n�meros dividido pelo terceiro n�mero fornecido pelo usu�rio.*/
    setlocale(LC_ALL, "");
    float num1,num2,num3,resultado;
    cout<<"Digite o Primeiro N�mero: "<<endl;
    cin>>num1;
    cout<<"Digite o Segundo N�mero: "<<endl;
    cin>>num2;
    cout<<"Digite o Terceiro N�mero: "<<endl;
    cin>>num3;
    resultado=(num1*num2)/num3;
    cout<<"Seu Resultado �: "<<resultado<<endl;
    system("pause");
}
