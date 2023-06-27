#include <stdio.h>
#include <conio.h>

int data[100];
int max, min, jumlah;

void input() {
	printf("Masukkan banyak data : "); scanf("%d", &jumlah);
	for (int i = 0; i<jumlah; i++) {
		printf("Data [%d] : ", i+1); scanf("%d", &data[i]);
	}
}

void printline(int count) {
	int i;
	for (i = 0; i <count - 1; i++) {
		printf("=");
	}
	printf("=\n");
}

void maxmin(int i, int j) {
    int max1, min1, mid;
    if (i == j) {
        max = min = data[i];
    } else if (i == j - 1) {
        if (data[i] > data[j]) {
            max = data[i];
            min = data[j];
        } else {
            max = data[j];
            min = data[i];
        }
    } else {
        mid = (i + j) / 2;
        maxmin(i, mid);
        max1 = max;
        min1 = min;
        maxmin(mid + 1, j);
        if (max < max1)
            max = max1;
        if (min > min1)
            min = min1;
    }
}

void hasil() {
	max = data[0];
    min = data[0];
    maxmin(0, jumlah - 1);
    
    printf("\nAngka Maximum: %d\n", max);
    printf("Angka Minimum: %d\n\n", min);
}

int main() {
    
    printf("Menentukan Maximum dan Minimum\n");
    printline(40);
	input();
	printline(40);
	hasil();
    printline(40);
    getch();
    return 0;
}