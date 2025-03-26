// link : https://codeforces.com/problemset/problem/1808/A
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

int luckiest(int n)
{
    int mn = 9;
    int mx = 0;

    while (n)
    {
        int d = n % 10;
        n /= 10;
        mn = min(mn, d);
        mx = max(mx, d);

        if (mn == 0 && mx == 9)
            break;
    }

    return mx - mn;
}

void test()
{
    int l, r;
    cin >> l >> r;
    int num = l;
    int found = luckiest(l);

    for (int i = l; i <= r; i++)
    {
        int l = luckiest(i);
        
        if(found < l){
            num = i;
            found = l;
        }

        if (found >= 9)
            break;
    }

    cout << num << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
        test();
    return 0;
}