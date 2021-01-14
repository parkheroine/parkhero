#include <iostream>
#include<string>
using namespace std;

string dna[1000];


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	string result;
	int hammingDistance = 0;

	cin >> n >> m;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, dna[i]);
	}

	for (int j = 0; j < m; j++) {
		int ACGT[4] = { 0, };

		for (int i = 0; i < n; i++) {
			switch (dna[i][j])
			{
			case 'A':
				ACGT[0]++;
				break;
			case 'C':
				ACGT[1]++;
				break;
			case 'G':
				ACGT[2]++;
				break;
			case 'T':
				ACGT[3]++;
				break;
			default:
				break;
			}
		}

		int maxIndex = 0;
		int max = ACGT[0];
		hammingDistance += ACGT[0];

		for (int k = 1; k < 4; k++) {
			hammingDistance += ACGT[k];
			if (max < ACGT[k]) {
				maxIndex = k;
				max = ACGT[k];
			}
		}
		hammingDistance -= max;

		switch (maxIndex)
		{
		case 0:
			cout << "A";
			break;
		case 1:
			cout << "C";
			break;
		case 2:
			cout << "G";
			break;
		case 3:
			cout << "T";
			break;

		default:
			break;
		}

	}

	cout << endl << hammingDistance << endl;


	return 0;
}
