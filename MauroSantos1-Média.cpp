#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main ()
{
    /* Crie um algoritmo que calcule a soma e a m�dia de 3 n�meros passados pelo usu�rio.*/
    setlocale(LC_ALL, "");
    float num1, num2, num3, Resultado1, Resultado2;
    cout<<"Parte 1"<<endl;
        cout<<"Digite o Primeiro numero: "<<endl;
        cin>> num1;
        cout<<"Digite o Segundo numero: "<<endl;
        cin>> num2;
        cout<<"Digite o Terceiro numero: "<<endl;
        cin>> num3;
        Resultado1= num1+num2+num3;
        cout<<"A Soma �: "<<Resultado1<<endl;
        cout<<"Parte 2"<<endl;
        Resultado2= Resultado1/3;
        cout<<"A M�dia de seus Tr�s N�meros �: "<<Resultado2<<endl;
        system("pause");
        return 0;
}
