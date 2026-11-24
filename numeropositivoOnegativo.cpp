#include <iostream>>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float n;
    cout << "Ingresa un numero cualquiera: ";
    cin >> n;
    // Metodo mas reducido
    if (n==0){
        cout << "Cero" << endl;
    }else {
        cout << (n / abs(n) == 1 ? "Positivo" : "Negativo") << endl;
    }
    // Metodo 1
    if (n>0) {
        cout << "Positivo\n";
    } else {
        if (n<0){
            cout << "Negativo\n";
        }else{
            if(n==0){
                cout << "Cero\n";
            }
        }
    }
    // Metodo 2
    if (n!=0){
        if(n>0){
            cout << "Positivo\n";
        }else {
            cout << "Negativo\n";
        }
    } else {
        cout << "Cero\n";
    }
    return 0;
}
