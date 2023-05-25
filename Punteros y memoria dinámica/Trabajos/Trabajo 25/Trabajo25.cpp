#include <iostream>
#include <cstdlib>
#include <ctime>
#define TAM 4

using namespace std;
char *llenarnombre1();//funcion incorrecta de retornar un vector de char DINAMICO
char *llenarnombre2();//funcion correcta de retornar un vector de char DINAMICO

int *llenar(int tam);//funcion que retorna un vector de enteros DINAMICO

void imprimir(int *vec,int tam);//funcion que imprime un vector de enteros dinámico o estático, pasando su tamaño

int main(){
	srand(time(0));
	cout<<"Luis David Flores Martinez";
	int *v1;
	char *nom;
	int tam;
	//opcion que usa vectores estaticos para retornar
	// cout<<endl<<"opcion que usa vectores estaticos para retornar";
	// nom=llenarnombre1();
	// cout<<"El nombre capturado es: "<<"*"<<nom<<"*"<<endl;//NO SALE NADA
	//Opcion que usa vectores dinamicos para retornar
	cout<<endl<<"opcion que usa vectores dinamicos para retornar";
	nom=llenarnombre2();
	cout<<"El nombre capturado es :"<<"*"<<nom<<"*"<<endl;
	delete []nom;//aunque el new se hizo en la funcion de llenar, la direccion
	//de memoria fue pasada al puntero del main, por lo tanto el delete se hace al puntero del main
	
	//Manera correcta de crear un vector dinamico de enteros
	cout<<endl<<"Dame el tamano del vector de enteros: ";
	cin>>tam;
	v1=llenar(tam);
	imprimir(v1,tam);
	return 0;
}

//opcion que usa vectores estaticos para retornar
char *llenarnombre1(){
	char aux[50];
	cout<<endl<<"nombre: ";
	cin.getline(aux,50);
	return aux; 
}

//opcion que usa vectores dinamicos para retornar
char *llenarnombre2(){
	char *aux;
	aux = new char[50];//TU decides que tan grande es la cadena que vas a guardar
	cout<<endl<<"nombre: ";
	fflush(stdin);
	cin.getline(aux,50);
	return aux; 
}

int *llenar(int tam){
	cout<<endl<<"llenando el vector de tamano: "<<tam<<endl;
	int *aux=new int[tam];//vector dinamico
	for(int i=0;i<tam;i++){
		aux[i]=1+rand()%(20-1+1);
		cout<<endl<<"casilla "<<i<<": "<<aux[i];
	}
	cout<<endl;
	return aux;//estas retornando un vector dinamico
}

void imprimir(int *vec, int tam){
	cout<<endl<<"imprimir vector ";
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" - ";
	}
}
