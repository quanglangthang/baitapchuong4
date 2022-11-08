#include <iostream>
using namespace std;

int main() {
	int tien;
	int namTram = 0, haiTram = 0, motTram = 0, namChuc = 0, haiChuc = 0, muoingan = 0, namngan = 0, haingan = 0, motngan = 0;
	cout << "Nhap vao so tien: ";
	cin >> tien;
	
	while (tien >= 500) {
		tien -= 500;
		namTram++;
	}
	while ((tien >= 200) && (tien < 500)) {
		tien -= 200;
		haiTram++;
	}
	while ((tien >= 100) && (tien < 200)) {
		tien -= 100;
		motTram++;
	}
	while ((tien >= 50) && (tien < 100)) {
		tien -= 50;
		namChuc++;
	}
	while ((tien >= 20) && (tien < 50)) {
		tien -= 20;
		haiChuc++;
	}
	while ((tien >= 10) && (tien < 20)) {
		tien -= 10;
		muoingan++;
	}
	while ((tien >=5) && (tien < 5)) {
		tien -= 5;
		namngan++;
	}
	while ((tien >= 2) && (tien < 2)) {
		tien -= 2;
		haingan++;
	}
	while ((tien >= 1) && (tien < 2)) {
		tien -= 1;
		motngan++;
	}
	
	cout << namTram << " to 500k" << endl;
	cout << haiTram << " to 200k" << endl;
	cout << motTram << " to 100k" << endl;
	cout << namChuc << " to 50k" << endl;
	cout << haiChuc << " to 20k" << endl;
	cout << muoingan << " to 10k" << endl;
	cout << namngan << " to 5k" << endl;
	cout << haingan << " to 2k" << endl;
	cout << motngan << " to 1k" << endl;
	
	
}
