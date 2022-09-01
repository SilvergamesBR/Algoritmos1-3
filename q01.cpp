#include <iostream>

using namespace std;

int main(){
	int ord=0,X=0,Y=0;
	cout<<"Digite a ordem da matriz (1<ord<10) :";
	cin>>ord;
	while(ord<1||ord>10){
		cout<<"Digite um numero entre 1 e 10 ";
		cin>>ord;
	}
	int mat[10][10];
	while(X<ord && Y<ord){
		cin>>mat[X][Y];
		X++;
		if(X==ord){
			Y++;
			X=0;
		}
	}
	X=0;
	Y=0;
	cout<<"Matriz: \n";
	while(X<ord && Y<ord){
		cout<<mat[X][Y]<<" ";
		X++;
		if(X==ord){
			cout<<"\n";
			Y++;
			X=0;
		}
	}
	X=0;
	Y=0;
	cout<<"Diagonal principal: ";
	while(X<ord){
		cout<<mat[X][Y]<<" ";
		X++;
		Y++;
	}
	Y=0;
	X=(ord-1);
	cout<<"\nDiagonal secundaria: ";
	while(Y<ord){
		cout<<mat[X][Y]<<" ";
		X--;
		Y++;
	}
	return 0;
}