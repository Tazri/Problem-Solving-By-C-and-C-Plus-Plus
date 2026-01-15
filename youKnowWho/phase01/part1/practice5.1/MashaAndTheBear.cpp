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

void program()
{
    int n;
    cin >> n;
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        dq.push_back(tmp);
    }

    int mash = 0;
    int bear = 0;
    bool isMash = true;
    while (dq.size())
    {
        int point = 0;

        if (isMash)
        {
            point += dq.front();
            dq.pop_front();

            if (dq.size())
            {
                point += dq.front();
                dq.pop_front();
            }
        }
        else
        {
            point += dq.back();
            dq.pop_back();

            if (dq.size())
            {
                point += dq.back();
                dq.pop_back();
            }
        }

        if (isMash)
            mash += point;
        else
            bear += point;
        isMash = !isMash;
    }

    if (mash > bear)
        cout << "Masha" << endl;
    else if (bear > mash)
        cout << "The Bear" << endl;
    else
        cout << "Draw" << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}