#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Fa�a um algoritmo que receba uma quantidade qualquer em minutos e converta em horas e minutos
    (utilize divis�o inteira e resto da divis�o inteira).*/
    setlocale(LC_ALL, "");
    int minutos,horas,segundos;
    cout<<"insira o n�mero de Segundos: "<<endl;
    cin>>segundos;
    minutos=segundos/60;
    horas=minutos/60;
    segundos=segundos%60;
    cout<<"O N�mero de Horas e Minutos e Segundos � de: "<<horas<<"H "<<minutos<<"min "<<segundos<<"seg"<<endl;
    system("pause");
    return 0;
}
