// link : https://codeforces.com/contest/1237/problem/B
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
    vector<int> enter(n);
    vector<int> leave(n);

    for (int i = 0; i < n; i++)
        cin >> enter[i];

    for (int i = 0; i < n; i++)
        cin >> leave[i];

    vector<bool> leaved(n + 1, false);
    int ei = 0;
    int li = 0;
    int fine = 0;

    while (ei < n && li < n)
    {
        int should = enter[ei];
        int out = leave[li];

        if (should == out)
        {
            leaved[out] = true;
            ei++;
            li++;
            continue;
        }

        if (leaved[should])
        {
            ei++;
            continue;
        }

        fine++;
        leaved[out] = true;
        li++;
    }

    cout << fine << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}