//1. Jelaskan mengapa suatu algoritma dibutuhkan untuk menyelesaikan suatu masalah
//	karena algoritma dapat membantu dalam menyimpan dan mencari suatu data dengan efisien. 

//2. Dalam algoritma, diklasifikasikan menjadi 2 data struktur. sebutkan 2 data struktur tersebut
//	Quickstatic dan Loglinear

//3. Untuk Menggukur sebuah efisiensi waktu suatu algoritma dibutuhkan beberapa faktor. sebutkan faktor-faktor yang mempengaruhi efisiensi waktu efisiensi program
// code yang tidak terlalu sulit dan seberapa lama hasil eksekusi dari program.

//4. Dari 6 algoritma yang sudah dipelajari. Algoritma manakah yang paling mudah dipahami dan diimplementasikan untuk menggunakan data yang ukurannya besar. Jelaskan kenapa anda memilih itu
// bubblesort karena saya baru memahami bubblesort

//5. Sebutkan dari Algoritma yang telah dipelajari mana yang termasuk kedalam Quickstatic dan yang termasuk kedalam Loglinear
//

//6. Buatlah sebuah program yang mengimplementasikan Merge sort menggunakan bahasa c++, Berikut merupakan algoritma merge sort
#include <iostream>
using namespace std;

int reza[31];
int comp_count = 0;
int mov_count = 0;
int n;

void  input() {
	while (true)
	{
		cout << "Masukan panjang element array : ";
		cin >> n;

		if (n <= 31)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> reza[i];
	}
}

void q_sort(int low, int high)
{
	int pivot, i, RA;
	if (low > high)
		return;											

	pivot = reza[low];											    

	i = low + 1;													
	RA = high;														


}