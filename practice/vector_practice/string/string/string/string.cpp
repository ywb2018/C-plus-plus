
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

const int maxn = 100;
char a[maxn + 5], b[maxn + 10];
int x[maxn + 10], y[maxn + 10], z[maxn * 2 + 10];
int main() {

	string a, b;
	cin >> a;
	cin >> b;

	int len1 = a.size(), len2 = b.size();
	for (int j = 0, i = len1 - 1; i >= 0; i--) {
		x[j++] = a[i] - '0';
	}
	for (int j = 0, i = len2 - 1; i >= 0; i--) {
		y[j++] = b[i] - '0';
	}
	for (int i = 0; i < len1; i++) {
		for (int j = 0; j < len2; j++) {
			z[i + j] = z[i + j] + x[i] * y[j];
		}
	}
	for (int i = 0; i < maxn * 2; i++) {
		if (z[i] > 10) {
			z[i + 1] = z[i + 1] + z[i] / 10;
			z[i] = z[i] % 10;
		}
	}
	int i;
	for (i = maxn * 2; i > 0; i--) {
		if (z[i] == 0) {
			continue;
		}
		else break;
	}
	for (; i >= 0; i--) {
		printf("%d", z[i]);
	}
	cout << endl;
	return 0;
}