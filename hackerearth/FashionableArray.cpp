// link : https://www.hackerrank.com/contests/eastern-university-selection-contest-2025/challenges/fashionable-array-2
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
    vector<int> a(n);

    for (int &ai : a)
        cin >> ai;
    sort(a.begin(), a.end());

    if (a[0] % 2 == 0 && a[n - 1] % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (a.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    if ((a[0] & 1) && (a[n - 1] & 1))
    {
        cout << 0 << endl;
        return;
    }

    // first count
    int first = 1;

    for (int i = 1; i < a.size(); i++)
    {
        if (a[0] % 2 != a[i] % 2)
            break;
        first++;
    }

    reverse(a.begin(), a.end());

    int second = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[0] % 2 != a[i] % 2)
            break;
        second++;
    }

    cout << min(first, second) << endl;
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