// link : https://codeforces.com/problemset/problem/2030/A
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

void printVector(vector<int> v)
{
    if (!v.size())
    {
        cout << "[ empty ]" << endl;
    }

    cout << "[ " << v[0];

    for (int i = 1; i < v.size(); i++)
    {
        cout << " | " << v[i];
    }
    cout << " ]" << endl;
}

void test()
{
    int n;
    cin >> n;

    int maxN, minN;

    int ni;
    cin >> ni;
    maxN = ni;
    minN = ni;

    for (int i = 1; i < n; i++)
    {
        cin >> ni;
        maxN = max(ni, maxN);
        minN = min(ni, minN);
    }

    int ans = (maxN * (n - 1)) - (minN * (n - 1));

    cout << ans << endl;
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