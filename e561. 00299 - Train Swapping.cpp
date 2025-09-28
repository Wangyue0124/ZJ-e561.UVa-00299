#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	while (n--) {
		int l, s = 0;
		cin >> l;
		vector<int>train(l);
		for (int i = 0; i < l; i++) cin >> train[i];
		for (int i = l-1; i > 0; i--) {
			for (int a = 0, b = 1; b <= i; a++, b++) {
				if (train[a] > train[b]) {
					swap(train[a], train[b]);
					s++;
				}
			}
		}
		cout << "Optimal train swapping takes " << s << " swaps.\n";
	}
	return 0;
}

