#include <iostream>
#include <conio.h>
using namespace std;

int array[100], jumlah, searching;

void input () {

	cout << "Masukan banyak data: "; cin >> jumlah;
	for (int i = 0; i < jumlah; i++ ) {
		cout << "data [" << i+1 << "] "; cin >> array[i];	
	}
	
}

void tampil () {
	
	cout << "Data dalam array = [ ";
	for (int i = 0; i < jumlah; i++ ) {
		cout << array[i] << " ";
	}
	cout << "]" << endl;
	
}

void printline(int count) {
	int i;
	for (i = 0; i < count - 1; i++) {
		cout << "=";
	}
	cout << " " << endl;
}

int linierSearch(int array[], int n, int searching) {

	for (int i = 0; i < n; i++)
	if (array[i] == searching)
	return i+1;
	return -1;
}

int main() {

	input();
	printline(40);
	tampil();
	printline(40);
	
	cout << "Masukan data yang ingin dicari: "; cin >> searching;

	int n = sizeof(array) / sizeof(array[0]);
	int result = linierSearch(array, n, searching);
	(result == -1) ? cout << "Element not found" << endl:
	cout << "Element found at data [" << result << "]" << endl;
	
	printline(40);
	getch();
}
