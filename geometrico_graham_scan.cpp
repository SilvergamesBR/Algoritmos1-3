#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <list>

using namespace std;

struct point{
	   float x;
	   float y;	
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

float triangle_area(point A,point B,point C){
	vector AB;
	vector AC;
	float area;
	AB = create_vector(A,B);
	AC = create_vector(A,C);
	area=fabs(vectorial(AB,AC))/2;
	return area;
}

int direction (point A, point B, point C){//1 = to the left, -1 to the right, 0 = in line
	vector AB;
	vector AC;
	float vet;
	AB = create_vector(A,B);
	AC = create_vector(A,C);
	vet = vectorial(AB,AC);
	if(vet > 0){
		return 1;
	}else if(vet < 0){
		return -1;
	}else{
		return 0;
	}
}

int inside_triangle(point A, point B,point C, point P){
	int s1,s2,s3;
	s1 = direction(A,B,P);
	s2 = direction(B,C,P);
	s3 = direction(C,A,P);
	if(s1 == s2 && s2 == s3){
		return 1;
	}else if(s1*s3 == -1 || s1*s2 == -1 || s2*s3 == -1){
		return -1;
	}else{
		return 0;
	}
}

float polygon_area(point v[], int n){
	float area = 0;
	for(int i=0;i<(n-2);i++){
		area += triangle_area(v[0],v[i+1],v[i+2]);
	}
	return area;
}

bool segment_point(segment S, point P){
	if(direction(S.A,S.B,P) != 0){
		return false; 
	}else if(P.x > S.A.x && P.x < S.B.x){
		return true;
	}else if(P.x < S.A.x && P.x > S.B.x){
		return true;
	}else if(P.x < S.A.y && P.x > S.B.y){
		return true;
	}else if(P.x > S.A.y && P.x < S.B.y){
		return true;
	}else{
		return false;
	}
}

bool cmp(point a, point b){
	float angA = atan2(a.y,a.x);
	float angB = atan2(b.y,b.x);
	if(angA == angB){
		float distA = sqrt(pow(a.x,2)+pow(a.y,2));
		float distB = sqrt(pow(b.x,2)+pow(b.y,2));
		return distA > distB;
	}else{
		return angA < angB;
	}
}

void angleSort(point p[], int n){
	point pivot;//ponto mais abaixo
	int pos_pivot;
	pivot = p[0];
	pos_pivot = 0;
	for(int i =1; i<n ; i++){//encontra qual e o pon to mais abaixo e seta ele como pívo
		if(p[i].y < pivot.y){
			pivot = p[i];
			pos_pivot = i;
		}else if(p[i].y == pivot.y && p[i].x < pivot.x){
			pivot = p[i];
			pos_pivot = i;
		}
	}
	
	p[pos_pivot]= p[0];//reorganiza o vetor com o pivo na posicao 0
	p[0]= pivot;
	
	for(int i = 0; i<n; i++){//desloca o pívo para 0,0 e os outros pontos para a mesma posicao relativa
		p[i].x -= pivot.x;
		p[i].y -= pivot.y;
	}
	
	sort(p+1,p+n,cmp);//ordenacao
	
	for(int i = 0; i<n ; i++){//volta o vetor para a posicao original
		p[i].x += pivot.x;
		p[i].y += pivot.y;
	}
}

point next_to_top(list <point> stack){
	stack.pop_back();
	return stack.back();
}

list <point> Graham_scan(point p[], int n){
	list <point> stack;
	
	angleSort(p,n);
	
	stack.push_back(p[0]);
	stack.push_back(p[1]);
	stack.push_back(p[2]);
	
	int i = 3;
	
	while(i<n){
		if(direction(next_to_top(stack),stack.back(),p[i])==1){
			stack.push_back(p[i]);
			i++;
		}else{
			stack.pop_back();
		}
	}
	return stack;
}

int main (){
    point H[4];//vetor de pontos para utilizacao no algoritmo
    int n=4;//varaiavel auxiliar para armazenar o tamanho do vetor de pontos
    int i=0;//variavel auxiliar contadora para entrada de dados
    while(i<n){
		cin>>H[i].x;
		cin>>H[i].y;
		i++;
	}
	
	i= inside_triangle(H[0],H[1],H[2],H[3]);
	
	if(i==1){
		cout<<"Ataquem\n";
	}else{
		cout<<"Preparem-se\n";
	}
	
	return 0;
}