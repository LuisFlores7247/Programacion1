/*El programa genera automaticamente 100 votos distribuidos
entre tres candidatos*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void generarvotos(int *, int *,  int *);

int main(){
	srand(time(0));
	cout<<"Luis David Flores Martinez"<<endl;
	int candidato1=0;
	int candidato2=0;
	int candidato3=0;
	
	generarvotos(&candidato1, &candidato2, &candidato3);
	
	
	cout<<endl;
	cout<<endl<<"Total de votos para el candidato1: "<<candidato1;
	cout<<endl<<"Total de votos para el candidato2: "<<candidato2;
	cout<<endl<<"Total de votos para el candidato3: "<<candidato3;
	
	return 0;
}

void generarvotos(int *candidato1, int *candidato2, int  *candidato3){
	int n;
	cout<<endl<<"generando: ";
	for (int i=1; i<=100; i++){
		n=1+rand()%(3-1+1);
		cout<<n<<",";
		if (n==1)
		   *candidato1+=1;
		   else if (n==2)
		     *candidato2+=1;
		     else
		       *candidato3+=1;
	}
	
}
