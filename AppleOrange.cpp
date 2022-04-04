#include<iostream>
using namespace std;
int main()
{
    int s, t, a, b, m, n,appleCount=0,orangeCount=0;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    int* apple = new int[m];
    int* orange = new int[n];
    for (int i = 0; i < m; i++)
        cin >> apple[i];
    for (int i = 0; i < n; i++)
        cin >> orange[i];

    int* appPos = new int[m];
    for (int i = 0; i < m; i++) {
        appPos[i] = apple[i] + a;
    }

    int* orgnPos = new int[n];
    for (int i = 0; i < n; i++) {
        orgnPos[i] = orange[i] + b;
    }

    for (int i = 0; i < m; i++) {
       // if (appPos[i] > 0) 
            if (appPos[i] >= s && appPos[i] <= t)
                appleCount++;
    }
    for (int i = 0; i < n; i++) {
      //  if (orgnPos[i] < 0)
            if (orgnPos[i] >= s && orgnPos[i] <= t)
                orangeCount++;
    }
    cout << appleCount << endl;
    cout << orangeCount;
}