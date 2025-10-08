// link : https://leetcode.com/problems/find-words-containing-character/
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

int main()
{
    optimize();

    return 0;
}

class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> ans;
        ans.reserve(words.size());

        for (int i = 0; i < words.size(); i++)
        {
            string word = words[i];

            for (char ch : word)
            {
                if (ch == x)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }

        return ans;
    }
};