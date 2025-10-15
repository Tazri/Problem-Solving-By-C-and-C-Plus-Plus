// link : https://leetcode.com/problems/reverse-words-in-a-string-iii/
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
    string reverseWords(string s)
    {
        stringstream ss(s);
        vector<string> words;
        string word;
        while (ss >> word)
        {
            reverse(word.begin(), word.end());
            words.push_back(word);
        }

        string res = words[0];

        for (int i = 1; i < words.size(); i++)
        {
            res += " ";
            res += words[i];
        }

        return res;
    }
};