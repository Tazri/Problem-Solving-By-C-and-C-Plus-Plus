// link : https://codeforces.com/problemset/problem/2007/A
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

int countOdd(int l, int r)
{
    int leftOdd = l & 1 ? (l + 1) / 2 : l / 2;
    int rightOdd = r & 1 ? (r + 1) / 2 : r / 2;
    int totalOdd = rightOdd - leftOdd;

    if (l & 1)
        totalOdd++;
    return totalOdd;
}

void test()
{
    int l, r;
    cin >> l >> r;
    int totalNumber = r - l + 1;
    int oddCount = countOdd(l, r);
    int evenCount = totalNumber - oddCount;

    int pairOddTotal = oddCount / 2;

    cout << min(pairOddTotal, evenCount) << endl;
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