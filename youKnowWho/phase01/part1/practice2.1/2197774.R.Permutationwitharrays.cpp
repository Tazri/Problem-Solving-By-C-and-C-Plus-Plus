// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
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
    vector<int> a(n);
    vector<int> b(n);
    for (int &ai : a)
        cin >> ai;
    for (int &bi : b)
        cin >> bi;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}