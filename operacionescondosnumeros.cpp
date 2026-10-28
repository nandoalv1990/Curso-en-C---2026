#include<iostream>
using namespace std;

int main (){
    cout<<"Programa que suma dos numeros dados por el usuario y resta esos dos numeros"<<endl;
    int n1,n2,res1,res2;
    cout<<"Ingresa el primer numero:";
    cin>>n1;
    cout<<"Ingresa el segundo numero:";
    cin>>n2;
    res1=n1+n2;
    res2=n1-n2;
    cout<<"Los resultados son: "<<endl<<n1<<" + "<<n2<<" = "<<res1<<endl;
    cout<<n1<<" - "<<n2<<" = "<<res2<<endl;
    return 0;
}