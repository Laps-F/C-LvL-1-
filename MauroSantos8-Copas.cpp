#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*A copa do mundo de futebol da FIFA é uma competição internacional que iniciou em 1930, acontecendo desde então de 4 em 4 anos,
    exceto durante o período das guerras mundiais que impossibilitaram a realização 2 copas mundiais. Sabendo dessas informações,
    faça um algoritmo em c++ que dado o ano atual calcule o número de copas já realizadas e exiba o resultado ao usuário.*/
    setlocale(LC_ALL, "");
    int ano,resultado,resultadof;
    cout<<"Insira o ano em que você está: "<<endl;
    cin>>ano;
    resultado=((ano-1930)/4)-2;;
    resultadof=resultado+1;
    if(ano<1930)
    {
        cout<<"Nao Houve copas do Mundo até esse Ano"<<endl;
    }
    else if(ano<1934)
    {
        cout<<"O número de edições da copa ate esse ano é: 1"<<endl;
    }
    else if(ano<1938)
    {
        cout<<"O número de edições da copa ate esse ano é: 2"<<endl;
    }
    else if(ano<1950)
    {
        cout<<"O número de edições da copa ate esse ano é: 3"<<endl;
    }
    else if(ano<1954)
    {
        cout<<"O número de edições da copa ate esse ano é: 4"<<endl;
    }
    else if(ano>=1954)
    {
        cout<<"O número de edições da copa ate esse ano é: "<<resultadof<<endl;
    }
    system("pause");
    return 0;
}
