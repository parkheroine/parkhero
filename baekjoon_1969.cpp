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
	for (int i = 0; i < n; i++) {
		cout << files[i] < endl;
	}

	

	return 0;
}