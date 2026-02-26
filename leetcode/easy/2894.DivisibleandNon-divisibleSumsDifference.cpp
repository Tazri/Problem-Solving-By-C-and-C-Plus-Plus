// link : https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
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
    int differenceOfSums(int n, int m)
    {
        int num1 = ((n + 1) * n) / 2;

        int cnt = n / m;
        cnt = ((cnt + 1) * cnt) / 2;
        int num2 = cnt * m;
        num1 -= num2;

        return num1 - num2;
    }
};