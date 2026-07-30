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

void test()
{
    int n;
    cin >> n;
    set<int> a;
    set<int> b;

    int aDiff = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (a.count(temp))
            continue;

        a.insert(temp);
        aDiff++;
    }

    int bDiff = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (b.count(temp))
            continue;

        b.insert(temp);
        bDiff++;
    }

    int mn = min(aDiff, bDiff);
    int mx = max(aDiff, bDiff);

    if (mn < 2 && mx < 2)
    {
        cout << "NO" << endl;
    }
    else if (mn == 1 && mx <= 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}