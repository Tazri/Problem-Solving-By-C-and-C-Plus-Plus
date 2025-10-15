// link : https://leetcode.com/problems/three-divisors/
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
    bool isThree(int n)
    {
        int cnt = 0;

        for (int i = 1; i * i <= n; i++)
        {
            if (n % i != 0)
                continue;

            cnt++;

            if (n / i == i)
                continue;
            cnt++;

            if (cnt > 3)
                return false;
        }

        return cnt == 3;
    }
};

int main()
{
    optimize();

    return 0;
}