// link : https://www.codechef.com/problems/GOODWEAT
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
    int o = 0;
    int z = 0;

    for (int i = 0; i < 7; i++)
    {
        int ai;
        cin >> ai;
        if (ai)
            o++;
        else
            z++;
    }

    if (o > z)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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