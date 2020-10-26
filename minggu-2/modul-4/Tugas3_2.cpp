#include <iostream>
using namespace std;

int main(){
	float degr;
	float degc;
	float degk;
	float degf;
	
	
	cout<<"Selamat Datang di pen-konversian suhu Celsius \n";
	cout<<"Silahkan input suhu celsius \n";
	cin>>degc;
	degf = (9/5 * degc) + 35;
	degk = 273 + degc;
	degr = (4 / 9 * degc) + 32;
	cout<<"Jadi hasil konversi suhu celsius menjadi Fahrenheit, Kelvin, dan Reamur sebagai berikut \n";
	cout<<"1. "<<degf<<" Derajat Fahrenheit \n";
	cout<<"2. "<<degr<<" Derajat Reamur \n";
	cout<<"3. "<<degk<<" Derajat Kelvin \n";
	return 0;


}
