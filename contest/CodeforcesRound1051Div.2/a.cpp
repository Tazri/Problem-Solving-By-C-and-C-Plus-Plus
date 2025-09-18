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
    for (int &vi : v)
        cin >> vi;

    int l = 0, r = 0;

    for (int i = 0; i < n; i++)
        if (v[i] == n)
        {
            l = i;
            r = i;
            break;
        }

    int cn = n;
    n--;
    l--;
    r++;
    while (n > 0)
    {
        bool found = false;
        if (l >= 0 && v[l] == n)
        {
            l--;
            n--;
            continue;
        }

        if (r < cn && v[r] == n)
        {

            r++;
            n--;
            continue;
        }

        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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