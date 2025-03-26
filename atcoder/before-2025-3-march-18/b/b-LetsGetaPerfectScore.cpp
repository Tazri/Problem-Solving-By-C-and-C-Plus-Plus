// link : https://atcoder.jp/contests/abc282/tasks/abc282_b?lang=en
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

bool canBePair(string s1, string s2)
{
    int size = s1.size();

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == 'o' || s2[i] == 'o')
        {
            size--;
        }
    }

    if (size > 0)
    {
        return false;
    }
    return true;
}

void program()
{
    int n, m;
    cin >> n >> m;

    vector<string> p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (canBePair(p[i], p[j]))
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}