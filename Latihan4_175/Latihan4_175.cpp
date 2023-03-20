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
		cout << "===========================" << endl;
		cout << "=========MAIN MENU=========" << endl;
		cout << "===========================" << endl;
		cout << "1. Luas Persegi" << endl;
		cout << "2. Luas Lingkaran" << endl;
		cout << "3. Luas Segitiga" << endl;
		cout << "4. Exit" << endl;
		cin >> pilihan;

		switch (pilihan) {
		case 1:
			cout << "Menghitung luas persegi" << endl;
			cout << "Masukkan Panjang" << endl;
			cin >> p;
			cout << "Masukkan Lebar" << endl;
			cin >> l;
			cout << "Luas Persegi = " << LuasPersegi(p, l) << endl;
			break;
		case 2:
			cout << "Masukkan jari - jari = " << endl;
			cin >> r;
			cout << "Luas Lingkaran adalah = " << LuasLingkaran(r) << endl;
			break;
		case 3:
			cout << "Masukkan Alas = " << endl;
			cin >> a;
			cout << "Masukkan Tinggi = " << endl;
			cin >> t;
			cout << "Luas Segitiga adalah = " << LuasSegitiga(a, t) << endl;
			break;
		case 4:
			break;
		}
	} while(pilihan != 4)
}

