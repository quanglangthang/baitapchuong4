#include <iostream>
using namespace std;

int main() {
	int check;
	cout << "Nhap vao so can kiem tra: ";
	cin >> check;
	if ( check == 0) {
		cout << "Khong phai la so nguyen am va duong ";
	}
	else if (check > 0){
		cout << "So nguyen duong";
	}
	else {
		cout << "So nguyen am";
	}
}
