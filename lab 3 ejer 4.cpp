#include<iostream>
using namespace std;
//4. Implemente una función que reciba una cadena y retorne su tamaño.(Iterativayrecursiva)/
//  LAB2 EJER 4
//hallando el tamaño de la cadena de forma iterativa
int tamanioI(char* cad,int *tam){
	int i;
	while(*cad++!='\0')
		i++;
	*tam=i;
	return *tam;
}
// hallano el tamaño de la forma recursiva
int tamanioR(char* cad){
	while(*cad++!='\0'){
		return 1+ tamanioR(cad);
	}
}
int main(){
	char cad[]="hola mundo";
	int tam;
	cout<<"iterativo"<<endl<<tamanioI(cad,&tam)<<endl;
	cout<<"recursivo"<<endl<<tamanioR(cad);
	return 0;
}
