#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

char op[1024];
int h=3, i, j=2;
float angka[1024], hasil, hasil1[1024];

struct operasi {
	string pilihan;
};
struct operasi opr;

void printline(int count) {
	int line;
	for (line = 0; line < count - 1; line++) {
		cout << "=";
	}
	cout << "=\n";
}

void mainMenu() {
	
	printline(30);
	cout << "[+] Penjumlahan\n";
	cout << "[-] Pengurangan\n";
	cout << "[*] Perkalian\n";
	cout << "[/] Pembagian\n";
	cout << "[mem] Memori\n";
	cout << "[del] Menghapus\n";
	cout << "[exit] Keluar" << endl;
	printline(30);
}

void penjumlahan() {

	if (hasil == 0) {
		for (i = 0; i < 2; i++) {
			cout << "Masukan angka : "; cin >> angka[i];
			hasil = angka[0] + angka[1];
			hasil1[h] = hasil;
		}
		cout << angka[0] << " + " << angka[1] << " = " << hasil << endl;
		
	} else {
		h++;
		i++;
		cout << hasil1[h-1] << " + ";
		cin >> angka[i];
		hasil = hasil + angka[i];
		cout << hasil1[h-1] << " + " << angka[i] << " = " << hasil << endl;
		hasil1[h] = hasil;
	}
}

void pengurangan() {

	if (hasil == 0) {
		for (i = 0; i < 2; i++) {
			cout << "Masukan angka : "; cin >> angka[i];
			hasil = angka[0] - angka[1];
			hasil1[h] = hasil;
		}
		cout << angka[0] << " = " << angka[1] << " = " << hasil << endl;
		
	} else {
		h++;
		i++;
		cout << hasil1[h-1] << " - ";
		cin >> angka[i];
		hasil = hasil - angka[i];
		cout << hasil1[h-1] << " - " << angka[i] << " = " << hasil << endl;
		hasil1[h] = hasil;
	}
}

void perkalian() {

	if (hasil == 0) {
		for (i = 0; i < 2; i++) {
			cout << "Masukan angka : "; cin >> angka[i];
			hasil = angka[0] * angka[1];
			hasil1[h] = hasil;
		}
		cout << angka[0] << " * " << angka[1] << " = " << hasil << endl;
		
	} else {
		h++;
		i++;
		cout << hasil1[h-1] << " * ";
		cin >> angka[i];
		hasil = hasil * angka[i];
		cout << hasil1[h-1] << " * " << angka[i] << " = " << hasil << endl;
		hasil1[h] = hasil;
	}
}

void pembagian() {

	float bil1, bil2;
	
	if (hasil == 0) {
		for (i = 0; i < 2; i++) {
			cout << "Masukan angka : "; cin >> angka[i];
			hasil = angka[0] / angka[1];
			hasil1[h] = hasil;
		}
		cout << angka[0] << " / " << angka[1] << " = " << hasil << endl;
		
	} else {
		h++;
		i++;
		cout << hasil1[h-1] << " / ";
		cin >> angka[i];
		hasil = hasil / angka[i];
		cout << hasil1[h-1] << " / " << angka[i] << " = " << hasil << endl;
		hasil1[h] = hasil;
	}
}

void memoryDisplay() {
	
	if (hasil != 0) {
		printline(12);
		cout << "   MEMORI" << endl;
		printline(12);
		cout << angka[0] << " " << op[2] << " " << angka[1] << " = " << hasil1[3] << endl;
		for (int k = 3; k <= i; k++ ) {
			cout << hasil1[k] << " " << op[k] << " ";
			cout << angka[k] << " = " << hasil1[k+1];
			cout << endl;
		}
		cout << endl;
		getch();
		system("cls");
	} else {
		printline(19);
		cout << "Memori masih kosong" << endl;
		printline(19);
		getch();
		system("cls");
	}
	
}

void del() {
	
	if (hasil != 0) {
		for (int del = 0; del <= i; del++) {
		angka[del] = 0;
		hasil = 0;
		j = 2;
		h = 3;
		}
		printline(14);
		cout << "Hapus berhasil" << endl;
		printline(14);
		getch();
		system("cls");	
	} else if (hasil == 0) {
		printline(19);
		cout << "Memori masih kosong\n";
		cout << "Hapus Gagal" << endl;
		printline(19);
		getch();
		system("cls");
	}

}

int main() {

	do {
		
		mainMenu();
		cout << "Masukan pilihan : "; cin >> opr.pilihan;
		if (opr.pilihan == "+") {
			system ("cls");
			printline(30);
			cout << "Penjumlahan" << endl;
			printline(30);
			op[j] = '+';
			penjumlahan();

		} else if (opr.pilihan == "-") {
			system ("cls");
			printline(30);
			cout << "Pengurangan" << endl;
			printline(30);
			op[j] = '-';
			pengurangan();

		} else if (opr.pilihan == "*") {
			system ("cls");
			printline(30);
			cout << "Perkalian" << endl;
			printline(30);
			op[j] = '*';
			perkalian();

		} else if (opr.pilihan == "/") {
			system ("cls");
			printline(30);
			cout << "Pembagian" << endl;
			printline(30);
			op[j] = '/';
			pembagian();

		} else if (opr.pilihan == "mem") {
			system ("cls");
			memoryDisplay();
		} else if (opr.pilihan == "del") {
			system("cls");
			del();
		}else if (opr.pilihan == "exit") {
			exit(1);
			break;
		} else {
			cout << "Pilihan tidak tersedia\n\n";
			getch();
			system("cls");
		}
		
		if (opr.pilihan == "+" || opr.pilihan == "-" || opr.pilihan == "*" || opr.pilihan == "/"){
		j++;
		}
		
	} while (1);
	
}