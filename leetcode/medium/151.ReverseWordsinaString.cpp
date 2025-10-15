// link : https://leetcode.com/problems/reverse-words-in-a-string/
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
        vector<string> words;
        string word;

        stringstream ss(s);
        while (ss >> word)
        {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string res = "";
        res += words[0];

        for (int i = 1; i < words.size(); i++)
        {
            res += " ";
            res += words[i];
        }

        return res;
    }
};