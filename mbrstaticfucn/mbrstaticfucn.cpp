#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int ID;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim;/*Definisi function*/ }
	static int getNim() { return nim; /*definisi function*/ }

	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	ID = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << ID << endl;
	cout << "nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("sri dadi");
	mahasiswa mhs2("budi jatmiko");
	mahasiswa::setNim(9);
	mahasiswa mhs3("andi janu");
	mahasiswa mhs4("joko wahono");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari jalur luar object = " << mahasiswa::getNim() << endl;

	return 0;
}