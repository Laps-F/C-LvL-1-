#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Fa�a um algoritmo que leia dois valores num�ricos e armazene nas vari�veis A e B, ap�s isso,
    efetue a troca dos valores de forma que A passe a possuir o valor de B e B passe a possuir o valor de A.
    Imprima os valores ap�s troca.*/
    setlocale(LC_ALL, "");
    float C,A,B;
    cout<<"Digite o n�mero A: "<<endl;
    cin>>A;
    cout<<"Digite o n�mero B: "<<endl;
    cin>>B;
    C=A;
    A=B;
    B=C;
    cout<<"A= "<<A<<endl;
    cout<<"B= "<<B<<endl;
    system("pause");
    return 0;

}
