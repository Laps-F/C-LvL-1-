#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Fa�a um algoritmo que calcule a �rea e o per�metro de um ret�ngulo recebendo os valores da base e da altura do mesmo.*/
    setlocale(LC_ALL, "");
    int alt,base,area,perimetro;
    cout<<"Insira a Altura do Ret�ngulo: "<<endl;
    cin>>alt;
    cout<<"Insira a Base do Ret�ngulo: "<<endl;
    cin>>base;
    area=base*alt;
    perimetro=(2*alt)+(2*base);
    cout<<"A Area do seu ret�ngulo �: "<<area<<endl;
    cout<<"O Per�metro do seu ret�ngulo �: "<<perimetro<<endl;
    system("(pause)");
    return 0;
}
