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

const ll mxN = 5 * 1e5;
const ll sz = (((mxN) * (mxN + 1)) / 2) + 1;

void program()
{

    ll time = 0;
    for (ll i = 1; i * i <= sz; i++)
    {
        time = i;
    }
    cout << time << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}