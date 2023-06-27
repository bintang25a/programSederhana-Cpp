#include <iostream>
#include <ctime>
#include <conio.h>
#include <iomanip>

using namespace std;

int saldo=5000, hasil=3000, kembalian=2000;
int i, x=2;
int banyak=2;
int totalPaket=1500;
int totalSeluruhPesanan=3000;
time_t a=time(0);
string b=ctime(&a);

struct nama {
	string pelanggan, produk;
};
struct nama nama;

void printline(int count) {
	int line;
	for (line = 0; line < count - 1; line++) {
		cout << "=";
	}
	cout << "=\n";
}

void printline1(int count) {
	int line;
	for (line = 0; line < count - 1; line++) {
		cout << "-";
	}
	cout << "-\n";
}

void struk() {

	nama.produk="Jamu sehat";
	nama.pelanggan="Agung";

	if(saldo>=hasil) system("cls"); {
		
		//header
		cout << " Toko 'SPORTBOLA BABEH JOHN'\n";
		cout << " JL. Prof. Dr. Hamka No. 145\n";
		cout << " Telp 021-0000000 Kota Bandung, jawa Barat, Indonesia\n";
		printline(88);
		cout << " Hari/Bulan/Tanggal/Jam/tahun = " << b << endl;
		printline(88);
		cout << setw(45) << left << " Nama Pelanggan" << setw(42) << left << nama.pelanggan << endl;
		printline1(88);
			
		//judul
		cout << setw(40)	<< left << " Nama Barang"	<< setw(5) << " ";
		cout << setw(8) 	<< left << "Jumlah"			<< setw(5) << " ";
		cout << setw(12)	<< left << "Harga"			<< setw(5) << " ";
		cout << setw(12)	<< left << "Total Harga" 	<< endl;
		printline1(88);
		
		//row
		for (int i = 0; i < x; i++) {
			if (banyak != 0) {
				cout << setw(1)		<< " ";
				cout << setw(39)	<< left << nama.produk											<< setw(7) << " ";
				cout << setw(4)		<< left << banyak												<< setw(7) << " ";
				cout << setw(3)		<< left << "Rp." << setw(9) << right << totalPaket 				<< setw(5) << " ";	 																						
				cout << setw(3)		<< left << "Rp." << setw(9) << right << totalSeluruhPesanan		<< endl;
			}
		}
			
		//footer
		printline1(88);	
		cout << setw(75) << left << " Total" << setw(3) << left << "Rp." << setw(9) << right << hasil <<endl;
		cout << setw(75) << left << " Tunai" << setw(3) << left << "Rp." << setw(9) << right << saldo <<endl;
		cout << "" << endl;
		cout << setw(75) << left << " Kembalian" << setw(3) << left << "Rp." << setw(9) << right << kembalian <<endl;
		printline(88);
		cout << setw(36) << " " << setw(15) << "   *Terima Kasih*	" 	<< endl;
		cout << setw(36) << " " << setw(15) << "Atas kunjungan anda	" 	<< endl;
		cout << setw(36) << " " << setw(15) << "Harap datang kembali\n" 	<< endl;
		cout << setw(30) << left << " "; printline1(32);
		cout << setw(32) << left << " " << setw(28) << left << " Tekan (ENTER) untuk LogOut" << endl;
		cout << setw(30) << left << " "; printline1(32);
		getch();
	}	
}	

int main() {
	
	struk();
	
}
