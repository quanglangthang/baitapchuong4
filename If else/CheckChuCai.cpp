#include <iostream>
using namespace std;

int main() {
	char check;
	cout << "Nhap vao ki tu can kiem tra: ";
	cin >> check;
	if (((check >= 'a') && (check <= 'z')) || ((check >= 'A') && (check <= 'Z'))) {
		cout << check << " la chu cai";
	}
	else {
		cout << check << " khong phai la chu cai";
	}
}
