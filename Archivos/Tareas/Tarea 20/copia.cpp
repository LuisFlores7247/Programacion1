#include <iostream>
#include <cstring> 
#include <ctime>  
#include <cstdlib> 
#include <iomanip> 

#define TAM 15

using namespace std;

struct jugadores{
	char nomjug[40]; 
	int edad; 
	float sueldo; 
	char eq[40]; 	
};

void llenar(jugadores equipo[TAM]);
void imprimir(jugadores equipo[TAM]);

                                      

int main(){
	srand(time(0));
	jugadores equipo[TAM];
	llenar(equipo);	
	imprimir(equipo);	
	return 0;
}


 
void llenar(jugadores equipo[TAM]){
	char nombres[15][40]={"Luis Enrique","Carlos", "Daniel","Francisco Javier","Oscar","Jorge","Enrique","Victor","Jose de Jesus", "Guadalupe", "Alejandro", "Samuel","Aangel Antonio","Anyelo","Guillermo"};
	char apellidos[15][40]={"Gutierrez","Salazar","Comte","Rodriguez","Gonzalez","Velasco","Lopez","Hernandez","Estrada","Moreno","Alba","Trejo","Perez","Honda","Arteaga"};
	char equiposliga[12][40]={"America","Guadalajara","Necaxa","Toluca","Cruz Azul","Puebla","Monterrey","Tigres","Santos","Pachuca","Morelia","Leon"};
	
	char jugnombre[60]; 
 
	int n;
	cout<<endl<<"Llenando con datos aleatorios el arreglo de jugadores ....\n";
	for (int i=0; i<TAM; i++){
		strcpy(jugnombre,""); 
		n=0+rand()%(14-0+1);
		strcat(jugnombre, nombres[n]);  
		strcat(jugnombre," "); 
		
		
		n=0+rand()%(14-0+1);
		strcat(jugnombre, apellidos[n]); 
		
		strcpy(equipo[i].nomjug,jugnombre); 
		
		
		n=0+rand()%(11-0+1);
		strcpy(equipo[i].eq,equiposliga[n]); 
		
		
		equipo[i].edad=17+rand()%(34-17+1); 
		
		
		equipo[i].sueldo=30000+rand()%(120000-30000+1); 
		
	}//fin for
	
	
}



void imprimir(jugadores equipo[TAM]){
	
	cout<<endl<<"Imprimiendo el arreglo de jugadores ....\n";
	
	cout<<endl;
	cout<<left<<setw(3)<<"#";
	cout<<left<<setw(40)<<"Nombre";
	cout<<left<<setw(20)<<"Equipo";
	cout<<left<<setw(10)<<"Edad";
	cout<<left<<setw(15)<<"Sueldo";
	
	for (int i=0; i<TAM; i++){
    cout<<endl; 
    cout<<left<<setw(3)<<i+1;
	cout<<left<<setw(40)<<equipo[i].nomjug;
	cout<<left<<setw(20)<<equipo[i].eq;
	cout<<left<<setw(10)<<equipo[i].edad;
	cout<<left<<setw(15)<<equipo[i].sueldo;
	
	}	
	
}





