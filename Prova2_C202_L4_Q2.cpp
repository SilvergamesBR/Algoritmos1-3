#include <iostream>

using namespace std;

int main(){
	struct livro{//criacao da struct para armazenar os dados e sua declaracao
		char nome[256];
		int paginas;
	}livros[256];
	int quant,X=0,maior=0,menor=0;//criacao da variavel que armazena a quantidade de livros a variaveis auxiliares
	//cout<<"numero de livros que serao avaliados :";//pedido para o usuario colocar a quantidade de livros
	cin>>quant;
	while(quant<0){
		cin>>quant;
	}
	while(X < quant){
		cin.ignore();
		cin.getline(livros[X].nome,255); //captacao dos dados sobre os livros do usuario, o tamanho maximo do nome nao foi especificado entao foi setado para o limite de 8 bits por ser um numero arbitrariamente grande
		cin>>livros[X].paginas;
		while(livros[X].paginas<0){//verificacao de dados para n de pag >0
			cin>>livros[X].paginas;
		}
		X++;
	}
	X=0;
	while(X<quant){//checagem e comparacao dos nuemros de paginas
		if(livros[X].paginas>livros[maior].paginas){//a posicao do livro com a maior ou menor pagina no vetor de structs sera armazenada na variavel respectiva
			maior=X;
		}
		if(livros[X].paginas<livros[menor].paginas){
			menor=X;
		}
		X++;
	}
	cout<<"Menor: "<<livros[menor].nome<<"\nMaior: "<<livros[maior].nome;//output de dados
	return 0;
}