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

struct Person
{
    int come, gone, index;
};

struct Room
{
    int gone;
    int number;
};

struct comperator
{
    bool operator()(Room left, Room right)
    {
        if (left.gone < right.gone)
        {
            return false;
        }
        return true;
    }
};

void program()
{
    int n;
    cin >> n;
    vector<Person> persons(n);

    for (int i = 0; i < n; i++)
    {
        cin >> persons[i].come >> persons[i].gone;
        persons[i].index = i;
    }

    sort(persons.begin(), persons.end(), [](Person left, Person right)
         { return left.come < right.come; });

    priority_queue<Room, vector<Room>, comperator> pq;
    vector<int> ans(n);
    queue<Room> q;
    int r = 1;
    for (Person p : persons)
    {
        while (pq.size() > 0 && pq.top().gone < p.come)
        {
            Room freeRm = pq.top();
            q.push(freeRm);
            pq.pop();
        }

        if (q.size() > 0)
        {
            Room rm = q.front();
            rm.gone = p.gone;
            ans[p.index] = rm.number;
            pq.push(rm);
            q.pop();
        }
        else
        {
            Room newRm;
            newRm.number = r++;
            newRm.gone = p.gone;
            pq.push(newRm);
            ans[p.index] = newRm.number;
        }
    }

    cout << r - 1 << endl;
    cout << ans[0];
    for (int i = 1; i < ans.size(); i++)
    {
        cout << " " << ans[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}