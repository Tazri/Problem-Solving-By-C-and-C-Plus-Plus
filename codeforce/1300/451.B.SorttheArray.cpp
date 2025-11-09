// link : https://codeforces.com/problemset/problem/451/B
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
    vector<int> vs(n);

    for (int i = 0; i < n; cin >> v[i], vs[i] = v[i], i++)
        ;

    sort(vs.begin(), vs.end());
    int l = -1;
    int r = -1;

    for (int i = 0; i < n; i++)
        if (v[i] != vs[i])
        {
            l = i;
            break;
        }

    for (int i = n - 1; i >= 0; i--)
        if (v[i] != vs[i])
        {
            r = i;
            break;
        }

    if (l == -1 || r == -1)
    {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return;
    }

    for (int li = l, ri = r; li <= ri; swap(v[li], v[ri]), li++, ri--)
        ;

    bool isSorted = true;

    for (int i = 0; i < n; i++)
        if (v[i] != vs[i])
        {
            isSorted = false;
            break;
        }

    if (!isSorted)
    {
        cout << "no" << endl;
        return;
    }
    cout << "yes" << endl;
    cout << l + 1 << " " << r + 1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}