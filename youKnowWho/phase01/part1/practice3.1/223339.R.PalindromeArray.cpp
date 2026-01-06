// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
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

bool isPalindrome(vector<int> &v, int l, int r)
{
    if (l >= r)
        return true;

    if (v[l] != v[r])
        return false;

    return isPalindrome(v, l + 1, r - 1);
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &vi : v)
        cin >> vi;
    if (isPalindrome(v, 0, n - 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}