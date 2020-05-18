#include<iostream>
using namespace std;

//2. Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).
// metodo iteratuvo  LAB2 EJER 2
void mostrar(int* m,int n){//muestro el array
	for(int i=0;i<n;i++){
		cout<<*m++<<" ";
	}
}
//intercambio de valores
void swap(int* a,int* b ){
	int temp=*a;
	*a=*b;
	*b=temp;
}
//invertir forma iterativa
void invertirI(int* m,int n){
	for(int i=0;i<n/2;i++){
		swap(*(m+i),*(m+n-1-i));
	}
}
//invertir forma recursiva
int invertirR( int* m,int n,int i){
	if(i<2){
		swap(*(m+i),*(m+n-1-i));//funcion de intercambio
		invertirR(m,n,++i);
	}
}
int main(){
	int n(5),i=0;
	int arr[]={1,2,3,4,5};
	invertirI(arr,n);
	cout<<"forma iterativa "<<endl;
	mostrar(arr,n);
	invertirR(arr,n,i);
	cout<<endl<<"forma recursiva "<<endl;
	mostrar(arr,n);
	return 0;
}
