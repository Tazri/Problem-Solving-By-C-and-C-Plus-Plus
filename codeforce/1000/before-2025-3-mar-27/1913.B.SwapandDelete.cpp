// link : https://codeforces.com/problemset/problem/1913/B
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
    string s;
    cin >> s;
    int z = 0;
    int o = 0;

    for (char d : s)
    {
        if (d == '0')
            z++;
        else
            o++;
    }

    for (char d : s)
    {
        if (d == '0')
        {
            if (o <= 0)
                break;
            o--;
        }
        else
        {
            if (z <= 0)
                break;
            z--;
        }
    }

    cout << z + o << endl;
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