#include "iostream"
#include "math.h"
using namespace std;

int main()
{    //Problema 1.8
//X1,Y1,X2,Y2
//X1, Y1 REPRESENTAN LAS COORDINADAS DEL PUNTO PI EN EL EJE DE LAS X y Y RESPECTIVAMENTE
//X1, YI REPRESENTAN LAS COORDINADAS DEL PUNTO P2 EN EL EJE DE LAS X y Y RESPECTIVAMENTE

float X1,Y1,X2,Y2,DIS;

//Entrada de datos
cout<<" Escribe la coordenada X del primer punto   "<<"\n";
cin >> X1;

cout<<" Escribe la coordenada Y del primer punto "«<"\n";
cin >> Y1;

cout<<" Escribe la coordenada X del segundo punto "«<"\n";
cin > X2;

cout<" Escribe la coordenada Y del segundo punto "<<"\n";
cin  Y2;

//CALCULO
DIS= sqrt (pow ((X1-X2), 2)+pow((Y1-Y2),2));

//SE IMPRIMEN RESULTADOS
cout«" La distancia entre el punto "«<X1«<","«<Y1<<"y el punto "<X2<<","«<Y2«"es "<<DIS<<"\n";
   return 0;
}

