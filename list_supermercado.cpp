#include <iostream>
#include <list>

using namespace std;

int main(){
    int N;
    int X=0;
    int aux=0;
    cin>>N;
    list<int> estoque;
    list<int> venda;
    while(X<N){
        cin>>aux;
        if(aux == 1){
            cin>>aux;
            estoque.push_back(aux);
        }else if(aux == 2){
            aux=estoque.front();
            estoque.pop_front();
            venda.push_front(aux);
        }
        X++;
    }
    cout<<"Estoque: ";
    while(!estoque.empty()){
        aux = estoque.front();
        cout<<aux<<" ";
        estoque.pop_front();
    }
    cout<<"\nVenda: ";
    while(!venda.empty()){
        aux = venda.front();
        cout<<aux<<" ";
        venda.pop_front();
    }
    return 0;    
}