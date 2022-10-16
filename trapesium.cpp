#include <iostream>
using namespace std;
int main(){
	//Dekalarasi variabel
	int a,b,t;
	float l;

	//proses input nilai sisi atas, bawah dan tinggi
	cout<<"Masukan sisi a  : ";
	cin>>a;

	cout<<"Masukan sisi b  : ";
	cin>>b;

	cout<<"Masukan tinggi  : ";
	cin>>t;

	//hitung rumus luas trapesium
	l=(0.5*(a+b)*t);

	//Tampilkan luas
	cout<<"Luas trapesium  : "<<l<<endl;

	return 0;
}
