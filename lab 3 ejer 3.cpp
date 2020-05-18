#include<iostream>

//3. Implementar una función que ordene los elementos de un arreglo: ascendente.

//ejer 3 


using namespace std;

void mostrar(int* m,int n){//muestro el array
	for(int i=0;i<n;i++){
		cout<<*m++<<" ";
	}
}
//funcion de intercambio
void swap(int*a, int*b){
	int temp=*a;
	*a = *b;
	*b = temp;
}
//oedenamiento de forma asendente
void ordenamiento(int* arr,int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(*(arr+i)>*(arr+j)){
				swap(*(arr+i),*(arr+j));//intercambio com arrecglo
			}
		}
	}
}

int main(){
	int n(8);
	int arr[]={8,5,3,4,6,10,20,0};
	ordenamiento(arr,n);
	mostrar(arr,n);
	return 0;
}
