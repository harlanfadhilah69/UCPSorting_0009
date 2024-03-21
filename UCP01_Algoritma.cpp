//1.membandingkan setiap elemen array satu per satu kedalam bagian yang sudah diurutkan, sehingga secara bertahap array dapat terurut
//2.Orde kuadrate -> O(n2), cocok untuk data kecil, mencari paling kecil pertama menuju paling kecil terakhir, melakukan scanning secara berulang, pilih salah satu item didalam scan (yang paling kecil)
//3.
#include <iostream>
using namespace std;
int arr[9];
int n;

void input() {

	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 02)
			break;
		else {
			cout << "\rArray dapat mempunyai maksimal 09 elemen.\n";              
		}
	}
	cout << endl;                                    
	cout << "===============" << endl;               
	cout << "Masukkan Elemen Array" << endl;        
	cout << "===============" << endl;
	cout << "Harlan Fadhilah [i]";

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];

	}
}

void insertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {         

		temp = arr[i];                    

		j = i - 1;                         

		while (j >= 0 && arr[j] > temp)    
		{
			arr[j + 1] = arr[j];           
			j--;                           
		}

		arr[j + 1] = temp;                 
	}
}

void display() {

	cout << endl;
	cout << "==================================" << endl;
	cout << "Element Array Yang Telah Tersusun" << endl;
	cout << "==================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n < 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	insertionSort();
	display();
	system("pause");

	return 0;

}
