// link : https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

int main()
{
    optimize();
    int n;
    cin >> n;
    int tram = 0;
    int maxTram = tram;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        tram -= a;
        tram += b;

        maxTram = max(tram, maxTram);
    }

    cout << maxTram << endl;
    return 0;
}