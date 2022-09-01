#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(){
    cout<<fixed<<setprecision(1);
    int X=0,prior=1,Y=0,J=0,maiorpri=0;//criacao das variaveis
    float tempomed=0,tempoesperatemp=0;
    ifstream prioridade;
    struct processo{//criacao e declaracao da struct referente aos processos
        int numero;
        int duracao;
        int prioridade;
        float tempoespera;
    }processos[256];
    prioridade.open("prioridade.txt",ifstream::in);//abertura do arquivo prioridade
    while(prioridade.eof()==false){//passagem dos dados para a memoria ram  
        prioridade>>(processos[X].numero);
        prioridade>>(processos[X].duracao);
        prioridade>>(processos[X].prioridade);
        processos[X].tempoespera=0;
        X++;
    }
    /*if(X==5){
        X--;
    }*/
    prioridade.close();//fechamento do arquivo
    while(Y<X){
        if(processos[Y].prioridade>maiorpri){
            maiorpri=processos[Y].prioridade;
        }
        Y++;
    }
    /*if(X==4){
        maiorpri++;
    }*/
    Y=0;
    while(prior<=maiorpri){//O output e calculo foi feito dessa maneira pois nunca foi dito explicitamente que a prioridade sempre seguiria uma sequencia continua
        while(Y<X){
            if(processos[Y].prioridade==prior){//output dos processos e tempo de execucao em hifens
                cout<<"P"<<processos[Y].numero;
                while(J<processos[Y].duracao){
                    cout<<"-";
                    J++;
                }
                if(processos[Y].prioridade>1){//calculo do tempo de espera
                    processos[Y].tempoespera = tempoesperatemp;
                }
                tempoesperatemp = processos[Y].tempoespera + processos[Y].duracao;
            }
            Y++;
            J=0;
        }
    prior++;        
    Y=0;
    }
    while(Y<X){
        tempomed=tempomed+processos[Y].tempoespera;
        Y++;
    }
    tempomed=tempomed/Y;
    cout<<"\nTempo medio de espera: "<<tempomed<<" ms";
    return 0;
}