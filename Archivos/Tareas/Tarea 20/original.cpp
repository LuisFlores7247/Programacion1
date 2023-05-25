#include <iostream>
#include <cstring> /*porque el programa usa strcat y strcpy*/
#include <ctime>  /*porque el programa genera aleatorios*/
#include <cstdlib> /*porque el programa genera aleatorios*/
#include <iomanip> /*porque el programa usa setw*/

#define TAM 15

using namespace std;

struct jugadores{
	char nomjug[40]; /*nombre del jugador*/
	int edad; /*edad del jugador*/
	float sueldo; /*sueldo del jugador*/
	char eq[40]; /*equipo en el que juega*/	
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
	
	char jugnombre[60]; /*Para guardar el nombre de un jugador*/
 
	int n;
	cout<<endl<<"Llenando con datos aleatorios el arreglo de jugadores ....\n";
	for (int i=0; i<TAM; i++){
		strcpy(jugnombre,""); /*limpiamos variable de nombre, equivale a un jugnombre="" pero se debe hacer con strcpy
		generar un numero aleatorio para obtener una posicion o 
		indice a utilizar de la matriz de nombres*/
		n=0+rand()%(14-0+1);
		strcat(jugnombre, nombres[n]); /*se concatena el nombre de la posicion n
		 de la matriz de nombres */ 
		strcat(jugnombre," "); /*se concatena un espacio en blanco */
		
		/* un numero aleatorio para obtener una posicion o indice a 
		utilizar de la matriz de apellidos*/
		n=0+rand()%(14-0+1);
		strcat(jugnombre, apellidos[n]); /*se concatena el apellido de la posicion 
		n de la matriz de apellidos*/
		
		strcpy(equipo[i].nomjug,jugnombre); /*asignando el nombre generado 
		al jugador de la posicion i*/
		
		/*generar un numero aleatorio para obtener una posicion 
		o indice a utilizar de la matriz de equipos*/
		n=0+rand()%(11-0+1);
		strcpy(equipo[i].eq,equiposliga[n]); /*asignando el nombre generado al jugador de la posicion i */
		
		/*generar un numero aleatorio para asignarle una edad al jugador, 
		las edades son entre 17 y 34 a os*/
		equipo[i].edad=17+rand()%(34-17+1); 
		
		/*generar un numero aleatorio para asignarle sueldo al
		 jugador, los sueldos seran entre 30000 y 120000*/
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
    cout<<endl; /*salto de linea*/
    cout<<left<<setw(3)<<i+1;
	cout<<left<<setw(40)<<equipo[i].nomjug;
	cout<<left<<setw(20)<<equipo[i].eq;
	cout<<left<<setw(10)<<equipo[i].edad;
	cout<<left<<setw(15)<<equipo[i].sueldo;
	
	}	
	
}

/*fin del programa*/



