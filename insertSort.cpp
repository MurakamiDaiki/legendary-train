#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Input n:"; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = "; cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << '\n';
	for (int i = 1; i < n; i++) {
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v) {
			a[j + 1] = a[j];
			j--;
		}
		a[j+1] = v;
		for (int j = 0; j < n; j++) {
			cout << a[j] << ' ';
		}
		cout << '\n';
	}
}