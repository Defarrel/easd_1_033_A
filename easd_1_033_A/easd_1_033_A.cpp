#include <iostream>
using namespace std;

//1. Suatu algoritma dibutuhkan untuk menyelesaikan masalah karena suatu masalah membuuthkan suatu solusi yang efektif dan efisien dalam pengerjaan 
//menyelesaikan suatu masalah tersebut.
//2. Statis dan Dinamis.
//3. Keifisienan suatu program bisa di pengearuhi oleh beberapa faktor seperti Memilih teknik yang digunakan dalam designing algoritma. contohnya Divide an conquer approach dan 
// greedy approach.
//4. Algoritma quicksort karena algoritma ini bisa mengurutkan data yang besar dan hanya memakan memory ram yang kecil dan juga cara pengurutan data nya yang paling simpel.
//5. -
//6. 

int Defarrel[53];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true) {
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 53" << endl;

	}
	cout << endl;
	cout << "\n====================" << endl;
	cout << "\nMasukan Elemen Array" << endl;
	cout << "\n====================" << endl;

	for (int i = 0; i < n; i++) {

		cout << "<" << (i + 1) << ">";
		cin >> Defarrel[i];
	}
}

void swap(int x, int y) {
	int temp;
	temp = Defarrel [x] ;
	Defarrel[x] = Defarrel[y];
	Defarrel[y] = temp;
}

int mid(int low, int high) {
	return (low + high) / 2;
}


void mergesort(int low, int high, int mid){

	int pivot, i, dd, k;
	if (low >= high)
		return;
	i = low;
	dd = mid + 1;
	k = low;

	for (int i = 0; i > dd or high; i++) {

		cmp_count++;

	}

	if (Defarrel[i] <= Defarrel[dd]) {
		swap(Defarrel[i], k);
		i++;
		cmp_count++;
	}
	else {
		swap(Defarrel[dd], k);
		dd++;
		cmp_count++;
	} 

	for (int dd=0; dd > high; dd++) {
		swap(Defarrel[dd], k);
		dd++;
		k++;
		cmp_count++;
	}
	for (int i=0; i > mid; i++) {
		swap(Defarrel[i], k);
		i++;
		k++;
		cmp_count++;
	}
}

void display() {
	cout << "\n========================" << endl;
	cout << "Array yang sudah tersusun" << endl;
	cout << "\n========================" << endl;

	for (int i = 0; i < n; i++) {
		cout << Defarrel[i] << " ";
	}

	cout << "\n\nPerbandingan nomor: " << cmp_count << endl;
	cout << "Perpindahan data: " << mov_count << endl;
}

int main() {
	input();
	display();
	return 0;
}