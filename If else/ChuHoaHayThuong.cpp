#include <iostream>
using namespace std;

int main() {
	char check;
	cout << "Nhap vao ki tu can kiem tra: ";
	cin >> check;
	if ((check >= 'a') && (check <= 'z')) {
		cout << check << " la chu thuong";
	}
	else if ((check >= 'A') && (check <= 'Z')){
		cout << check << " la chu hoa";
	}
}
