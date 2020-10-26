#include <iostream>

using namespace std;

int main(){
		char nama[100];
		int nim;
		char plug[100];
		
		cout<<"Masukan nama anda ? "<<endl;
		cout<<"\n";
		cin.getline(nama, sizeof(nama));
		cout<<"Masukan NIM anda ? \n"<<endl;
		cin>>nim;
		cout<<"\n";
		cout<<"Masukan plug anda ? \n";
		cin>>plug;
		cout<<"\n\n\n";
		cout<<"=============================================================== \n\n";
		cout<<"NIM		||  Nama			|| Plug		\n\n";
		cout<<nim<<"		"<<nama<<" 		"<<plug;	
		cout<<"\n\n";
		cout<<"===============================================================  \n\n";
		return 0;






}
