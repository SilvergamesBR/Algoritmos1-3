#include <iostream>

using namespace std;

float mediaImpares(int *vetor, int N){
    int *p;
    int x=0;
    float nImpares=0;
    float med=0;
    p = vetor;
    while(x<N){
		if((*p%2)==1 || (*p%2)==-1){
		    med += *p;
		    nImpares++;
		}
		p++;
		x++;
	}
	med = med/nImpares;
	return med;
}

int main() {
    int *v=NULL;//vetor a ser varrido para o programa
    int *p;//ponteiro que vai varrer o vetor
	int n,x=0;//variaveis auxiliares
	float med;//variavel para armazenar o resultado da funcao
	cin>>n;
	v = new int[n];//declaracao diniamica do vetor com n casas
	p=v;
	while(x<n){//logica de preenchimento do vetor pelo usuario
		cin>>*p;
		p++;
		x++;
	}
	med = mediaImpares(v,n);
	cout<<"Media dos elementos impares: "<<med;
	delete[] v;
	return 0;
}