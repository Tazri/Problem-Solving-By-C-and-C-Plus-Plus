// link : https://codeforces.com/problemset/problem/1353/B
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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a.begin(), a.end());

    sort(b.begin(), b.end(), [](int a, int b)
         { return a > b; });

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (k <= 0)
        {
            sum += a[i];
            continue;
        }

        if (b[i] > a[i])
        {
            sum += b[i];
            k--;
        }
        else
            sum += a[i];
    }

    cout << sum << endl;
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