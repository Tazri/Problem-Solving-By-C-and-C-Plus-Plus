// link : https://www.geeksforgeeks.org/problems/twice-counter4236/1
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
    int countWords(string list[], int n)
    {
        // code here.
        int total = 0;
        unordered_map<string, int> count;

        for (int i = 0; i < n; i++)
        {
            string str = list[i];
            if (count.find(str) != count.end())
            {
                count[str]++;
            }
            else
            {
                count[str] = 1;
            }
        }

        for (auto pair : count)
        {
            if (pair.second == 2)
            {
                total++;
            }
        }
        return total;
    }
};

int main()
{
    optimize();
    Solution *test = new Solution();

    string arr[] = {"Geeks", "For", "Geeks"};
    int n = 3;

    cout << test->countWords(arr, n) << endl;
    return 0;
}