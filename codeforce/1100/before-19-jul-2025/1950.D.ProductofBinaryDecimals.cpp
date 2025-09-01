
// link : https://codeforces.com/problemset/problem/1950/D
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

int lim = 1e5;
vector<int> nums;
queue<string> q;

int stringToNum(string n)
{
    stringstream ss(n);
    int num;
    ss >> num;
    return num;
}

void calc()
{
    q.push("1");

    while (q.size() > 0)
    {
        string sNum = q.front();
        int num = stringToNum(sNum);
        q.pop();
        if (num > lim)
            continue;

        q.push(sNum + "0");
        q.push(sNum + "1");

        nums.push_back(num);
    }
}

bool isItBinary(int num)
{
    while (num)
    {
        int d = num % 10;
        num /= 10;

        if (d != 0 && d != 1)
        {
            return false;
        }
    }

    return true;
}

void program()
{
    int n;
    cin >> n;

    queue<int> dq;
    dq.push(n);

    while (dq.size() > 0)
    {
        int top = dq.front();
        dq.pop();

        if (isItBinary(top))
        {
            cout << "YES" << endl;
            return;
        }
        // try to crack top
        for (int bi : nums)
        {
            if (top % bi != 0 || bi == 1)
                continue;

            int ai = top / bi;

            if (isItBinary(ai))
            {
                cout << "YES" << endl;
                return;
            }
            dq.push(ai);
        }
    }

    cout << "NO" << endl;
}

int main()
{
    optimize();
    calc();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}