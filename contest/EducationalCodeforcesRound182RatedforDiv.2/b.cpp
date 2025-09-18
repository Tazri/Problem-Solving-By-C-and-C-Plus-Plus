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

bool checkSorted(vector<int> v, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != i)
            return false;
    }
    return true;
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    vector<bool> mp(n + 1, false);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        if (!v[i])
            count++;
    }

    int l = 1;
    int r = n;

    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            l = i;
            break;
        }
        if (v[i] != i)
        {
            l = i;
            break;
        }
    }

    for (int i = n; i >= 1; i--)
    {
        if (v[i] == 0)
        {
            r = i;
            break;
        }

        if (v[i] != i)
        {
            r = i;
            break;
        }
    }

    int len = r - l + 1;

    if (count > 1)
    {
        cout << len << endl;
        return;
    }

    bool isSorted = true;
    if (count == 0)
    {
        isSorted = checkSorted(v, n);

        if (isSorted)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            cout << len << endl;
            return;
        }
    }

    isSorted = true;

    // missing number
    int miss = 0;
    for (int i = 1; i <= n; i++)
    {
        miss ^= i;
        miss ^= v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            v[i] = miss;
            break;
        }
    }

    isSorted = checkSorted(v, n);

    if (isSorted)
    {
        cout << 0 << endl;
        return;
    }
    l = 1;
    r = n;

    for (int i = 1; i <= n; i++)
    {
        if (v[i] != i)
        {
            l = i;
            break;
        }
    }

    for (int i = n; i >= 1; i--)
    {
        if (v[i] != i)
        {
            r = i;
            break;
        }
    }

    len = r - l + 1;
    cout << len << endl;
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