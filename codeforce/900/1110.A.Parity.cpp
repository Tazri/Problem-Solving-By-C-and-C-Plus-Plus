// link: https://codeforces.com/problemset/problem/1110/A
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
    int b, k;
    cin >> b >> k;
    vector<int> v(k);

    for (int &vi : v)
        cin >> vi;

    for (int i = 0; i < k; i++)
    {
        if (i == k - 1)
        {
            continue;
        }

        if (b % 2 == 1 && v[i] % 2 == 1)
            v[i] = 1;
        else
            v[i] = 0;
    }

    v.back() &= 1;

    int sum = 0;
    for (int &vi : v)
        sum += vi;

    if (sum & 1)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}