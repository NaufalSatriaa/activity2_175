#include <iostream>
using namespace std;

float LuasPersegi(float p, float l) {
	return p * l;
}

float LuasLingkaran(float r) {
	return 3.14 * r * r;
}

float LuasSegitiga(float a, float t) {
	return 0.5 * a * t;
}

int main() {
	float panjang, lebar, tinggi, alas, jejari;
	int pilihan;

	do {
		cout << "\n\n===========================" << endl;
		cout << "=========MAIN MENU=========" << endl;
		cout << "===========================" << endl;
		cout << "1. Luas Persegi" << endl;
		cout << "2. Luas Lingkaran" << endl;
		cout << "3. Luas Segitiga" << endl;
		cout << "4. Exit" << endl;
		cout << "Pilihan = ";
		cin >> pilihan;
		

		switch (pilihan) {
		case 1:
			cout << "\n\nMenghitung luas persegi " << endl;
			cout << "Masukkan Panjang = ";
			cin >> panjang;
			cout << "Masukkan Lebar = ";
			cin >> lebar;
			cout << "Luas Persegi = " << LuasPersegi(panjang, lebar) << endl;
			break;
		case 2:
			cout << "\n\nMenghitung Luas Lingkaran" << endl;
			cout << "Masukkan jari - jari = ";
			cin >> jejari;
			cout << "Luas Lingkaran adalah = " << LuasLingkaran(jejari) << endl;
			break;
		case 3:
			cout << "\n\nmenghitung Luas Segitiga" << endl;
			cout << "Masukkan Alas = ";
			cin >> alas;
			cout << "Masukkan Tinggi = ";
			cin >> tinggi;
			cout << "Luas Segitiga adalah = " << LuasSegitiga(alas, tinggi) << endl;
			break;
		case 4:
			break;
		default :
			cout << "PILIHAN SALAH" << endl;
			break;
		}
	} while (pilihan != 4);
}

