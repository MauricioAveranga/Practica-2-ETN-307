//Practica 2-LETN 307
//1)Triangulos
//Univ. Luis Mauricio Averanga Vergara

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;
int main () {
	int l,opc;
	double A,B,C,D,E,pi,AB,BC, AC;
	pi=3.1416;
	cout << "Dado un triangulo de angulos A, B, C y lados AB, BC, AC" <<endl;
	cout <<"NOTA: Los angulos estan en sistema hexagesimal" <<endl;
	cout <<"Cuantos lados desea ingresar:";
	cin >>l;
	
	if(l==3){
		cout <<"Ingresar los lados"<<endl;
		cout <<"AB: ";
		cin>>AB;
		cout <<"BC: ";
		cin>>BC;
		cout <<"AC: ";
		cin>>AC;	
		A=(acos((AB*AB+AC*AC-BC*BC)/(2.00*AB*AC)))*(180/(pi));
		B=(acos((AB*AB+BC*BC-AC*AC)/(2.00*AB*BC)))*(180/(pi));
		C=(acos((BC*BC+AC*AC-AB*AB)/(2.00*AC*BC)))*(180/(pi));
		cout <<"Los angulos de estos seran: A="<<A<< ", B="<<B<<", C="<<C;	
			}
	else {
		if(l==2){
			cout <<"Desea ingresar:"<<endl;
			cout <<"1. Dos lados adyacentes y el angulo formado por ellos"<<endl;
			cout <<"2. Dos lados adyacentes y un angulo contrario"<<endl;
			cout <<"Ingrese la opcion a elegir: ";
			cin >>opc;
			if (opc==1){
				cout <<"Ingrese los dos lados y un angulo:"<<endl;
				cout <<"AB: ";
				cin >>AB;
				cout <<"BC: ";
				cin >>BC;
				cout <<"B: ";
				cin >>B;
				B=B*pi/180;
				AC=pow((AB*AB+BC*BC-2.00*AB*BC*cos(B)),1/2.00);
				A=(asin((sin(B)*BC)/AC))*(180/(pi));
				C=(asin((sin(B)*AB)/AC))*(180/(pi));
				cout <<"El lado encontrado es: AB=" <<AC<< ", los angulos encontrados son: A="<<A<< "y C="<<C;
						}
			else {
				cout <<"Ingrese los dos lados y un angulo:"<<endl;
				cout <<"AB: ";
				cin >>AB;
				cout <<"BC: ";
				cin >>BC;
				cout <<"A: ";
				cin >>A;
				A=A*pi/180;
				C=(asin((AB*sin(A))/BC));
				D=C*(180/(pi));
				B=pi-A-C;
				E=B*180/pi;
				AC=((sin(B))*BC)/(sin(A));
				cout <<"El lado encontrado es: AC=" <<AC<< ", los angulos encontrados son: B="<<E<< " y C="<<D;
				}
				 }
		else {
			if (l==1){
				cout <<"Ingrese un lado y dos angulos:"<<endl;
				cout <<"AB: ";
				cin >>AB;
				cout <<"A: ";
				cin >>A;
				cout <<"B: ";
				cin >>B;
				A=A*pi/180;
				B=B*pi/180;
				C=(pi-A-B);
				D=C*180/pi;
				BC=((sin(A))*AB)/(sin(C));	
				AC=(sin(B)*AB)/sin(C);
				cout <<" El angulo hallados es: C="<<D<<", los lados encontrados seran: BC="<<BC<<" y AC="<<AC;			
					}
			else {
				cout <<"Tiene soluciones infinitas"<<endl; 
				}
			}	
		}
}