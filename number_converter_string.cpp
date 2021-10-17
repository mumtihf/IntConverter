#include <iostream>
#include <conio.h>

using namespace std;

void satuan (long a) 
{
	switch (a) {
		case 1:
			cout << "Satu ";
			break;
		case 2:
			cout << "Dua ";
			break;
		case 3:
			cout << "Tiga ";
			break;
		case 4:
			cout << "Empat ";
			break;
		case 5:
			cout << "Lima ";
			break;
		case 6:
			cout << "Enam ";
			break;
		case 7:
			cout << "Tujuh ";
			break;
		case 8:
			cout << "Delapan ";
			break;
		case 9:
			cout << "Sembilan ";
			break;
		case 10:
			cout << "Sepuluh";
			break;
		case 11:
			cout << "Sebelas";
			break;
	}
}

void huruf (long b) 
{
	if (b < 12) {
		satuan (b);
	} else if ((b > 11) && (b < 20)) {
		huruf (b % 10);
		cout << "Belas ";
	} else if ((b > 19) && (b < 100)) {
		huruf (b / 10);
		cout << "Puluh ";
		huruf (b % 10);
	} else if ((b > 99) && (b < 200)) {
		cout << "Seratus ";
		huruf (b % 100);
	} else if ((b > 199) && (b < 1000)) {
		huruf (b / 100);
		cout << "Ratus ";
		huruf (b % 100);
	} else if ((b > 1001) && (b < 2000)) {
		cout << "Seribu ";
		huruf (b % 1000);
	} else if ((b >= 2000) && (b <= 9999)) {
		huruf (b / 1000);
		cout << "Ribu ";
		huruf (b % 1000);
	} else if ((b >= 10000) && (b <= 99999)) {
		huruf (b / 1000);
		cout << "Ribu ";
		huruf (b % 1000);
	} else if ((b >= 100000) && (b <= 999999)) {
		huruf (b / 1000);
		cout << "Ribu ";
		huruf (b % 1000);
	} 
}

int main () 
{
	int angka;
	
	cout << "Masukkan Angka: ";
	cin >> angka;
	
	if (angka < 0) {
		cout << "Minus ";
		huruf (angka);
	} else {
		huruf (angka);
	}
}
