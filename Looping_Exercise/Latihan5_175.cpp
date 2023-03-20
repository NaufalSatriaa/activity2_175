#include <iostream>
using namespace std;

int main() {
	int a[5];
	cout << "mengisi array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Data ke - " << (i) << ": ";
		cin >> a[i];
	}
	cout << "mengisi array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Data ke - " << (i + 1) << ": " << a[i] << endl;
	}
}