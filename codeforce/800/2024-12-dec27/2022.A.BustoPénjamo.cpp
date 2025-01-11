// link : https://codeforces.com/problemset/problem/2022/A
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

void test()
{
    int n, r;
    cin >> n >> r;
    vector<int> members(n);

    int totalMembers = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> members[i];
        totalMembers += members[i];
    }

    if (totalMembers <= r)
    {
        cout << totalMembers << endl;
        return;
    }

    int totalSeat = 2 * r;
    int happy = 0;
    int leftMembers = 0;

    for (int ai : members)
    {
        int seatGet = ai - (ai & 1);
        totalSeat -= seatGet;
        happy += seatGet;
        leftMembers += (ai & 1);
    }

    int emptySeat = totalSeat - leftMembers;
    happy += min(emptySeat, leftMembers);

    cout << happy << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}