#include <iostream>
using namespace std;

int nInt[999][999];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, q;
	cin >> n >> q;
	int x = n / 2, y = n / 2;
	int num = 1;


	for (int i = 0; i <= (n / 2); i++) {
		for (int j = 0; j < i * 2 - 1; j++) {
			nInt[y][x] = num;
			x++; num++;
		}
		for (int j = 0; j < 2 * i; j++) {
			nInt[y][x] = num;
			y++; num++;
		}
		for (int j = 0; j < i * 2; j++) {
			nInt[y][x] = num;
			x--; num++;
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			nInt[y][x] = num;
			y--; num++;
			if (num > n * n)break;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << nInt[i][j] << ' ';
			if (nInt[i][j] == q) {
				x = j + 1;
				y = i + 1;
			}
		}
		cout << endl;
	}
	cout << y << ' ' << x;
	return 0;
}