// link : https://www.geeksforgeeks.org/problems/word-with-maximum-frequency0120/1
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
    string maximumFrequency(string &str)
    {
        // Your code foes here.
        vector<string> words;
        string word;
        istringstream stream(str);

        while (getline(stream, word, ' '))
            words.push_back(word);

        unordered_map<string, int> count;

        int maxCount = 1;
        for (string w : words)
        {
            if (count.find(w) != count.end())
            {
                int c = count[w] + 1;
                count[w] = c;

                if (c > maxCount)
                    maxCount = c;
            }
            else
            {
                count[w] = 1;
                if (maxCount < 1)
                {
                    maxCount = 1;
                }
            }
        }

        for (string word : words)
        {
            if (count[word] == maxCount)
            {
                return (word + " ") + to_string(maxCount);
            }
        }

        return "ksdj";
    }
};

int main()
{
    optimize();
    Solution *test = new Solution();
    string input = "devil the devil in the sky";
    cout << test->maximumFrequency(input) << endl;

    return 0;
}