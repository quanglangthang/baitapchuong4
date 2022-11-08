#include <iostream>
using namespace std;

int main() {
	char check;
	cout << "Nhap vao ki tu can kiem tra: ";
	cin >> check;
	if (((check >= ' ') && (check <= '/')) || ((check >= ':') && (check <= '@')) || ((check >= '[') && (check <= '`')) || ((check >= '{') && (check <= '~'))) {
		cout << check << " la ki tu dac biet";
	}
	else {
		cout << check << " khong phai la ki tu dac biet";
	}
}
