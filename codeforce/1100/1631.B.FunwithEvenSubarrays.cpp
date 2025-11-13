// link : https://codeforces.com/problemset/problem/1631/B
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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int d = v.back();

    int i = n - 1;
    int j = 0;
    int cnt = 0;
    while (0 <= i)
    {
        if (v[i] == d)
        {
            j++;
            i--;
            continue;
        }
        i -= j;
        j += j;
        cnt++;
    }

    cout << cnt << endl;
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