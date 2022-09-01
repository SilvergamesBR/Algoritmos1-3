#include <iostream>

using namespace std;

int main(){
	int N,X=0,Y=0,posmaiorpri[100],posmenorpri[100],posmaiorsec[100],posmenorsec[100],I=2;//criacao dass variaveis
	cout<<"Digite o valor de N (2<=N<=50) :";
	cin>>N;//input e validacao de N
	while(N<2 || N>50){
		cout<<"N deve ser entre 2 e 50, digite novamente: ";
		cin>>N;
	}
	float mat[N][N],maior=0,menor=0;//criacao da matriz quadrada de ordem N
	while(Y<N){//input dos valores na matriz
		while(X<N){
			cin>>mat[Y][X];
			X++;
		}
		X=0;
		Y++;
	}
	X=0;
	Y=0;
	maior=mat[0][0];
	posmaiorpri[0]=1;
	posmaiorpri[1]=1;
	while(X<N){//obtencao do maior valor da diagonal principal
		if(mat[Y][X]>maior){
			maior=mat[Y][X];
			posmaiorpri[0]=Y+1;
			posmaiorpri[1]=X+1;
			I=2;
		}else if(mat[Y][X]==maior && X>0){
			posmaiorpri[I]=Y+1;
			I++;
			posmaiorpri[I]=X+1;
			I++;
		}
		X++;
		Y++;
	}
	cout<<"Maior valor na diagonal principal = "<<maior<<endl<<"Linha: "<<posmaiorpri[0]<<endl<<"Coluna: "<<posmaiorpri[1]<<endl;//output do maior valor da diagonal principal
	Y=2;
	X=3;
	if(I>2){
		while(X<I){//output das posicoes caso hajam mais de um valor 
			cout<<"Linha: "<<posmaiorpri[Y]<<endl<<"Coluna: "<<posmaiorpri[X]<<endl;
			Y++;
			X++;
		}
	}
	I=2;
	X=0;
	Y=0;
	menor=mat[0][0];
	posmenorpri[0]=1;
	posmenorpri[1]=1;	
	while(X<N){//obtencao dos menores valores da diagonal principal
		if(mat[Y][X]<menor){
			menor=mat[Y][X];
			posmenorpri[0]=Y+1;
			posmenorpri[1]=X+1;
			I=2;
		}else if(mat[Y][X]==menor && X>0){
			posmenorpri[I]=Y+1;
			I++;
			posmenorpri[I]=X+1;
			I++;
		}
		X++;
		Y++;
	}
	cout<<"Menor valor na diagonal principal = "<<menor<<endl<<"Linha: "<<posmenorpri[0]<<endl<<"Coluna: "<<posmenorpri[1]<<endl;//output dos menores valores da diagonal principal
	Y=2;
	X=3;
	if(I>2){
		while(X<I){//output caso hajam valores iguais ao menor
			cout<<"Linha: "<<posmenorpri[Y]<<endl<<"Coluna: "<<posmenorpri[X]<<endl;
			Y++;
			X++;
		}
	}
	I=2;
	X=0;
	Y=(N-1);
	maior=mat[Y][0];
	posmaiorsec[0]=N;
	posmaiorsec[1]=1;
	while(X<N){//obtencao dos maiores valores da diagonal secundaria
		if(mat[Y][X]>maior){
			maior=mat[Y][X];
			posmaiorsec[0]=Y+1;
			posmaiorsec[1]=X+1;
			I=2;
		}else if(mat[Y][X]==maior && X>0){
			posmaiorsec[I]=Y+1;
			I++;
			posmaiorsec[I]=X+1;
			I++;
		}
		X++;
		Y--;
	}
	cout<<"Maior valor na diagonal secundaria = "<<maior<<endl<<"Linha: "<<posmaiorsec[0]<<endl<<"Coluna: "<<posmaiorsec[1]<<endl;//output do maior valor da diagonal secundaria
	Y=2;
	X=3;
	if(I>2){
		while(X<I){//output das posicoes caso haja mais de um valor igual ao maior
			cout<<"Linha: "<<posmaiorsec[Y]<<endl<<"Coluna: "<<posmaiorsec[X]<<endl;
			Y++;
			X++;
		}
	}
	I=2;
	X=0;
	Y=(N-1);
	menor=mat[Y][0];
	posmenorsec[0]=N;
	posmenorsec[1]=1;	
	while(X<N){
		if(mat[Y][X]<menor){//obtencao do menor valor da diagonal secundaria
			menor=mat[Y][X];
			posmenorsec[0]=Y+1;
			posmenorsec[1]=X+1;
			I=2;
		}else if(mat[Y][X]==menor && X>0){
			posmenorsec[I]=Y+1;
			I++;
			posmenorsec[I]=X+1;
			I++;
		}
		X++;
		Y--;
	}
	cout<<"Menor valor na diagonal secundaria = "<<menor<<endl<<"Linha: "<<posmenorsec[0]<<endl<<"Coluna: "<<posmenorsec[1]<<endl;//output do menor valor da diagonal secundaria
	Y=2;
	X=3;
	if(I>2){
		while(X<I){//output das posicaos caso haja mais de um valor igual ao maior
			cout<<"Linha: "<<posmenorsec[Y]<<endl<<"Coluna: "<<posmenorsec[X]<<endl;
			Y++;
			X++;
		}
	}
	return 0;
}