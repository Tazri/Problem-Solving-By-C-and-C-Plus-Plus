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
    void pb(deque<int> &dq, int x)
    {
        // code here
        dq.push_back(x);
    }

    void ppb(deque<int> &dq)
    {

        // code here
        if (dq.empty())
            return;
        dq.pop_back();
    }

    int front_dq(deque<int> &dq)
    {
        // code here
        if (dq.empty())
        {
            return -1;
        }
        return dq.front();
    }

    void pf(deque<int> &dq, int x)
    {
        // code here
        dq.push_front(x);
    }
};

int main()
{
    optimize();

    return 0;
}