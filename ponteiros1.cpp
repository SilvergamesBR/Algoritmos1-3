#include <iostream>

#include <iomanip>
 
using namespace std;

struct notas{
	int nota1;
	int nota2;
	int nota3;
	int nota4;
	float media;
};

int main() {
	notas *aluno;
	int n,x=0;
	float medtur;
	cin>>n;
	aluno = new notas[n];
	while(x<n){
		cin>>aluno[x].nota1>>aluno[x].nota2>>aluno[x].nota3>>aluno[x].nota4;
		aluno[x].media = (aluno[x].nota1+aluno[x].nota2+aluno[x].nota3+aluno[x].nota4)/4.0;
		x++;
	}
	x=0;
	while(x<n){
		medtur=medtur+aluno[x].media;
		x++;
	}
	medtur=medtur/n;
	cout<<fixed<<setprecision(2);
	cout<<medtur<<endl;
	delete[] aluno;
	return 0;   	
}