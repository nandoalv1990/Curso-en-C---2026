#include "extra.h"
#include<iostream>
using namespace std;

HolaMundo::HolaMundo(const string& mensaje){
    this -> mensaje = mensaje;
}

void HolaMundo::mostrarmensaje(const string& mensaje){
    cout << mensaje << " : Mensaje recibido, este es tu primer header" << endl;
}