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

void program(int cse)
{
    cout << "Case #" << cse << ": ";

    int n;
    cin >> n;

    vector<int> v(n);
    for (int &vi : v)
        cin >> vi;

    int mx = 0;

    for (int i = 1; i < n; i++)
    {
        int d = abs(v[i - 1] - v[i]);
        mx = max(mx, d);
    }
    cout << mx << endl;
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