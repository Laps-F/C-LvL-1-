#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Faça um algoritmo que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas.
    Calcule e mostre o salário a receber seguindo as seguintes regras:*/
    setlocale(LC_ALL, "");
    float salmin, horas, horasex, salbt, qhe, sal;
    cout<<"Digite o Salário Mínimo: "<<endl;
    cin>>salmin;
    cout<<"Digite o número de Horas trabalhadas: "<<endl;
    cin>>horas;
    cout<<"Digite o número de Horas Extras trabalhadas: "<<endl;
    cin>>horasex;
    salbt=horas*(0.125*(salmin));
    qhe=horasex*(0.25*(salmin));
    sal=salbt+qhe;
    cout<<"Seu Salário é: "<<sal<<endl;
    system("pause");
    return 0;
}
