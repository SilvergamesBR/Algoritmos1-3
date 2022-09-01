#include <iostream>
#include <string.h>

using namespace std;

int calculaLed(char num[]){//criacao da funcao e da variavel receptora
	int X=0,Y=0,leds=0;//criacao das variaveis auxiliares
	Y=strlen(num);//o valor de strlen de nem e atribuido a Y para facilitar o codigo
	while(X<Y){//loop de while para calcular o uso dos leds
		switch(num[X]){//switch break foi usado por ser mais rapido e eficaz
			case'1':
				leds+=2;
				break;
			case'2':
				leds+=5;
				break;
			case'3':
				leds+=5;
				break;
			case'4':
				leds+=4;
				break;
			case'5':
				leds+=5;
				break;
			case'6':
				leds+=6;
				break;
			case'7':
				leds+=3;
				break;
			case'8':
				leds+=7;
				break;
			case'9':
				leds+=6;
				break;
			case'0':
				leds+=6;
				break;
		}
		X++;
		}
		return leds;//retorno do numero de leds
}

int main(){
	int leds=0;
	char num[256];//criacao de variaveis,como nao foi dito no enunciado coloquei um valor acima do tamanho de qualquer numero razoavel para o tamanho da string
	cout<<"Digite o numero (0<num): ";//pedido de imput ao usuario e armazenamento do imput
	cin.getline(num,255);
	leds=calculaLed(num);//chamada da funcao para calcular os leds
	cout<<leds<<" leds serao necessarios";//output do resultado 
	return 0;	
}