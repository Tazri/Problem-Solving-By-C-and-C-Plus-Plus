// linK : https://codeforces.com/problemset/problem/1842/B
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

bool canTake(int a, int x)
{

    while (a || x)
    {
        int xbit = x & 1;
        int abit = a & 1;

        if (xbit == 0 && abit == 1)
        {
            return false;
        }
        x >>= 1;
        a >>= 1;
    }
    return true;
}

void program()
{
    int n, x;
    cin >> n >> x;
    int u = 0;

    vector<int> stk1(n);
    vector<int> stk2(n);
    vector<int> stk3(n);

    for (int i = 0; i < n; i++)
        cin >> stk1[i];

    reverse(stk1.begin(), stk1.end());

    for (int i = 0; i < n; i++)
        cin >> stk2[i];

    reverse(stk2.begin(), stk2.end());
    for (int i = 0; i < n; i++)
        cin >> stk3[i];
    reverse(stk3.begin(), stk3.end());

    while (stk1.size())
    {
        if (canTake(stk1.back(), x))
        {
            u |= stk1.back();
            stk1.pop_back();
            continue;
        }
        break;
    }

    while (stk2.size())
    {
        if (canTake(stk2.back(), x))
        {

            u |= stk2.back();
            stk2.pop_back();
            continue;
        }
        break;
    }

    while (stk3.size())
    {
        if (canTake(stk3.back(), x))
        {
            u |= stk3.back();
            stk3.pop_back();
            continue;
        }
        break;
    }

    if (x == u)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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