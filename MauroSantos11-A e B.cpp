#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Faça um algoritmo que leia dois valores numéricos e armazene nas variáveis A e B, após isso,
    efetue a troca dos valores de forma que A passe a possuir o valor de B e B passe a possuir o valor de A.
    Imprima os valores após troca.*/
    setlocale(LC_ALL, "");
    float C,A,B;
    cout<<"Digite o número A: "<<endl;
    cin>>A;
    cout<<"Digite o número B: "<<endl;
    cin>>B;
    C=A;
    A=B;
    B=C;
    cout<<"A= "<<A<<endl;
    cout<<"B= "<<B<<endl;
    system("pause");
    return 0;

}
