// link :https://leetcode.com/problems/maximum-substrings-with-distinct-start/
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
    int maxDistinct(string s)
    {
        set<char> st;

        for (char &ch : s)
            st.insert(ch);

        return st.size();
    }
};