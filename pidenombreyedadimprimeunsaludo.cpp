#include<iostream>
#include<string>
using namespace std;
int main(){
    string nom;
    int edad;
    cout<<"Cual es tu nombre?"<<endl;
    getline(cin,nom);
    cout<<"Cual es tu edad?"<<endl;
    cin>>edad;
    cout<<"Hola "<<nom<<" de "<<edad<<" años "<<" mucho gusto chavalin/a"<<endl;
    return 0;
}