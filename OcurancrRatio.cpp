#include<iostream>
#include<iomanip>
using namespace std;
void plusMinus(int* arr, int size) {
	double ratio1, ratio2, ratio3;
		double sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			sum1 += 1;
		}
		if (arr[i] < 0) {
			sum2 += 1;
		}
		if (arr[i] == 0) {
			sum3 += 1;
		}
	}
	ratio1 = abs(sum1 / size);
	ratio2 = abs(sum2 / size);
	ratio3 = abs(sum3 / size);
	cout <<showpoint<< ratio1 << endl;
	cout << ratio2 << endl;
	cout << ratio3 << endl;



}
int main()
{
	int n;
	cin >> n;
	int array[100];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	plusMinus(array, n);
}