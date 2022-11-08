#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Nhap vao tuoi: ";
	cin >> age;
	
	if (age >= 18) {
		cout << "Da du tuoi bau cu.";
	}
	else {
		cout << "Khong du tuoi bau cu.";
	}
}
