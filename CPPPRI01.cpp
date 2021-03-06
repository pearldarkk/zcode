#include <iostream>
using namespace std;
#define ll long long

int main() {
	int t;
	ll n;
	cin >> t;
	while (t--) {
		cin >> n;
		while (n % 2 == 0) {
			cout << 2 << ' ';
			n >>= 1;
		}
		for (int i = 3; i * 1ll * i <= n; i += 2) 
			while (n % i == 0) {
				cout << i << ' ';
				n /= i;
			}
		if (n != 1)
			cout << n;
		cout << endl;
	}
	return 0;
}