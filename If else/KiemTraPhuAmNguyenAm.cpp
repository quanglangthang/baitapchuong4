#include <iostream>
using namespace std;

int main() {
	char kt;
	cout << "Nhap vao ki tu can kiem tra: ";
	cin >> kt;
	if ((kt >= 'a') && (kt <= 'z')) {
		if ((kt == 'a') || (kt == 'e') || (kt == 'o') || (kt == 'i') || (kt == 'u')) {
			cout << kt << " la nguyen am";
		}
		else {
			cout << kt << " la phu am";
		}
	}
}
