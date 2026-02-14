// link : https://leetcode.com/problems/self-dividing-numbers/description/
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
    bool ok(int n)
    {
        int cn = n;

        while (n)
        {
            int d = n % 10;
            if (d == 0)
                return false;

            if (cn % d != 0)
                return false;
            n /= 10;
        }

        return true;
    }
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        for (int i = left; i <= right; i++)
            if (ok(i))
                ans.push_back(i);

        return ans;
    }
};