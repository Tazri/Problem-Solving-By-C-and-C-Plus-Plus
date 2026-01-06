// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
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

    for (int &vi : v)
        cin >> vi;

    for (int i = 0; i < n; i++)
    {
        int select = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] < v[select])
                select = j;
        swap(v[select], v[i]);
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
}

int main()
{
    optimize();
    program();
    return 0;
}