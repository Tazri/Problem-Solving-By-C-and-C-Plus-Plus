// link : https://leetcode.com/problems/restore-finishing-order/
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

int32_t main()
{
    optimize();

    return 0;
}

class Solution
{
public:
    vector<int> recoverOrder(vector<int> &order, vector<int> &friends)
    {
        map<int, int> mp;

        for (int i = 0; i < order.size(); i++)
        {
            mp[order[i]] = i;
        }
        vector<int> res = friends;

        sort(res.begin(), res.end(), [&mp](int a, int b)
             { return mp[a] < mp[b]; });

        return res;
    }
};