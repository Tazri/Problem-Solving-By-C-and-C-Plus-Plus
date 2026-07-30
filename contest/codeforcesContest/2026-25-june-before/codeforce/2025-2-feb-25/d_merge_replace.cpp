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

#define caseIf(lsv, lev, rsv, rev) if (ls == lsv && le == lev && rs == rsv && re == rev)
#define twoCaseIf(sv, ev) if (s == sv && e == ev)

class Element
{
public:
    int index, value, totalSmallAfterIt;
    Element()
    {
        totalSmallAfterIt = 0;
    };
    Element(int index, int value)
    {
        this->index = index;
        this->value = value;
        totalSmallAfterIt = 0;
    }
};

void program()
{
    int n;
    cin >> n;
    vector<int> originalArr(n + 1);

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        originalArr[i + 1] = value;
    }

    int mxSmall = 0;
    int mxSmallIndex = 1;
    int mxSmallValue = originalArr[1];
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;

        for (int j = i + 1; j <= n; j++)
        {
            if (originalArr[i] > originalArr[j])
            {
                cnt++;
            }
        }

        if (mxSmall <= cnt)
        {
            mxSmall = cnt;
            mxSmallIndex = i;
            mxSmallValue = originalArr[i];
        }
    }

    Element mx = Element(mxSmallIndex, mxSmallValue);
    mx.totalSmallAfterIt = mxSmall;

    // calculate anser
    if (mx.totalSmallAfterIt == 0)
    {
        cout << mx.index << " " << mx.index << endl;
        return;
    }

    int inv = 0;
    int r = mx.index;
    int ansR = r;
    int mxInv = 0;

    for (int i = r; i <= n; i++)
    {
        if (mx.value > originalArr[i])
        {
            inv++;
        }
        else if (mx.value < originalArr[i])
        {
            inv--;
        }

        if (inv > mxInv)
        {
            mxInv = inv;
            ansR = i;
        }
    }

    cout << mx.index << " " << ansR << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}

/*
3
2 3 1
ans : 2 1
*/
