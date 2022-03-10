//Practica 2-LETN 307
//2)Matriz de Vandermonde
//Univ. Luis Mauricio Averanga Vergara

#include <iostream>
#include <cmath>
#include <stdlib.h> 

using namespace std;

int main(){
	int numVar;
	double *var;
	
	cout<<"Cuantas variables desea introducir: ";
	cin>>numVar;
	var = new double[numVar];
	
	for(int i=0;i<numVar;i++){
		cout<<"Cual es el valor para a"<<i<<": ";
		cin>>var[i];		
							}
	
	double matrix[numVar][numVar];
	
	for (int i = 0; i < numVar; i++) {
   		for (int j = 0; j < numVar; j++) {
				matrix[i][j]=pow(var[i],j);
		}
	}
		
	int det = 1;
	for(int i=1; i < numVar; i++){
		for(int j=i+1; j <= numVar; j++){
			det=det*(var[numVar-i]-var[numVar-j]);
				}
	}
		
	cout << "\nLa Matriz Vandermonde sera:\n";
	cout << "Orden: " << numVar << endl;
   	for (int i = 0; i < numVar; i++) {
      for (int j = 0; j < numVar; j++) {
         cout << matrix[i][j]<<"	";
      }
      cout << "\n";
   	}
   	
   	
	if (numVar==1){
		cout<<"\n\nEl determinante es: "<<var[0];
			}
	else{
		cout<<"\n\nEl determinante es: "<<det;
		}
}