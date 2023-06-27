#include <iostream>
#include <ctime>
#include <conio.h>
#include <iomanip>

using namespace std;

char pilihanKategori, pilihanBeli, yesNo='y', yesNo1, konfirmasi;
int kembalian, saldo, i;
int hasil=0;
int x=0;
int z=0;
int y =0;
int v=0;
int totalSeluruhPesanan[100];
int totalPaket[100];
int banyak[1024];
time_t a=time(0);
string b=ctime(&a);

struct pelanggan {
	string nama, password;
};
struct pelanggan p;

struct barang {
	string produk[100];
};
struct barang brg;

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

//Tampilan main menu
void daftarKategori() {
	
	system("cls");
	cout << "Selamat datang di Toko 'SPORTBOLA BABEH JOHN" << endl;
	cout << "List Menu : " << endl;
	cout << "[A] Sepatu" << endl;
	cout << "[B] Alat Olahraga" << endl;
	cout << "[C] Pakaian Olahraga" << endl;
	cout << "[D] Lainnya" << endl;
	cout << "[E] Cek Keranjang Belanja" << endl;
	cout << "[F] Keluar" << endl; 
}

//tampilan menu opsi A
void KategoriA() {
	
	system("cls");
	cout << "List Kategori Sepatu Bola : " << endl;
	cout << "[1] Niki Sepatu Bola Accelerator Alpha\t: Rp.230.000,00\n";
	cout << "[2] Mazini Sepatu Bola Reacto Blitz Pro\t: Rp.218.500,00\n";
	cout << "[3] Studs Sepatu Bola Lightspeed Reborn\t: Rp.220.000,00\n";
	cout << "[4] Adinda Sepatu Bola Elevation Zero\t: Rp.299.900,00\n";
	cout << "[5] Mazini Sepatu Bola Hyperspeed\t: Rp.286.500,00\n";
	cout << "[6] Spiids Sepatu Bola Metalasa Hanzo\t: Rp.250.000,00\n";
	cout << "[7] Niki Sepatu Bola Galactica\t\t: RP.350.000,00\n";
	cout << "[8] Adinda Sepatu Bola Speedblaze\t: Rp.249.900,00\n";
	cout << "[0] Kembali\n";
	printline(60);
}

//tampilan menu opsi B
void kategoriB(){
	
	system("cls");
	cout << "List Kategori Alat Olahrga : " << endl;
	cout << "[1] Pelindung Tulang (Shin Guard)\t: Rp.99.000,00\n";
	cout << "[2] Bola Adinda\t\t\t\t: Rp.899.500,00\n";
	cout << "[3] Sarung tangan Lengket\t\t: Rp.129.900,00\n";
	cout << "[4] Cone lari 10pcs\t\t\t: Rp.25.000,00\n";
	cout << "[5] Skiping rope\t\t\t: Rp.95.000,00\n";
	cout << "[6] Matras yoga\t\t\t\t: Rp.50.000,00\n";
	cout << "[7] Stopwatch\t\t\t\t: Rp.225.000,00\n";
	cout << "[0] Kembali\n";
	printline(60);	
}

//tampilan menu opsi C
void kategoriC(){
	
	system("cls");
	cout << "List Kategori Pakaian Olahraga : " << endl;
	cout << "[1] Jersey Indonesia home\t\t: Rp.399.000,00\n";
	cout << "[2] Jersey Real Madrid 2021/2022\t: Rp.200.000,00\n";
	cout << "[3] Jersey Menchester City\t\t: Rp.200.000,00\n";
	cout << "[4] Celana training pendek\t\t: Rp.129.000,00\n";
	cout << "[5] Jaket parasut\t\t\t: Rp.149.900,00\n";
	cout << "[6] Celana training panjang\t\t: Rp.189.500,00\n";
	cout << "[0] Kembali\n";
	printline(60);
}

//tampilan menu opsi D
void kategoriD(){
	
	system("cls");
	cout << "List Kategori Lainnya : " << endl;
	cout << "[1] Jaring gawang 5m\t: Rp.60.000,00\n";
	cout << "[2] Headband\t\t: Rp.45.000,00\n";
	cout << "[3] Manset olahraga\t: Rp.129.000,00\n";
	cout << "[4] Wristband\t\t: Rp.89.900,00\n";
	cout << "[5] Fitnes tracker\t: Rp.159.000,00\n";
	cout << "[6] Kneepad\t\t: Rp.99.000,00\n";
	cout << "[0] Kembali\n";
	printline(60);
}

