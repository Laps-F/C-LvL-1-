#include<iostream>
#include<math.h>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Faça um algoritmo que receba 3 notas e seus respectivos pesos, calcule e mostre a media ponderada dessas notas*/
    setlocale(LC_ALL, "");
    float nota1, nota2, nota3, peso1, peso2, peso3, somapesos, mediaponderada, media;
    cout<<"Digite o valor da Nota do 1° Trimestre: "<<endl;
    cin>>nota1;
    cout<<"Digite o valor da Nota do 2° Trimestre: "<<endl;
    cin>>nota2;
    cout<<"Digite o valor da Nota do 3° Trimestre: "<<endl;
    cin>>nota3;
    cout<<"Digite o peso do 1° Trimestre: "<<endl;
    cin>>peso1;
    cout<<"Digite o peso do 2° Trimestre: "<<endl;
    cin>>peso2;
    cout<<"Digite o peso do 3° Trimestre: "<<endl;
    cin>>peso3;
    somapesos=peso1+peso2+peso3;
    mediaponderada=(nota1*peso1+nota2*peso2+nota3*peso3)/somapesos;
    cout<<"A Média Ponderada é: "<<mediaponderada<<endl;
    system("pause");
    return 0;
}
