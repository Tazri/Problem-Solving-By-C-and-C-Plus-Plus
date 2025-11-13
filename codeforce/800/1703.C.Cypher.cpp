// linK : https://codeforces.com/contest/1703/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        string s;
        cin >> s;
        int add = 0;

        for (char ch : s)
            if (ch == 'U')
                add--;
            else
                add++;

        v[i] += add;

        v[i] = ((v[i] % 10) + 10) % 10;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " \n"[i == n - 1];
    }
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