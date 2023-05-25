
#include <iostream> 
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#define REN 10
#define COL 10
using namespace std;

void grabarMatriz(int matriz[REN][COL]);
void imprimirMatriz(int matriz[REN][COL]);

int main(){
	cout << "Luis David Flores Martinez" << endl;
	srand(time(0));
	
	int matriz [REN][COL];
	
	//llenando la matriz
	for(int i=0; i<REN; i++){
		for(int j=0;j<COL; j++){
			matriz[i][j]=1+rand()%(1000-1+1);
		}
	}
	imprimirMatriz(matriz);
	grabarMatriz(matriz);
	return 0;
}

void imprimirMatriz(int matriz[REN][COL]){
	cout<<endl<<endl<<"Imprimiendo matriz de "<<REN<<" x "<<COL<<endl;
	
	//codigo que genera la fecha y hora
	
	time_t now = time(0);
	struct tm *time = localtime(&now);
	char dia[12];
	char hora[10];
	strftime(dia,12,"%d/%m/%Y",time);
	strftime(hora,10,"%H:%M:%S",time);
	
	cout<<endl<<dia ;
	cout<<endl<<hora ;
	cout<<endl;
	
	cout<<endl;
	for (int r=0; r<REN; r++){
		for (int c=0; c<COL; c++){
			cout<<left<<setw(5)<<matriz[r][c];
		}
		cout<<endl;
	}
}

void grabarMatriz(int matriz[REN][COL]){
	fstream file;
    file.open("matriz.txt", ios::out);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            file << setw(4) << matriz[i][j];
        }
        file << endl;
    }
    file.close();
}


