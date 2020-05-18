#include<iostream>
using namespace std;

//6. Implemente unaf unción que reciba dos cadenas a y b ;ycopie los elementos de la cadena a para la cadena b.

int tamanioR(char* cad){
	while(*cad++!='\0'){
		return 1+ tamanioR(cad);
	}
}

void intercambio(char* cadA,char* cadB){
	int tamA=tamanioR(cadA);
    for( int i = 0;i<tamA ;i++){// 
        cadB[i] = cadA[i];//copia la cadena 1 a la cadena 2
    }
    
   
}
int main(){
	char cadA[20]="";//primera cadena
    char cadB[20]="";//segunda cadena
    cin.getline(cadA,20);//implemeto de la funcion cin.getline en ves de cin 
    cin.getline(cadB,20);
    intercambio(cadA,cadB);
	cout<<cadB;
	return 0;
}
