#include<iostream>
#include<math.h>
#include<windows.h>
#include<locale.h>
using namespace std;
int main()
{
    /*Considere uma equa��o do segundo grau na forma gen�rica (ax� + bx + c) e calcule o valor das ra�zes da mesma.*/
    setlocale(LC_ALL, "");
    float a,b,c,x1,x2,delta,N,i;
    cout<<"Quantas Vezes voc� quer executar?"<<endl;
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
            cout<<"Essa equa��o NAO possui Raizes Reais"<<endl;
        }
        else
        {
            x1=(-b+sqrt(delta))/(a*2);
            x2=(-b-sqrt(delta))/(a*2);
        }
        if(delta==0)
        {
            cout<<"A Raiz da sua Equa��o �: "<<x1<<endl;
        }
        else
        {
            cout<<delta;
            cout<<"As raizes da Equa��o s�o: "<<x1<<" e "<<x2<<"\n"<<endl;
        }
    }
    system("pause");
    return 0;
}
