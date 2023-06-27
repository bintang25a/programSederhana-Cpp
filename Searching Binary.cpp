#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int array1[100], jumlah;
int cari;

void input () {

	cout << "Masukan banyak data: "; cin >> jumlah;
	for (int i = 0; i < jumlah; i++ ) {
		cout << "data [" << i+1 << "] "; cin >> array1[i];	
	}
	
}

void tampil () {
	
	cout << "Data dalam array = [ ";
	for (int i = 0; i < jumlah; i++ ) {
		cout << array1[i] << " ";
	}
	cout << "]" << endl;
}

void selection_sort()
{
    int temp, min, i, j;

    for(i = 0; i < jumlah; i++)
      {
        min = i;
        for(j = i + 1; j < jumlah; j++) {
            if(array1[j] < array1[min]) {
                min = j;
                }
            }
            temp = array1[i];
            array1[i]  = array1[min];
            array1[min] = temp;
      }
}

void printline(int count) {
	int i;
	for (i = 0; i < count - 1; i++) {
		cout << "=";
	}
	cout << " " << endl;
}

void binarysearch()
{
      //searching
      int awal, akhir, tengah, b_flag = 0;
      awal = 0;
      akhir = jumlah;
      while (b_flag == 0 && awal<=akhir)
      {
            tengah = (awal + akhir)/2;
            if(array1[tengah] == cari)
            {
                  b_flag = 1;
                  break;
            }
            else if(array1[tengah] < cari)
                  awal = tengah + 1;
            else
                  akhir = tengah -1;
      }

    if (b_flag == 1)
        cout << "Element found at data: " << tengah+1 << endl;
    else
        cout << "Element not found" << endl;
}


int main() {

	input();
	printline(40);
	tampil();
	printline(40);

	cout << "Masukan data yang ingin dicari: "; cin >> cari;
    cout << "Data diurutkan : ";

    selection_sort();
	
	cout << "[";
    for(int x = 0; x < jumlah ;x++)
    	cout << setw(3) << array1[x];
    cout << " ]" << endl;
       
    binarysearch();
    printline(40);
    getch();

    _getche();
    return EXIT_SUCCESS;

 }

