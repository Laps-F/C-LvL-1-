#include<iostream>
#include<math.h>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Considere uma equação do segundo grau na forma genérica (ax² + bx + c) e calcule o valor das raízes da mesma.*/
    setlocale(LC_ALL, "");
    float a,b,c,x1,x2,delta,N,i;
    cout<<"Quantas Vezes você quer executar?"<<endl;
    cin>>N;
    for(i=0;i<N;i++){
    cout<<"Insira O Valor de A: "<<endl;
    cin>>a;
    cout<<"Insira O Valor de B: "<<endl;
    cin>>b;
    cout<<"Insira O Valor de C: "<<endl;
    cin>>c;
    delta=pow(b,2)-4*a*c;
        if(delta<0)
        {
            cout<<"Essa equação NAO possui Raizes Reais"<<endl;
        }
        else
        {
            x1=(-b+sqrt(delta))/(a*2);
            x2=(-b-sqrt(delta))/(a*2);
        }
        if(delta==0)
        {
            cout<<"A Raiz da sua Equação é: "<<x1<<endl;
        }
        else
        {
            cout<<delta;
            cout<<"As raizes da Equação são: "<<x1<<" e "<<x2<<"\n"<<endl;
        }
    }
    system("pause");
    return 0;
}
