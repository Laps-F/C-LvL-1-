#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Implemente um algoritmo que receba o n�mero de lados de um pol�gono convexo regular,
    calcule e mostre o n�mero de diagonais desse pol�gono. Sabe-se que ND = N*(N � 3)/2, em que N representa o n�mero de lados do pol�gono.*/
    setlocale(LC_ALL, "");
    float lados,nd;
    cout<<"Insira o N�mero de Lados do Pol�gono: "<<endl;
    cin>>lados;
    nd=lados*(lados-3)/2;
    cout<<"O N�mero de Diagonais do seu Pol�gono � de: "<<nd<<endl;
    system("pause");
    return 0;
}
