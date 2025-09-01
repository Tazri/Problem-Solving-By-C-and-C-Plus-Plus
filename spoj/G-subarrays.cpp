// link : https://www.spoj.com/problems/ARRAYSUB/en/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans;

    for (int &vi : v)
        cin >> vi;

    int k;
    cin >> k;

    multiset<int> mt;

    for (int i = 0; i < k; i++)
    {
        mt.insert(v[i]);
    }

    ans.push_back(*mt.rbegin());

    for (int r = k, l = 0; r < n; r++, l++)
    {
        mt.erase(mt.find(v[l]));
        mt.insert(v[r]);
        ans.push_back(*mt.rbegin());
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
}

int main()
{
    optimize();
    program();
    return 0;
}