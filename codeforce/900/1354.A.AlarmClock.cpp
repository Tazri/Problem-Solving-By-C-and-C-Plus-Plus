// link : https://codeforces.com/problemset/problem/1354/A
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
    ll need, alarm, add, take;

    cin >> need >> alarm >> add >> take;

    if (need <= alarm)
    {
        cout << alarm << endl;
        return;
    }

    ll slept = alarm;

    if (take >= add)
    {
        cout << -1 << endl;
        return;
    }

    ll per = add - take;

    need -= slept;
    ll times = (need + per - 1) / per;
    slept += (add * times);
    cout << slept << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}
