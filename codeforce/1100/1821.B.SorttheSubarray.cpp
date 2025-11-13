// link : https://codeforces.com/problemset/problem/1821/B
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

void printLognest(vector<int> &a)
{
    int n = a.size();
    int ansl = 0;
    int ansr = 0;
    int l = 0;
    int r = 0;

    while (r + 1 < n)
    {
        if (a[r] <= a[r + 1])
        {
            r++;
            int prev = ansr - ansl + 1;
            int len = r - l + 1;

            if (len > prev)
            {
                ansl = l;
                ansr = r;
            }
            continue;
        }
        l = r + 1;
        r = r + 1;
    }

    cout << ansl + 1 << " " << ansr + 1 << endl;
}

void program()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int &ai : a)
        cin >> ai;

    for (int &bi : b)
        cin >> bi;

    int l = -1;
    int r = -1;

    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
        {
            l = i;
            break;
        }

    for (int i = n - 1; i >= 0; i--)
        if (a[i] != b[i])
        {
            r = i;
            break;
        }

    if (l == -1 || r == -1)
    {
        printLognest(a);
        return;
    }

    while (0 <= l - 1 && b[l - 1] <= b[l])
        l--;

    while (r + 1 < n && b[r] <= b[r + 1])
        r++;

    cout << l + 1 << " " << r + 1 << endl;
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