#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*A copa do mundo de futebol da FIFA � uma competi��o internacional que iniciou em 1930, acontecendo desde ent�o de 4 em 4 anos,
    exceto durante o per�odo das guerras mundiais que impossibilitaram a realiza��o 2 copas mundiais. Sabendo dessas informa��es,
    fa�a um algoritmo em c++ que dado o ano atual calcule o n�mero de copas j� realizadas e exiba o resultado ao usu�rio.*/
    setlocale(LC_ALL, "");
    int ano,resultado,resultadof;
    cout<<"Insira o ano em que voc� est�: "<<endl;
    cin>>ano;
    resultado=((ano-1930)/4)-2;;
    resultadof=resultado+1;
    if(ano<1930)
    {
        cout<<"Nao Houve copas do Mundo at� esse Ano"<<endl;
    }
    else if(ano<1934)
    {
        cout<<"O n�mero de edi��es da copa ate esse ano �: 1"<<endl;
    }
    else if(ano<1938)
    {
        cout<<"O n�mero de edi��es da copa ate esse ano �: 2"<<endl;
    }
    else if(ano<1950)
    {
        cout<<"O n�mero de edi��es da copa ate esse ano �: 3"<<endl;
    }
    else if(ano<1954)
    {
        cout<<"O n�mero de edi��es da copa ate esse ano �: 4"<<endl;
    }
    else if(ano>=1954)
    {
        cout<<"O n�mero de edi��es da copa ate esse ano �: "<<resultadof<<endl;
    }
    system("pause");
    return 0;
}
