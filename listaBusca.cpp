#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<float> lista, float x){
    list<float>::iterator t; // iterador para varrer a lista
    t=lista.begin();
    while(t != lista.end()){
        if(*t == x){
            return true;
        }
        t++;
    }
    return false;
}

int main(){
    list<float> lista; // ponteiro para a lista
    list<float>::iterator p; // iterador para varrer a lista
    float x=1; 
    float N=0;
    bool find;
    p=lista.begin();
    while(x != 0){
        cin>>x;
        *p = x;
        p++;
    }
    cin>>N;
    find = encontrar(lista,N);
    if(find == true){
        cout<<"Encontrado\n";
    }else{
        cout<<"Nao\nEncontrado\n";
    }
    // Desalocando memória usada pela lista
    while(!lista.empty()){
        lista.pop_front();
    }
    return 0;
}