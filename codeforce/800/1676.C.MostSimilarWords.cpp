// link : https://codeforces.com/contest/1676/problem/C
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

int d = (int)'z' - (int)'a' + 1;

int f(char a, char b)
{
    int c1 = (int)a - (int)'a';
    int c2 = (int)b - (int)'a';
    return abs(c1 - c2);
}

int cost(string a, string b)
{
    int n = a.size();

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += f(a[i], b[i]);
    }

    return sum;
}

void program()
{
    int n, l;
    cin >> n >> l;

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int mn = -1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            int c = cost(v[i], v[j]);

            // cout << v[i] << " -> " << v[j] << " = " << c << endl;
            if (mn == -1)
                mn = c;
            mn = min(mn, c);
        }

    cout << mn << endl;
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