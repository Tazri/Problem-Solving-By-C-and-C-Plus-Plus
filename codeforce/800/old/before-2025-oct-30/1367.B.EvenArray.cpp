// link : https://codeforces.com/problemset/problem/1367/B
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

void program()
{
    int n;

    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; cin >> a[i], i++)
        ;

    int even = (n + 1) / 2;
    int odd = n / 2;

    int evenCount = 0;
    int oddCount = 0;

    for (int &ai : a)
        if (ai & 1)
            oddCount++;
        else
            evenCount++;

    if (even != evenCount || oddCount != odd)
    {
        cout << -1 << endl;
        return;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != i % 2)
            cnt++;
    }

    cout << (cnt / 2) << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}