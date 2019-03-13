/*
*Author:M Risqullah Sudanta G
*NPM: 140810180066
*Deskripsi:Pre-Test 03
*Tahun: 2019
*/
#include<iostream>
using namespace std;
struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30]

void banyakData(int& n){
	cout<<"Masukkan banyak data";cin>>n;
}

void inputMhs(larikMhs& mhs, int n){
	for(int i =0;i<n;i++){
		cout<<"Nama : ";cin.ignore();cin.getline(mhs.nama,40);
		cout<<"NPM	: ";cin.getline(mhs.npm,14);
		cout<<"IPK	: ";cin>>mhs.ipk;
	}
}

void  sortNama(larikMhs& mhs, int n) {
	for(int i = 0 ; i<n; i++) {
		for (int j = 0 ; j<n-i-1 ; j++) {
			if (mhs.ipk[j]>mhs.ipk[j+1]) {
				swap (mhs.ipk[j],mhs.ipk[j+1]);
			}
		}
	}
}

void cetakMhs(larikMhs mhs, int n){
	cout<<"Nama : "<<mhs.nama;
	cout<<"NPM	: "<<mhs.npm;
	cou<<"IPK	: "<<mhs.ipk;
}

int main(){
	int x;
	larikMhs mhs;
	
	banyakData(n);
	inputMhs(mhs,n);
	sortNama(mhs,n);
	cetakMhs(mhs,n);
}
