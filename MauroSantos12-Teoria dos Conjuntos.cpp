#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Implemente um algoritmo que encontre o n�mero de telespectadores que nenhuma das novelas os agradam.
    Receba as informa��es de prefer�ncias na entrada de dados e utilize as f�rmulas de teoria dos conjuntos.*/
    setlocale(LC_ALL, "");
    int a,b,c,total,a_b,a_c,b_c,a_b_c,nenhum,entrevistados;
    cout<<"Insira o N�mero de pessoas entrevistadas: "<<endl;
    cin>>entrevistados;
    cout<<"Insira o N�mero de pessoas que assistem a novela A: "<<endl;
    cin>>a;
    cout<<"Insira o N�mero de pessoas que assistem a novela B: "<<endl;
    cin>>b;
    cout<<"Insira o N�mero de pessoas que assistem a novela C: "<<endl;
    cin>>c;
    cout<<"Insira o N�mero de pessoas que assistem as novelas A e B: "<<endl;
    cin>>a_b;
    cout<<"Insira o N�mero de pessoas que assistem as novelas A e C: "<<endl;
    cin>>a_c;
    cout<<"Insira o N�mero de pessoas que assistem as novelas B e C: "<<endl;
    cin>>b_c;
    cout<<"Insira o N�mero de pessoas que assistem as novelas A,B e C: "<<endl;
    cin>>a_b_c;
    total=a+b+c-a_b-a_c-b_c+a_b_c;
    nenhum=entrevistados-total;
    cout<<"O N�mero de Telespectadores que nao assistem nenhuma das Novelas �: "<<nenhum<<endl;
    system("pause");
    return 0;
}
