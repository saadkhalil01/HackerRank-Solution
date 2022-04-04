#include<iostream>
using namespace std;
void migratingBird(int* ary, int size) {
	int freqTable[6] = { 0 };
	for (int i = 0; i < size; i++) {
		freqTable[ary[i]]++;
	}
	int maxFreq=freqTable[0];
	int maxId = ary[0];
	int i;
	for ( i = 1; i < 6; i++) {
		if (maxFreq < freqTable[i]) {
			maxFreq = freqTable[i];
			break;
		}
	}
	cout << i;
}
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	migratingBird(arr, n);
	delete[]arr;
}