//Fungsi pilihan menu
void pilKategori() {
	
	int j=1;
	back:
	do {
		daftarKategori();
		cout<<"Silahkan pilih kategori Menu yang tersedia : "; cin>>pilihanKategori;
		//Pilihan menu opsi A
		if (pilihanKategori == 'A' || pilihanKategori == 'a'){
			KategoriA();
			case1:
			cout << "Masukan Pilihan : "; cin >> pilihanBeli;
				
			if(pilihanBeli == '1'){
				brg.produk[v]="Niki Sepatu Bola Accelerator Alpha";
		    	totalPaket[z]=230000;
		    	konfirmasi = 't';
		  	} else if(pilihanBeli == '2'){
		  		brg.produk[v]="Mazini Sepatu Bola Reacto Blitz Pro";
		   		totalPaket[z]=218500;
		   		konfirmasi = 't';
		  	} else if(pilihanBeli == '3'){
		  		brg.produk[v]="Studs Sepatu Bola Lightspeed Reborn";
	    		totalPaket[z]=220000;
	    		konfirmasi = 't';
	   		} else if(pilihanBeli == '4'){
	   			brg.produk[v]="Adinda Sepatu Bola Elevation Zero";
	   			totalPaket[z]=299900;
	   			konfirmasi = 't';
	   		} else if(pilihanBeli == '5'){
	   			brg.produk[v]="Mazini Sepatu Bola Hyperspeed";
	   			totalPaket[z]=286500;
				konfirmasi = 't';	
			} else if(pilihanBeli == '6'){
				brg.produk[v]="Spiids Sepatu Bola Metalasa Hanzo";
				totalPaket[z]=250000;
				konfirmasi = 't';
			} else if(pilihanBeli == '7'){
				brg.produk[v]="Niki Sepatu Bola Galatica";
				totalPaket[z]=350000;
				konfirmasi = 't';
			} else if(pilihanBeli == '8'){
				brg.produk[v]="Adinda Sepatu Bola Speedblaze";
				totalPaket[z]=249900;
				konfirmasi = 't';
			} else if(pilihanBeli == '0'){
	    		goto back;
			} else {
				cout<<"Pilihan Tidak Tersedia\n"<<endl;
				konfirmasi = 'n';
				pilihanKategori = 'a';
				yesNo = 'n';
	    		goto case1;
	    		break;
	    	}
			
			if (konfirmasi == 't'){
				cout<<"Berapa Banyak Pesanan? "; cin>>banyak[y];
			}
			totalSeluruhPesanan[x]=totalPaket[z]*banyak[y];
		
		//pilihan menu opsi B
		} else if(pilihanKategori == 'B' || pilihanKategori == 'b') {
			kategoriB();
			case2:
			cout << "Masukan Pilihan : "; cin >> pilihanBeli;
			
			if(pilihanBeli == '1'){
				brg.produk[v]="Pelindung Tulang (Shin Guard)";
	    		totalPaket[z]=99000;
				konfirmasi = 't';
	  		} else if(pilihanBeli == '2'){
	  			brg.produk[v]="Bola Adinda";
	   			totalPaket[z]=899500;
				konfirmasi = 't';
	  		} else if(pilihanBeli == '3'){
	  			brg.produk[v]="Sarung tangan Lengket";
    			totalPaket[z]=129900;
				konfirmasi = 't';
   			} else if(pilihanBeli == '4'){
   				brg.produk[v]="Cone lari 10pcs";
   				totalPaket[z]=25000;
   				konfirmasi = 't';
   			} else if(pilihanBeli == '5'){
   				brg.produk[v]="Skiping rope";
   				totalPaket[z]=95000;
   				konfirmasi = 't';
			} else if(pilihanBeli == '6'){
				brg.produk[v]="Matras yoga";
				totalPaket[z]=50000;
				konfirmasi = 't';
			} else if(pilihanBeli == '7'){
				brg.produk[v]="Stopwatch";
				totalPaket[z]=225000;
				konfirmasi = 't';
			} else if(pilihanBeli == '0'){
    			goto back;
			} else {
				cout<<"Pilihan Tidak Tersedia\n"<<endl;
				konfirmasi = 'n';
				pilihanKategori = 'a';
				yesNo = 'n';
	    		goto case2;
	    		break;
    		}
			
			if (konfirmasi == 't'){
				cout<<"Berapa Banyak Pesanan? "; cin>>banyak[y];
			}
			totalSeluruhPesanan[x]=totalPaket[z]*banyak[y];
		
		//pilihan menu opsi C
		} else if (pilihanKategori == 'C' || pilihanKategori == 'c') {
			kategoriC();
			case3:
			cout << "Masukan Pilihan : "; cin >> pilihanBeli;
			
			if(pilihanBeli == '1'){
				brg.produk[v]="Jersey Indonesia home";
	    		totalPaket[z]=399000;
				konfirmasi = 't';
	  		} else if(pilihanBeli == '2'){
	  			brg.produk[v]="Jersey Real Madrid 2021/2022";
	   			totalPaket[z]=200000;
				konfirmasi = 't';
	  		} else if(pilihanBeli == '3'){
	  			brg.produk[v]="Jersey Menchester City";
    			totalPaket[z]=20000;
				konfirmasi = 't';
   			} else if(pilihanBeli == '4'){
   				brg.produk[v]="Celana training pendek";
   				totalPaket[z]=129000;
   				konfirmasi = 't';
   			} else if(pilihanBeli == '5'){
   				brg.produk[v]="Jaket parasut";
   				totalPaket[z]=149900;
   				konfirmasi = 't';
			} else if(pilihanBeli == '6'){
				brg.produk[v]="Celana training panjang";
				totalPaket[z]=189500;
				konfirmasi = 't';
			} else if(pilihanBeli == '0'){
    			goto back;
			} else {
				cout<<"Pilihan Tidak Tersedia\n"<<endl;
				konfirmasi = 'n';
				pilihanKategori = 'a';
				yesNo = 'n';
	    		goto case3;
	    		break;
    		}
    		
    		if (konfirmasi == 't'){
				cout<<"Berapa Banyak Pesanan? "; cin>>banyak[y];
			}
			totalSeluruhPesanan[x]=totalPaket[z]*banyak[y];
		
		//pilihan menu opsi D
		} else if (pilihanKategori == 'D' || pilihanKategori == 'd') {
			kategoriD();
			case4:
			cout << "Masukan Pilihan : "; cin >> pilihanBeli;

			if(pilihanBeli == '1'){
				brg.produk[v]="Jaring gawang 5m";
	    		totalPaket[z]=60000;
				konfirmasi = 't';
	  		} else if(pilihanBeli == '2'){
	  			brg.produk[v]="Headband";
	   			totalPaket[z]=45000;
				konfirmasi = 't';
	  		} else if(pilihanBeli == '3'){
	  			brg.produk[v]="Manset olahraga";
    			totalPaket[z]=129000;
				konfirmasi = 't';
   			} else if(pilihanBeli == '4'){
   				brg.produk[v]="Wristband";
   				totalPaket[z]=89900;
   				konfirmasi = 't';
   			} else if(pilihanBeli == '5'){
   				brg.produk[v]="Fitnes tracker";
   				totalPaket[z]=159000;
   				konfirmasi = 't';
			} else if(pilihanBeli == '6'){
				brg.produk[v]="Kneepad";
				totalPaket[z]=99000;
				konfirmasi = 't';
			} else if(pilihanBeli == '0'){
    			goto back;
			} else {
				cout<<"Pilihan Tidak Tersedia\n"<<endl;
				konfirmasi = 'n';
				pilihanKategori = 'a';
				yesNo = 'n';
	    		goto case4;
	    		break;
    		}
	
			if (konfirmasi == 't'){
				cout<<"Berapa Banyak Pesanan? "; cin>>banyak[y];
			}
			totalSeluruhPesanan[x]=totalPaket[z]*banyak[y];
		
		//pilihan menu opsi E
		//Menampilkan keranjang belanja
		} else if (pilihanKategori == 'E' || pilihanKategori == 'e') {
			
			if (konfirmasi == 't' && y != 0){
				system("cls");
				printline(71);
				cout << setw(26) << left << " " << setw(19) << left << "=KERANJANG BELANJA=" << endl;
				printline(71);
				for (int i = 0; i < x&&z; i++) {
					if (banyak[i] != 0) {
						cout << setw(1)		<< " ";
						cout << setw(39)	<< left << brg.produk[i]											<< setw(7) << " ";
						cout << setw(4)		<< left << banyak[i]												<< setw(7) << " ";
						cout << setw(3)		<< left << "Rp." << setw(9) << right << totalPaket[i] 				<< endl;
					}
				}
				
				konfirmasi = 't';
				goto pesanBack;

			} else {
				system("cls");
				printline1(45);
				cout << "Keranjang belanja masih kosong D;\n";
				cout << "Tekan (ENTER) untuk kembali ke halaman awal\n";
				printline1(45);
				konfirmasi = 'n';
				yesNo = 'n';
				getch();
			}
		
		//tampilan menu opsi F
		// Fungsi exit
		} else if (pilihanKategori == 'F' || pilihanKategori == 'f') {
			
			konfirmasi = 'e';
		
		//fungsi default untuk return
		} else {
			
			konfirmasi = 'n';
			cout << "\nMaaf pilihan tidak tersedia\n";
			cout << "tekan (ENTER) untuk mengulangi pilihan\n\n";
			yesNo = 'n';
			getch();
			if (j == 3) {
				printline(30);
				cout << "MAAF REQUEST TERLALU SERING\n";
				printline(30);
				konfirmasi = 'e';
				getch();
				} j++;
		}
		
		//Question for next step => pembayaran
		if (konfirmasi == 't') {
			pesanBack:
			cout<<"\nLanjut ke Pembayaran? (Y/N)? "; cin>>yesNo;
			if (yesNo == 'N' || yesNo == 'n') {
				daftarKategori();
			} else if (yesNo == 'Y' || yesNo == 'y') {
					
			} else {
				pilihanKategori = 'f';
				cout << "\nMaaf pilihan tidak tersedia\n";
				goto pesanBack;
			} z++; x++; y++; v++;
		}
	} while (yesNo == 'N' || yesNo == 'n' && konfirmasi != 'e');
}

