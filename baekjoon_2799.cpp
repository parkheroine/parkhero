#include <iostream>
#include<string>
using namespace std;

string window[501];
int blind[5] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int m, n;
	cin >> m >> n;
	cin.ignore();

	for (int i = 0; i < 5 * m + 1; i++) {
		getline(cin, window[i]);
	}
	for (int k = 0; k < m; k++) {
		for (int j = 1; j < 5 * n + 1; j += 5) {
			int state = 0;
			for (int i = 5 * k + 1; i < 5 * (k + 1); i++) {
				if (window[i][j] == '.') break;
				state++;
			}
			blind[state]++;
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << blind[i] << ' ';
	}

	return 0;
}