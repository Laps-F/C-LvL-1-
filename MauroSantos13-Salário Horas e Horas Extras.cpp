#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /*Fa�a um algoritmo que receba o n�mero de horas trabalhadas, o valor do sal�rio m�nimo e o n�mero de horas extras trabalhadas.
    Calcule e mostre o sal�rio a receber seguindo as seguintes regras:*/
    setlocale(LC_ALL, "");
    float salmin, horas, horasex, salbt, qhe, sal;
    cout<<"Digite o Sal�rio M�nimo: "<<endl;
    cin>>salmin;
    cout<<"Digite o n�mero de Horas trabalhadas: "<<endl;
    cin>>horas;
    cout<<"Digite o n�mero de Horas Extras trabalhadas: "<<endl;
    cin>>horasex;
    salbt=horas*(0.125*(salmin));
    qhe=horasex*(0.25*(salmin));
    sal=salbt+qhe;
    cout<<"Seu Sal�rio �: "<<sal<<endl;
    system("pause");
    return 0;
}
