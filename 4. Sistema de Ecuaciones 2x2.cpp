//Practica 2-LETN 307
//4)Sistema de ecuaciones 2x2
//Univ. Luis Mauricio Averanga Vergara

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
float a1,a2,b1,b2,c1,c2,den,nx,ny,x,y;

cout<<"Dado un sistema de ecuaciones 2x2"<<endl;
cout<<"a1X+b1Y=c1"<<endl;
cout<<"a2X+b2Y=c2"<<endl;
cout<<"Insertar los valores para la primera ecuacion"<<endl;
cout<<"inserta el valor de a1: ";
cin>>a1;
cout<<"inserta el valor de b1: ";
cin>>b1;
cout<<"inserta el valor de c1: ";
cin>>c1;
cout<<"Insertar los valores para la segunda ecuacion"<<endl;
cout<<"inserta el valor de a2: ";
cin>>a2;
cout<<"inserta el valor de b2: ";
cin>>b2;
cout<<"inserta el valor de c2: ";
cin>>c2;

den=a1*b2-a2*b1;
nx=c1*b2-c2*b1;
ny=a1*c2-a2*c1;

x=nx/den;
y=ny/den;

cout<<"El valor de X es: "<<x<<endl;
cout<<"El valor de Y es: "<<y<<endl;
}