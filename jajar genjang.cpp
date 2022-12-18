#include <iostream>
using namespace std;
int main(){
	//Dekalarasi variabel
	float l,a,t;

	//proses input nilai sisi atas, bawah dan tinggi
	cout<<"Masukan Alas            : ";
	cin>>a;

	cout<<"Masukan Tinggi          : ";
	cin>>t;

	//hitung luas
	l=a*t;

	//Tampilkan Hasil
	cout<<"Luas Jajar Genjang      : "<<l<<endl;
	return 0;
}
