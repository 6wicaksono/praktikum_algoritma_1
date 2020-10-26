#include <iostream>
using namespace std;
int main(){
	char nama[40];
	int nim;
	char kelas[100];
	char j_kel[40];
	char al_r[100];
	char email[30];
	string no_hp;
	
	cout<<"Siapa namamu ?\n ";
	cin.getline(nama, sizeof(nama));
	cout<<"NIM anda ? \n";
	cin>>nim;
	cout<<"\n";
	cout<<"Kelas praktikum anda ? \n";
	cin>>kelas;
	cout<<"Jenis kelamin anda ? \n";
	cin>>j_kel;
	cout<<"Alamat tempat tinggal anda sekarang ?\n";
	cin>>al_r;
	cout<<"Alamat e-mail anda ? \n";
	cin>>email;
	cout<<"Nomor hp anda ? \n";
	cin>>no_hp;
	cout<<"\n";
	cout<<"Terima Kasih \n\n";
	cout<<"Jadi data anda yaitu \n";
	cout<<nama;
	cout<<"\n";
	cout<<nim;
	cout<<"\n";
	cout<<kelas;
	cout<<"\n";
	cout<<j_kel;
	cout<<"\n";
	cout<<al_r;
	cout<<"\n";
	cout<<email;
	cout<<"\n";
	cout<<no_hp;
	cout<<"\n";
	return 0;



}
