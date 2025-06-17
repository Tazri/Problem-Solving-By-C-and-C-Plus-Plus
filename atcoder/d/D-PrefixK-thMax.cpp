// link : https://atcoder.jp/contests/abc234/tasks/abc234_d
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

struct comperator
{
    bool operator()(int left, int right)
    {
        if (left < right)
        {
            return false;
        }
        return true;
    }
};

void program()
{
    int n, k;
    cin >> n >> k;

    priority_queue<int, vector<int>, comperator> pq;

    for (int i = 1; i <= n; i++)
    {
        int ai;
        cin >> ai;

        if (i < k)
        {
            pq.push(ai);
        }
        else
        {
            pq.push(ai);

            if (pq.size() > k)
            {
                pq.pop();
            }
            cout << pq.top() << endl;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}