#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Implemente um algoritmo que receba o número de lados de um polígono convexo regular,
    calcule e mostre o número de diagonais desse polígono. Sabe-se que ND = N*(N – 3)/2, em que N representa o número de lados do polígono.*/
    setlocale(LC_ALL, "");
    float lados,nd;
    cout<<"Insira o Número de Lados do Polígono: "<<endl;
    cin>>lados;
    nd=lados*(lados-3)/2;
    cout<<"O Número de Diagonais do seu Polígono é de: "<<nd<<endl;
    system("pause");
    return 0;
}
