#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Funcionários da IFVende tem como benefício a receber ao final de cada mês um salário fixo
    mais 4% de comissão sobre as vendas realizadas pelo mesmo.
    Assim, faça um algoritmo que receba o salário fixo e o valor de vendas realizadas por um funcionário,
    calcule e mostre o benefício a ser recebido pelo mesmo.*/
    setlocale(LC_ALL, "");
    float salfixo,nvendas,beneficio,salnovo;
    cout<<"Insira o Salário Fixo: "<<endl;
    cin>>salfixo;
    cout<<"Insira o Número de Vendas: "<<endl;
    cin>>nvendas;
    beneficio=(4*salfixo/100);
    salnovo=salfixo+beneficio;
    cout<<"Seu Benefício é de: "<<beneficio<<endl;
    cout<<"O Salário Novo é de: "<<salnovo<<endl;
    system("pause");
    return 0;
}
