#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Faça um algoritmo que calcule a área e o perímetro de um retângulo recebendo os valores da base e da altura do mesmo.*/
    setlocale(LC_ALL, "");
    int alt,base,area,perimetro;
    cout<<"Insira a Altura do Retângulo: "<<endl;
    cin>>alt;
    cout<<"Insira a Base do Retângulo: "<<endl;
    cin>>base;
    area=base*alt;
    perimetro=(2*alt)+(2*base);
    cout<<"A Area do seu retângulo é: "<<area<<endl;
    cout<<"O Perímetro do seu retângulo é: "<<perimetro<<endl;
    system("(pause)");
    return 0;
}
