/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Francisco Escobedo
 *
 * Created on 25 de marzo de 2021, 05:58 PM
 */

#include <cstdlib>
#include <iostream>
#define MAX 15

using namespace std;

////Arreglo de datos ordenar
int arr[MAX];


///46
///78
//2
//12

///Auxiliar para el intercambio de datos
int aux=0;


//// 12 11 10 9 1 2 3 4 5
///

///Algoritmo
void burbuja(){
	for(int i=1;i<MAX;i++){   ///Lineal
		for(int j=0;j<(MAX-i);j++){ /// 100 * 100 o(n 2)
		   ///Comparar la condicion de ordenamiento (ASC, DES)
		   if(arr[j]>arr[j+1]){
		   	  ///Intercambio
			aux = arr[j+1];
			arr[j+1] = arr[j];
			arr[j] = aux;	 	
		   }
		}
	}
	
}

int main(){
	
	srand(time(NULL));
	
	for(int i=0;i<MAX;i++){
		arr[i] = (int)((rand()%MAX)+1);
		cout<<(i+1)<<" :"<<arr[i]<<endl;
	}
	  
	burbuja();
	
	cout<<"Ordenado"<<endl;
	for(int i=0;i<MAX;i++){
		cout<<(i+1)<<" :"<<arr[i]<<endl;
	}
	    
	
	return 0;
}
