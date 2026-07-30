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
    ll x;
    cin >> x;
    vector<ll> ans = {8000, 4000, 2000, 1000};

    cout << ans[x - 1] << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}