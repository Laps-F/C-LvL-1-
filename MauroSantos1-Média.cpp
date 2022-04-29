#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /* Crie um algoritmo que calcule a soma e a média de 3 números passados pelo usuário.*/
    setlocale(LC_ALL, "");
    float num1, num2, num3, Resultado1, Resultado2;
    cout<<"Parte 1"<<endl;
        cout<<"Digite o Primeiro numero: "<<endl;
        cin>> num1;
        cout<<"Digite o Segundo numero: "<<endl;
        cin>> num2;
        cout<<"Digite o Terceiro numero: "<<endl;
        cin>> num3;
        Resultado1= num1+num2+num3;
        cout<<"A Soma é: "<<Resultado1<<endl;
        cout<<"Parte 2"<<endl;
        Resultado2= Resultado1/3;
        cout<<"A Média de seus Três Números é: "<<Resultado2<<endl;
        system("pause");
        return 0;
}
