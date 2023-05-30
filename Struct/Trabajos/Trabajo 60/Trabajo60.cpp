

#include <iostream>
#include <string> //para uso del tipo de dato string

#define TAM 20

using namespace std;

enum tipopublicacion{LIBROS=1,REVISTAS,PERIODICO};

union informacion{
	
	struct datosrevista{
        int numero;
        int mes;
        int anio;
    
    }drev;
    
    struct datosperiodico{
        float precio;
        int totalejemplares;
      
    }dperiodico;
    
    struct datoslibro{
        int totalpaginas;
        char categoria[30];//no es posible usar del tipo string dentro del struct que es campo de una union,se tiene que trabajar la varible como vector de char
     
    }dlibro;
    
};
struct publicaciones{
    string nompub;//un struct si acepta el tipo de dato string
    tipopublicacion tipo; //campo del tipo del enum;
    informacion inf; //inf es un campo del tipo de la union, solo se puede usar uno de los struct a la vez, para poder utilizar este campo seguir esta sintaxis, por ejemplo si quieres el precio de un periodico: cin>> pub[i].inf.dperiodico.precio; notar que se teclea inf que es el campo de la union y se teclea dperiodico que es la  variable de trabajo de ese struct y finalmente el dato que les interesa
};

int main(){
   
    return 0;
}

