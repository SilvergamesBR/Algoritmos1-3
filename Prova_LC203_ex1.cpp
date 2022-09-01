#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <list>

using namespace std;

struct point{
	   double x;
	   double y;	
};
typedef point vector;

struct line{
	   point A;
	   point B;	
};
typedef line segment;

vector create_vector(point A,point B){
	   vector AB;
	   AB.x = B.x-A.x;
	   AB.y = B.y-A.y;
	   return AB;
}

float vectorial(vector A,vector B){
	float result;
	result = A.x*B.y - A.y*B.x;
	return result;
}

float scalar(vector A,vector B){
	float result;
	result = A.x*B.x + A.y*B.y;
	return result;
}

double vect_size(vector a){
	double t=0;
	t =(pow(a.x,2))+(pow(a.y,2));
	t = sqrt(t);
	return t;
}

int main (){
    vector *v;//vetor de vetores para utilizacao no algoritmo
    point a,b,aux;//pontos auxiliares para a criacao dos vetores
    int n;//varaiavel auxiliar para armazenar o tamanho do vetor de vetores
    int i=0;//variavel auxiliar contadora para entrada de dados
    double tam=0;//variavel para armazenar o tamanho da pista
    cin>>n;
    v = new vector[n];
    while(i<n){//logica de entrada de dados
		if(i==0){    
		    cin>>a.x;
		    cin>>a.y;
		    aux.x=a.x;
		    aux.y=a.y;
		}else{
		    a.x=b.x;
		    a.y=b.y;
		}
		if(i!=(n-1)){
		   	cin>>b.x;
			cin>>b.y;
		}else{
			b.x=aux.x;
			b.y=aux.y;
		}
		v[i]=create_vector(a,b);
		i++;
	}
	i=0;
	while(i<n){//chamada da funcao de calculo do tamanho
		tam += vect_size(v[i]);
		i++;
	}
	cout<<fixed<<setprecision(3);
	cout<<"Race Lenght: "<<tam<<" m\n";//saida de dados
	delete v;
	return 0;
}