#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	float* ptr, * new_ptr;
	ptr = (float*)malloc(5 * sizeof(float));

	if (ptr == NULL) {
		cout << "Alokasi memori gagal";
		exit(1);
	}

	/* Menginisialisasi blok memori*/
	for (int i = 0; i < 5; i++) {
		ptr[i] = i * 1.5;
	}

	/* realokasi memori */
	new_ptr = (float*)realloc(ptr, 10 * sizeof(float));

	if (new_ptr == NULL) {
		cout << "Alokasi Ulang Memori Gagal";
		exit(1);
	}

	/* Menginisialisasi blok memori yang dialokasikan kembali */
	for (int i = 5; i < 10; i++) {
		new_ptr[i] = i * 2.5;
	}

	cout << "Mencetak Nilai" << endl;

	for (int i = 0; i < 10; i++) {
		cout << new_ptr[i] << endl;
	}

	free(new_ptr);

	_getch();
	return 0;
}