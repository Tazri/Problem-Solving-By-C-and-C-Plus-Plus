// link : https://www.geeksforgeeks.org/problems/find-the-frequency/1
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
    int findFrequency(vector<int> arr, int x)
    {
        // Your code here
        int total = 0;
        for (int a : arr)
        {
            if (a == x)
                total++;
        }
        return total;
    }
};

int main()
{
    optimize();
    Solution *test = new Solution();

    vector<int> arr = {1, 2, 3, 3, 2, 1};
    int k = 2;
    cout << test->findFrequency(arr, k) << endl;
    return 0;
}