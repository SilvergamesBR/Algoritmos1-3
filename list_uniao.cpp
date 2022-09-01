#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> lista1;
    list<int> lista2;
    int X;
    cin>>X;
    while(X!=0){
        lista1.push_back(X);
        cin>>X;
    }
    cin>>X;
    while(X!=0){
        lista2.push_back(X);
        cin>>X;
    }
    lista1.merge(lista2);
    lista1.unique();
    while(!lista1.empty()){
        X=lista1.front();
        lista1.pop_front();
        cout<<X<<" ";
    }
    return 0;    
}