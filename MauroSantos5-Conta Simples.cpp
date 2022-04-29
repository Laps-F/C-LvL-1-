#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Implemente um algoritmo que receba 3 números reais de entrada.
    Calcule e mostre o resultado da multiplicação dos dois primeiros números dividido pelo terceiro número fornecido pelo usuário.*/
    setlocale(LC_ALL, "");
    float num1,num2,num3,resultado;
    cout<<"Digite o Primeiro Número: "<<endl;
    cin>>num1;
    cout<<"Digite o Segundo Número: "<<endl;
    cin>>num2;
    cout<<"Digite o Terceiro Número: "<<endl;
    cin>>num3;
    resultado=(num1*num2)/num3;
    cout<<"Seu Resultado é: "<<resultado<<endl;
    system("pause");
}
