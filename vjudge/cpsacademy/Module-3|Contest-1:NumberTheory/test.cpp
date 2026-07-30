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

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

void program(int i)
{
    cout << "Case #" << i << ": ";

    int n;
    cin >> n;

    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    int l = lcm(v[0], v[1]);

    for (int i = 2; i < n; i++)
    {
        l = lcm(l, v[i]);
    }

    set<int> st;

    for (int i = 2; i * i <= l; i++)
    {
        if (l % i != 0)
            continue;
        st.insert(i);

        while (l % i == 0)
            l /= i;
    }

    if (l > 1)
        st.insert(l);

    cout << st.size() << endl;

    for (int si : st)
        cout << si << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}