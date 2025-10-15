// https://codeforces.com/problemset/problem/136/A
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

    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        int g;
        cin >> g;
        arr[g] = i;
    }

    cout << arr[1];

    for (int i = 2; i <= n; i++)
    {
        cout << " " << arr[i];
    }

    cout << endl;
    return 0;
}