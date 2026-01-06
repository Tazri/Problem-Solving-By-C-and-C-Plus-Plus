// link : https://codeforces.com/problemset/problem/102/B
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
    string s;
    cin >> s;

    if (s.size() == 1)
    {
        cout << 0 << endl;
        return;
    }

    int sum = 0;

    for (char ch : s)
    {
        sum += (int)ch - (int)'0';
    }

    int cnt = 1;
    while (sum >= 10)
    {
        int dsum = 0;
        while (sum)
        {
            dsum += (sum % 10);
            sum /= 10;
        }
        cnt++;
        sum = dsum;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}