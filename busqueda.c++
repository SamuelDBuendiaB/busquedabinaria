#include <iostream>
#include <conio.h>

using namespace std;

int main () {

    int arreglo [100];
    int dato=0;
    int numero;
    int pos = 0;
    char alerta = 'F';

    cout<<"Ingrese cuantos elementos quiere ingresar en el arreglo: "; cin>>numero;
    cout<<"Ingrese el numero que desea encontrar: "; cin>>dato;

    for (int i=0; i<numero; ++i) {
        cout<<"Ingrese los elementos["<<i<<"]: "; cin>>arreglo[i];
    }

    for (int i=0; i<numero; ++i) {
        if (arreglo[i]==dato && alerta=='F') {
            alerta='V';
            pos=i;
        }
    }

    if (alerta=='V') {
        cout<<"El numero se encontro en la posicion "<<pos<<" del arreglo";
    } else if (alerta=='F') {
        cout<<"El numero no se encontro";
    }

    getch ();
    return 0;
}