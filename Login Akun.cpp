#include<iostream>
#include<conio.h>

using namespace std;

int i;
char yesNo='y', konfirmasi;

struct pelanggan {
	string nama, password;
};
struct pelanggan p;

void printline(int count) {
	int line;
	for (line = 0; line < count - 1; line++) {
		cout << "=";
	}
	cout << "=\n";
}

//Registrasi akun
void regAkun(){
	
	system("cls");
	cout << "=== Register Akun ===\n";
	cout << "MASUKAN USERNAME : "; cin >> p.nama;
	cout << "MASUKAN PASSWORD : "; cin >> p.password;
}

//Menu login akun
void logAkun(){
	
	int j=1;
	char ch, akun;
	do {
		back1:
		system ("cls");
		printline(36);
		cout << "SELAMAT DATANG SILAHKAN LOGIN\n";
		printline(36);
		cout << "\nApakah anda sudah memiliki Akun (Y/N)? "; cin >> yesNo;
		if (yesNo == 'y' || yesNo == 'Y'){

			//tampilan login
			system("cls");
			for (i=1; i<=3; i++) {
				string email = "";
				string sandi = "";
				cout << "\nSilahkan Login untuk berbelanja di toko 'SPORTBOLA BABEH JOHN'\n\n";
				cout << "MASUKAN USERNAME : "; cin >> email;
				cout << "MASUKAN PASSWORD : "; 
				ch = _getch();
			            while(ch != 13){	
			            sandi.push_back(ch);
			            cout << '*';
			            ch = _getch();
			            }
			 
			 	//mencocokan username dan sandi yang tepat
				if(email ==  "kelompok2" && sandi == "sda123" || email == p.nama && sandi == p.password ) {
			
					//tampilan jika berhasil login
					konfirmasi = 't';
					cout << "\n\n";
					printline(50);
					cout << "Selamat Datang, Semoga bermanfaat ^_^\n";
					printline(50);
					cout << "\ntekan (ENTER) untuk melanjutkan\n";
					getch();
					break;
					
					//tampilan jika gagal login, dan return to login
				} else {
					cout << "\n\nMaaf Usename dan Password anda Salah\n";
					if(i<=2) {
					cout << "\nMOHON MASUKAN USERNAME DAN PASSWORD YANG BENAR!\n";
					getch();
					} 
				}
				
				//tampilan untuk gagal 3x dalam login, dan program stop
				if (i == 3) {
					
					printline(60);
					cout << "Anda telah 3x memasukan Username & Password yang salah.\n";
					cout << "Mohon maaf akun anda kami blokir untuk sementara. \n";
					cout << "Silahkan hubungi kami melalui e-mail support@email.com,..\n";
					printline(60);
					konfirmasi = 't';
					getch();
					break;
				}
				
			} while (akun == 'n' || akun == 'N' && i < 3)
			break;
								
		} else if (yesNo == 'n' || yesNo == 'N'){
			regAkun();
			goto back1;
		
		//fungsi return untuk pilihan yang tidak ada
		} else {
			konfirmasi = 't';
			cout << "\nMaaf pilihan tidak tersedia\n";
			cout << "tekan (ENTER) untuk mengulangi pilihan\n\n";
			getch();
			//program stop saat 3x memasukan pilihan yang tidak sesuai
			if (j == 3) {
				printline(30);
				cout << "MAAF REQUEST TERLALU SERING\n";
				printline(30);
				konfirmasi = 'e';
				getch();
				break;
			} j++;
		}
	} while (yesNo != 'y' || yesNo != 'Y' && konfirmasi != 't');
}

int main() {
	
	logAkun();

}