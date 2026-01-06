// link : https://eolymp.com/en/problems/4815
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
    for (int i = 1; i <= n; i++)
        v[i - 1] = i;

    do
    {
        for (int &vi : v)
            cout << vi;
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
}

int32_t main()
{
    optimize();
    program();
    return 0;
}