#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float ht, ph, pago,he = 0, pe = 0;
    cout << "Ingrese el total de horas trabajadas:";
    cin >> ht;
    cout << "\nIngrese el pago por hora $";
    cin >> ph;
    if (ht <= 40){
        pago = ht * ph;
    } else {
        he = ht - 40;
        pe = he * (ph * 2);
        pago = ((ht - he) * ph) + pe;
    }
    cout << "\nHoras extra trabajadas: " << he << "\nPago por horas extra $" << pe << "\nPago total $" << pago << endl;
    return 0;
}