//Menu pembayaran
void pembayaran1() {

	if (pilihanKategori != 'f' && yesNo == 'Y' || yesNo == 'y' && konfirmasi == 't') {
		cout<<"PEMBAYARAN : \n"<<endl;
	
		for(int i = 0; i < x; i++){
		hasil=hasil+totalSeluruhPesanan[i];
		}
		//Menampilkan total pesanan, dan input saldo
		saldoBack:
		printline(30);
		cout<<"Total Pesanan = Rp. "<<hasil<<endl;
		cout << "Masukan Saldo Anda = Rp. "; cin >> saldo;
		kembalian = saldo-hasil;
		
		//Fungsi return jika input saldo kurang
		if (saldo<hasil) {
		cout << "\nMaaf saldo yang anda masukan kurang dari total pembelian\n";
		cout << "Silahkan masukan saldo yang sesuai dengan total pembelian\n\n";
		goto saldoBack;
		}
	}
}

//tampilan struk
void struk() {
	
	if (pilihanKategori != 'f' && yesNo == 'Y' || yesNo == 'y' && konfirmasi == 't') {
		if(saldo>=hasil) system("cls"); {
			
			//header
			cout << " Toko 'SPORTBOLA BABEH JOHN'\n";
			cout << " JL. Prof. Dr. Hamka No. 145\n";
			cout << " Telp 021-0000000 Kota Bandung, jawa Barat, Indonesia\n";
			printline(88);
			cout << " Hari/Bulan/Tanggal/Jam/tahun = " << b << endl;
			printline(88);
			cout << setw(45) << left << " Nama Pelanggan" << setw(42) << left << p.nama << endl;
			printline1(88);
			
			//judul
			cout << setw(40)	<< left << " Nama Barang"	<< setw(5) << " ";
			cout << setw(8) 	<< left << "Jumlah"			<< setw(5) << " ";
			cout << setw(12)	<< left << "Harga"			<< setw(5) << " ";
			cout << setw(12)	<< left << "Total Harga" 	<< endl;
			printline1(88);
			
			//row
			for (int i = 0; i < x&&z; i++) {
				if (banyak[i] != 0) {
					cout << setw(1)		<< " ";
					cout << setw(39)	<< left << brg.produk[i]											<< setw(7) << " ";
					cout << setw(4)		<< left << banyak[i]												<< setw(7) << " ";
					cout << setw(3)		<< left << "Rp." << setw(9) << right << totalPaket[i] 				<< setw(5) << " ";	 																						
					cout << setw(3)		<< left << "Rp." << setw(9) << right << totalSeluruhPesanan[i]		<< endl;
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
		 	cout << setw(36) << " " << setw(15) << "Harap datang kembali" 	<< endl;
		 	getch();
		}
	}
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
		printline(50);
		cout << "SELAMAT DATANG DI TOKO 'SPORTBOLA BABEH JOHN'\n";
		printline(50);
		cout << "\nApakah anda sudah memiliki Akun (Y/N)? "; cin >> yesNo1;
		if (yesNo1 == 'y' || yesNo1 == 'Y'){

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
				if(email ==  "asdf" && sandi == "asdf" || email == p.nama && sandi == p.password ) {
			
					//tampilan jika berhasil login
					konfirmasi = 'm';
					cout << "\n\n";
					printline(50);
					cout << "Selamat Datang, Selamat berbelanja ^_^\n";
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
					konfirmasi = 'e';
					getch();
					break;
				}
				
			} while (akun == 'n' || akun == 'N' && i < 3)
			break;
								
		} else if (yesNo1 == 'n' || yesNo1 == 'N'){
			regAkun();
			goto back1;
		
		//fungsi return untuk pilihan yang tidak ada
		} else {
			konfirmasi = 'n';
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
	} while (yesNo1 != 'y' || yesNo1 != 'Y' && konfirmasi == 'n' && konfirmasi != 'e');
}

//main body
int main() {
	
	logAkun();
	if (konfirmasi == 'm'){
		pilKategori();
		pembayaran1();	
		struk();
		
	}

}
