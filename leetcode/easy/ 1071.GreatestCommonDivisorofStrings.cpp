// link : https://leetcode.com/problems/greatest-common-divisor-of-strings/
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
    string gcdOfStrings(string str1, string str2)
    {
        int g = gcd(str1.size(), str2.size());

        string ans = "";

        for (int i = 0; i < g; i++)
            ans.push_back(str1[i]);

        string s1 = "";
        string s2 = "";

        int sd = str1.size() / g;

        for (int i = 0; i < sd; i++)
            s1 += ans;

        sd = str2.size() / g;

        for (int i = 0; i < sd; i++)
            s2 += ans;

        if (s1 == str1 && s2 == str2)
            return ans;

        return "";
    }
};

int main()
{
    optimize();

    return 0;
}