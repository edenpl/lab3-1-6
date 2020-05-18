#include<iostream>
using namespace std;
//1. Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.(Iterativa y recursiva).
// LAB2 EJER 1


//suma iterativa
int sumaITERATIVA(int* m,int* sum){
	for(int i=0;i<5;i++){
		*sum += *m++;
	}
	return *sum;
}
//suma recursiva
int sumaRECURSIVA(int* m,int cont){
	if(cont==0)
		return 0;
	return *m + sumaRECURSIVA(++m,--cont);
}
int main(){
	int m[]={5,8,6,2,9};
	int cont=5;
	int sum;
	cout<<"la suma iterativa es = "<<sumaITERATIVA(m,&sum)<<endl;
	cout<<"la suma recursiva es = " <<sumaRECURSIVA(m,cont);
	return 0;
}
