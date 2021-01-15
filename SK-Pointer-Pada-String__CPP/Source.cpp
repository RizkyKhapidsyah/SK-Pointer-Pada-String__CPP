/* ------------------- */
/* Pointer pada String */
/* ------------------- */

#include <iostream>
#include <conio.h>

/* Created by Rizky Khapidsyah */

using namespace std; 

int main() {
	char band_metal[] = "HYPERMETALIST";
	const char* band_punk = "RANCU";

	cout << "Nama Band Metal = " << band_metal << endl;
	cout << "Nama Band Punk = " << band_punk;

	band_punk += 3; //menambah nilai penunjuk / pointer

	cout << endl << "Nama Band Metal = " << band_metal << endl;
	cout << "Nama Band Punk = " << band_punk;

	_getch();
	return 0;
}