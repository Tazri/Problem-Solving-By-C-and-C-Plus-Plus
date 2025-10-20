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

int sz = 2 * (1e5);

vector<int> spf(sz + 12);
vector<int> seive(sz + 12);

void cal()
{
    spf[2] = 2;
    for (int i = 1; i <= sz; i++)
    {
        if (i % 2 == 0)
            spf[i] = 2;
        else
            spf[i] = i;
    }

    for (int i = 3; i * i <= sz; i += 2)
    {
        if (spf[i] != i)
            continue;
        for (int j = i; j <= sz; j += (2 * i))
        {
            if (spf[j] == j)
                spf[j] = i;
        }
    }
}

void program()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    int odd = 0;
    int even = 0;
    for (int &ai : a)
    {
        cin >> ai;

        if (ai & 1)
            odd++;
        else
            even++;
    }
    for (int &bi : b)
        cin >> bi;

    if (even > 1)
    {
        cout << 0 << endl;
        return;
    }

    set<int> st;

    for (int ai : a)
    {
        while (ai > 1)
        {
            int p = spf[ai];
            if (st.count(p))
            {
                cout << 0 << endl;
                return;
            }

            while (ai % p == 0)
                ai /= p;

            st.insert(p);
        }
    }

    if (odd && even)
    {
        cout << 1 << endl;
        return;
    }

    for (int ai : a)
    {
        ai++;
        while (ai > 1)
        {
            int p = spf[ai];
            if (st.count(p))
            {
                cout << 1 << endl;
                return;
            }

            while (ai % p == 0)
                ai /= p;
        }
    }

    cout << 2 << endl;
}

int main()
{
    optimize();
    cal();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}