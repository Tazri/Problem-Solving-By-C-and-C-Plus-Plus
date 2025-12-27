// link : https://codeforces.com/problemset/problem/1365/B
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
    vector<int> s(n);
    for (int &si : s)
        cin >> si;
    bool sorted = true;
    for (int i = 1; i < n; i++)
        if (v[i - 1] > v[i])
        {
            sorted = false;
            break;
        }

    if (sorted)
    {
        cout << "YES" << endl;
        return;
    }

    int zero = 0;
    int one = 0;
    for (char ch : s)
        if (ch == 1)
            one++;
        else
            zero++;

    if (zero && one)
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