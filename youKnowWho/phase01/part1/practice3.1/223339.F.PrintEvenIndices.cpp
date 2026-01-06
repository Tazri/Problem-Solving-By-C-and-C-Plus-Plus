// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
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

vector<int> v;
int n;

void print(int i)
{
    if (i >= n)
        return;
    print(i + 2);
    cout << v[i] << " \n"[i == 0];
}

void program()
{
    cin >> n;
    v = vector<int>(n);
    for (int &vi : v)
        cin >> vi;

    print(0);
}

int32_t main()
{
    optimize();
    program();
    return 0;
}