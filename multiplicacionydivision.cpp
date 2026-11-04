#include<iostream>
using namespace std;

int main(){
    float n1, n2, resu;
    cout<<"Programa que realiza una multiplicación y una division"<<endl<<"Ingresa el primer numero:";
    cin>>n1;
    cout<<"Ingresa el segundo numero:";
    cin>>n2;
    resu=n1*n2;
    cout<<n1<<" X "<<n2<<" = "<<resu<<endl;
    if (n2 == 0){
        cout<<"No se puede dividir entre cero"<<endl;
    } else {
        resu=n1/n2;
        cout<<n1<<" / "<<n2<<" = "<<resu<<endl;
    }
    return 0;
}