// link : https://www.geeksforgeeks.org/problems/count-distinct-pairs-with-difference-k1233/1
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
    int TotalPairs(vector<int> nums, int k)
    {
        // Code here
        unordered_set<int> num_set;
        unordered_set<string> seen;
        int total = 0;

        for (int num : nums)
        {

            if (num_set.count(num + k))
            {
                string key = to_string(num) + "," + to_string(num + k);
                string reverseKey = to_string(num + k) + "," + to_string(num);

                if (!seen.count(key) && !seen.count(reverseKey))
                {
                    seen.insert(key);
                    seen.insert(reverseKey);
                    total++;
                }
            }

            if (num_set.count(num - k))
            {
                string key = to_string(num) + "," + to_string(num - k);
                string reverseKey = to_string(num - k) + "," + to_string(num);

                if (!seen.count(key) && !seen.count(reverseKey))
                {
                    total++;
                    seen.insert(key);
                    seen.insert(reverseKey);
                }
            }

            num_set.insert(num);
        }

        return total;
    }
};

int main()
{
    optimize();
    Solution *test = new Solution();

    vector<int> arr = {11, 6, 10, 5, 11, 16};
    int k = 5;
    cout << test->TotalPairs(arr, k) << endl;
    return 0;
}