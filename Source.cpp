#include<iostream>
using namespace std;
long long int Fac(int n);
long long int NCR(int n, int r);
void main() {
	int number;
	int R;
	cout << " Enter Number " << endl;
	cin >> number >> R;
	cout << " Fac is: " << Fac(number) << endl << NCR(number, R);
}

long long int Fac(int n) {
	long long int result = 1;
	if (n == 0) {
		result = 1;
	}
	else {
		for (int i = 2; i <= n; i++) {
			result = result * i;
		}
	}
	return result;
}

long long int NCR(int n, int r) {
	return Fac(n) / (Fac(n - r) * Fac(r));
}