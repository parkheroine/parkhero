#include <iostream>
#include<string>
using namespace std;

string files[50];


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, files[i]);
	}


	for (int j = 0; j < files[0].size(); j++) {
		char current = files[0][j];
		for (int i = 0; i < n; i++) {
			if (current != files[i][j]) {
				cout << '?';
				current = files[i][j];
				break;
			}
		}
		if (current == files[0][j]) {
			cout << current;
		}
	}

	return 0;
}