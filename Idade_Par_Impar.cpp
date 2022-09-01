#include <iostream>
using namespace std;
int main(){
	int I,c;
	c=0;
	cout<<"Digite sua idade :";
	cin>>I;
	if(I>=0){
		if(I>=18){
		   	if(I>100){
				   cout<<"Ce e veio heim pqp"<<endl;
			   }
			cout<<"Voce e maior de idade ";
		}else{
		   	cout<<"Voce e menor de idade ";
	   	}
		if(I%2 == 0){
			cout<<"e sua idade e par";
		}else{
		   	cout<<"e sua idade e impar";
	   	}
	}else{
		cout<<"Voce ainda nao nasceu ";
		while(c<10){
			cout<<"Ha Ha ";
			c++;
		}
	}
	return 0;
}