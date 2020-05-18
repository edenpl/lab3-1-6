#include<iostream>
using namespace std;

//5. Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b. //

//ejer 5

//allanddo el tamano de la cadena de forma recursiva
int tamanioR(char* cad){
	while(*cad++!='\0'){
		return 1+ tamanioR(cad);
	}
}
//combina la cadena A y B
void combinar(char* cadA,char* cadB){
    int tamA=tamanioR(cadA);
    int tamB=tamanioR(cadB);
    for(int i=tamA;i<tamA+tamB;i++){
    	*(cadB+i)=*cadA++;
	}
    *(cadB+tamA+tamB)='\0';
}
int main(){
	char cadA[20]="";//primera cadena 
    char cadB[20]="";//segunda cadena
    cin.getline(cadA,20);
    cin.getline(cadB,20);
    combinar(cadA,cadB);
    cout<<cadB;
	return 0;
}
