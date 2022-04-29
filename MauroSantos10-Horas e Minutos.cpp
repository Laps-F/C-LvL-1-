#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Faça um algoritmo que receba uma quantidade qualquer em minutos e converta em horas e minutos
    (utilize divisão inteira e resto da divisão inteira).*/
    setlocale(LC_ALL, "");
    int minutos,horas,segundos;
    cout<<"insira o número de Segundos: "<<endl;
    cin>>segundos;
    minutos=segundos/60;
    horas=minutos/60;
    segundos=segundos%60;
    cout<<"O Número de Horas e Minutos e Segundos é de: "<<horas<<"H "<<minutos<<"min "<<segundos<<"seg"<<endl;
    system("pause");
    return 0;
}
