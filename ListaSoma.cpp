#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> lista; // ponteiro para a lista
    list<int>::iterator p; // iterador para varrer a lista
    int soma=1; // soma dos elementos da lista
    p=lista.begin();
    while(soma!=0){
        cin>>soma;
        *p = soma;
        p++;
    }
    soma = 0;
    p=lista.begin();
    while(p!=lista.end()){
        soma += *p;
        p++;
    }
    cout << soma << endl;
    // Desalocando memória usada pela lista
    while(!lista.empty()){
        lista.pop_front();
    }
    return 0;
}