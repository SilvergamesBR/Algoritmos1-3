#include <iostream>
#include <cstring>

using namespace std;
int main(){
	int N=0,vog=0;
	char txt[51];
	cin.getline(txt,50);
	while(txt[N]!='\0'){
		if(txt[N]=='a' || txt[N]=='e' || txt[N]=='i' || txt[N]=='o' || txt[N]=='u'){
			txt[N]=toupper(txt[N]);
			vog++;	
		}
		N++;
	}
	cout<<txt<<endl<<vog<<endl;
	return 0;
}