#include<iostream>

using namespace std;
int countingValley(string &str, int n) {
	int route = 0, valley = 0;
	for (char &step: str) {
		if (step== 'D') {route--; }
		else if (step== 'U') { route++; }
		if (step == 'D' && route == -1) valley++;
	}
	return valley;
}
int main()
{
	
	long n;
	cin >> n;
	string str;
	cin >> str;
	cout<<countingValley(str, n);
}