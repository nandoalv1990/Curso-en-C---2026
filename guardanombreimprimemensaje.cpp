#include<iostream>
#include<string>
using namespace std;
int main(){
    string _Nombre;
    float _Edad;
    cout<<"Escribe tu nombre completo: ";
    getline(cin,_Nombre);
    cout<<"Escribe tu edad: ";
    cin>>_Edad;
    cout<<"Hola "<<_Nombre<<" de "<<_Edad<<"años mucho gusto"<<endl;
    return 0;
}