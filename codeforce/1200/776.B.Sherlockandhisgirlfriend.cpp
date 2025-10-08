// link : https://codeforces.com/contest/776/problem/B
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

    if (n <= 2)
    {
        cout << 1 << endl;

        for (int i = 1; i <= n; i++)
            cout << 1 << " \n"[i == n];
        return;
    }
    n++;
    vector<int> prime(n + 1, false);

    for (int i = 3; i * i <= n; i += 2)
        for (int j = i * i; j <= n; j += (i * 2))
            prime[j] = true;

    cout << 2 << endl;
    for (int i = 2; i <= n; i++)
    {
        if (i == 2)
            cout << 1;
        else if (i % 2 == 0)
            cout << 2;
        else if (prime[i])
            cout << 2;
        else
            cout << 1;
        cout << " \n"[i == n];
    }
}

int main()
{
    optimize();
    program();
    return 0;
}