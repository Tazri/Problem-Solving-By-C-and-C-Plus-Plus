// link : https://www.hackerrank.com/contests/eastern-university-selection-contest-2025/challenges/decode-the-string-4
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

bool isDigit(char ch)
{
    return ch <= '9' && ch >= '0';
}

int charToDigit(char ch)
{
    return (int)ch - (int)'0';
}

struct Segment
{
    string str;
    int repeat;
};

string repeat(string str, int time)
{
    string res = "";
    for (int i = 0; i < time; i++)
        res += str;
    return res;
}

bool isLatter(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

int stringToNumber(string str)
{
    int n;
    stringstream ss(str);
    ss >> n;
    return n;
}

vector<string> parse(string s)
{
    vector<string> res;

    res.push_back("");
    res[0].push_back(s[0]);

    for (int i = 1; i < s.size(); i++)
    {
        char ch = s[i];

        if (isDigit(s[i]) && isDigit(res.back()[0]))
            res.back().push_back(s[i]);
        else if (isLatter(s[i]) && isLatter(res.back()[0]))
            res.back().push_back(s[i]);
        else
        {
            res.push_back("");
            res.back().push_back(s[i]);
        }
    }

    return res;
}

void program()
{
    string s;
    cin >> s;
    vector<string> parsed = parse(s);

    Segment curr;
    curr.repeat = 0;
    curr.str = "";
    stack<Segment> stk;

    // for (string sub : parsed)
    //     cout << sub << " ";
    // cout << endl;

    for (string sub : parsed)
    {
        if (isLatter(sub[0]))
        {
            curr.str += sub;
            continue;
        }

        if (sub == "[")
        {
            continue;
        }

        if (isDigit(sub[0]))
        {
            stk.push(curr);
            curr.repeat = stringToNumber(sub);
            curr.str = "";
            continue;
        }

        // merge
        string form = repeat(curr.str, curr.repeat);
        curr = stk.top();
        stk.pop();
        curr.str += form;
    }

    cout << curr.str << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}