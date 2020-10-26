#include <iostream>
using namespace std;

int main(){
	float d = 0;
	float l_s = 0;
	float l_a = 0;
	float s = 0;
	float t = 0;
	cout<<"Selamat datang di alat penghitung luas permukaan kerucut by Fadhil_200160 \n";
	cout<<"Silahkan isi diameter alas ? \n";
	cin>>d;
	cout<<"Silahkan isi tinggi kerucut ? \n";
	cin>>t;
	cout<<"\n";
	cout<<"Silahkan isi garis pelukis ? \n";
	cin>>s;
	cout<<"\n";
	l_s = l_a + (3.14 * d/2 * s);
	cout<<"Jadi luas permukaan kerucut anda adalah ? \n";
	cout<<l_s;
	cout<<"\n";
	return 0;

}
