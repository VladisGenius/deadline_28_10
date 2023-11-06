#include <iostream>
using namespace std;

void f(string n, int k) {
	int i = 0;
	string ans;
	while(i < k ) {
		ans += n[i];
		i++;
	}
	cout << ans;
}

int main() {

	string n;
	int k;

	cout << "Enter your number: ";
	cin >> n;
	cout << "How many digits should I show? : ";
	cin >> k;

	f(n, k);
}