#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float monto, descuento = 0, totalapagar;
    cout<<"Ingresa el monto a pagar $";
    cin>>monto;
    if(monto > 1000){
        descuento = monto * 0.10;
        totalapagar = monto - descuento;
    } else {
        totalapagar = monto;
    }
    cout<<"Descuento = $" << descuento << endl;
    cout<<"Total a pagar = $" << totalapagar << endl;
    return 0;
}
