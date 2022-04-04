#include<iostream>
using namespace std;
void upstair(int n) {
	int spacesize = n;
	int spacehash = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < spacesize - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < spacehash; k++) {
			cout << "#";
		}cout << endl;
		spacesize--;
		spacehash++;
	}
}
int main()
{
	int n;
	cin >> n;
	upstair(n);
}