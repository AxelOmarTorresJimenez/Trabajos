#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
    int NUM,CUA,CUB;   //Mensaje de bienvenida
    cout <<"Programa para el cuadrado y cubo" << "\n";
    
    //Se pide el valor del NUM
    cout << "Por favor ingrese el valor del NUMERO:  " << "\n";
    //Se asigna el primer valor A
    cin >> NUM;
    
    //Resolvemos la formula del problema 
    CUA=NUM*NUM;
    CUB=NUM*CUA;   
    //Enviamos el resultado de CUA y CUB a la pantalla
    cout << "El cuadrado de "<<NUM<<" y el cubo es: "CUB<<end1;
    return 0;
}
