#include <iostream>

using namespace std;

int main(){
	int ord=0,X=0,Y=0,som=0,count=1,Z=0;
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
	cout<<"Soma da diagonal principal: ";
	while(X<ord){
		som=som+mat[X][Y];
		X++;
		Y++;
	}
	cout<<som<<endl;
	som=0;
	X=(ord-1);
	Y=(ord-2);
	while(count<ord){
		while(Z<count){
			som=som+mat[X][Y];
			X--;
			Z++;
		}
		if(Y==(ord-(count+1))){
			X=(ord-1);
			Y--;
			count++;
			Z=0;
		}
	}
	cout<<"Soma dos numeros acima da diagonal: "<<som<<endl;
	count=1;
	som=0;
	X=0;
	Y=(ord-1);
	while(count<ord){
		while(X<(ord-count)){
			som=som+mat[X][Y];
			X++;
		}
		X=0;
		Y--;
		count++;
	}
	cout<<"Soma dos numeros abaixo da diagonal: "<<som<<endl;
	return 0;	
}