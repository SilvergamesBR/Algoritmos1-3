#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct point{
	   float x;
	   float y;	
};
typedef point vector;

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

int main (){
    int count;
	cin>>count;
	cout<<fixed<<setprecision(2);
	while(count>0){
		float area=0;
		point A;
		point B;
		point C;
		cin>>A.x>>A.y;
		cin>>B.x>>B.y;
		cin>>C.x>>C.y;
		area=triangle_area(A,B,C);
		if(area>0){
		cout<<area<<endl;
		}else{
		    cout<<"Nao formam triangulo"<<endl;
		}
		count --;
	}
	return 0;
}