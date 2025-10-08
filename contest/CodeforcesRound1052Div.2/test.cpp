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

int program()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int best = arr[0], sum = 0;

    for (int x : arr)
    {
        sum = max(x, sum + x); // either start new subarray or extend
        best = max(best, sum); // update answer
    }

    cout << "Max subarray sum = " << best << "\n";
}

int main()
{
    optimize();
    program();
    return 0;
}