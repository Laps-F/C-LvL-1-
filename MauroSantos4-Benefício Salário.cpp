#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Funcion�rios da IFVende tem como benef�cio a receber ao final de cada m�s um sal�rio fixo
    mais 4% de comiss�o sobre as vendas realizadas pelo mesmo.
    Assim, fa�a um algoritmo que receba o sal�rio fixo e o valor de vendas realizadas por um funcion�rio,
    calcule e mostre o benef�cio a ser recebido pelo mesmo.*/
    setlocale(LC_ALL, "");
    float salfixo,nvendas,beneficio,salnovo;
    cout<<"Insira o Sal�rio Fixo: "<<endl;
    cin>>salfixo;
    cout<<"Insira o N�mero de Vendas: "<<endl;
    cin>>nvendas;
    beneficio=(4*salfixo/100);
    salnovo=salfixo+beneficio;
    cout<<"Seu Benef�cio � de: "<<beneficio<<endl;
    cout<<"O Sal�rio Novo � de: "<<salnovo<<endl;
    system("pause");
    return 0;
}
