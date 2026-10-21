#include<iostream>
#include<string>
using namespace std;
int main(){
    string mensaje; // Variable
    int edad;
    mensaje = "Hola este es un mensaje random"; // Asignación
    cout<<"Mensaje: "<<mensaje<<endl;// Imprimir a pantalla
    cout<<"Cambia el mensaje: ";
    getline(cin,mensaje);
    cout<<"Escribe tu edad: ";
    cin>>edad;
    cout<<"El nuevo mensaje es: "<<mensaje<<endl;
    cout<<"Tu edad más cinco es: "<<edad + 5<<endl;
    return 0;
}