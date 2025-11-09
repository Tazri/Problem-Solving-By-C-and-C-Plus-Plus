// link : https://codeforces.com/problemset/problem/749/A
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
    vector<int> ans;
    ans.reserve(n);
    bool hasOdd = false;
    if (n & 1)
    {
        hasOdd = true;
        n -= 3;
    }

    int t = n / 2;

    for (int i = 0; i < t; i++)
        ans.push_back(2);
    if (hasOdd)
        ans.push_back(3);

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
}

int main()
{
    optimize();
    program();
    return 0;
}