// link : https://codeforces.com/problemset/problem/1834/B
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

void makeEqual(string &n1, string &n2)
{
    string a(n2.size() - n1.size(), '0');
    n1 = a + n1;
}

void program()
{
    string n1;
    string n2;
    cin >> n1;
    cin >> n2;

    if (n1.size() != n2.size())
        makeEqual(n1, n2);

    ll ans = 0;
    ll leftMatch = 0;
    for (int i = 0; i < n1.size(); i++)
    {
        if (n1[i] == n2[i])
        {
            leftMatch++;
            continue;
        }

        ll d1 = (int)n1[i] - (int)'0';
        ll d2 = (int)n2[i] - (int)'0';
        leftMatch++;
        ans += d2 > d1 ? d2 - d1 : d1 - d2;
        break;
    }
    ll rightleft = n1.size() - leftMatch;
    ans += (rightleft * 9);
    cout << ans << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}