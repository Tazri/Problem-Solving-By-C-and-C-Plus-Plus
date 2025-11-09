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

class Solution
{
public:
    int largestInteger(int num)
    {
        vector<int> d;

        int cp = num;

        while (cp)
        {
            d.push_back(cp % 10);
            cp /= 10;
        }

        int n = d.size();
        reverse(d.begin(), d.end());
        vector<int> odd;
        vector<int> even;

        for (int i = 0; i < n; i++)
            if (d[i] & 1)
                odd.push_back(d[i]);
            else
                even.push_back(d[i]);

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        for (int i = 0; i < n; i++)
        {
            if (d[i] & 1)
            {
                d[i] = odd.back();
                odd.pop_back();
            }
            else
            {
                d[i] = even.back();
                even.pop_back();
            }
        }

        int ans = 0;

        for (int di : d)
        {
            ans *= 10;
            ans += di;
        }

        return ans;
    }
};

int main()
{
    optimize();

    return 0;
}