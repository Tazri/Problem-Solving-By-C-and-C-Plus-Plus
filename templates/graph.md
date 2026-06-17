## Topological sort

````cpp
int n, m;
vector<int> mark;
vector<vector<int>> graph;
vector<int> comeFrom;
bool isCycle = false;
vector<int> cycle;
vector<int> topSort;

void dfs(int i, int prev)
{
    if (isCycle)
        return;

    if (mark[i] == 2)
        return;

    if (mark[i] == 1)
    {
        isCycle = true;
        int curr = prev; // go backward curr to - prev
        while (curr != i)
        {
            cycle.push_back(curr);
            curr = comeFrom[curr];
        }

        cycle.push_back(curr);
        reverse(cycle.begin(), cycle.end());
        cycle.push_back(curr);
        return;
    }

    comeFrom[i] = prev;
    mark[i] = 1;
    for (int to : graph[i])
    {
        dfs(to, i);
        if (isCycle)
            return;
    }
    topSort.push_back(i);
    mark[i] = 2;
}
// reverse topsort vector give topological sorted array if cycle not found
```

## Cycle Detection in Bidirctional Graph
```cpp
int n, m;
vector<bool> visited;
vector<int> parent;
vector<vector<int>> graph;
bool isCycle = false;
vector<int> cycle; // store one for the cycle

void dfs(int i, int p = 0)
{
    if (isCycle)
        return;
    visited[i] = true;
    parent[i] = p;

    for (int to : graph[i])
    {
        if (!visited[to])
        {
            dfs(to, i);
            if (isCycle)
                return;
        }
        else if (p != to)
        {
            isCycle = true;

            int curr = i; // to to i, go back
            while (curr != to)
            {
                cycle.push_back(curr);
                curr = parent[curr];
            }
            cycle.push_back(curr);
            reverse(cycle.begin(), cycle.end());
            // start with 'to' and end with 'to'
            cycle.push_back(to);
            return;
        }
    }
}
```

## DSU


```cpp
struct DSU
{
vector<int> parent, sz;

    DSU(int n)
    {
        parent.resize(n + 1);
        sz.assign(n + 1, 1);

        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int find(int node)
    {
        if (parent[node] == node)
            return node;

        return parent[node] = find(parent[node]);
    }

    bool unite(int a, int b)
    {
        a = find(a);
        b = find(b);

        if (a == b)
            return false;

        if (sz[a] < sz[b])
            swap(a, b);

        parent[b] = a;
        sz[a] += sz[b];

        return true;
    }

    bool same(int a, int b)
    {
        return find(a) == find(b);
    }

    int size(int node)
    {
        return sz[find(node)];
    }

    int components()
    {
        int cnt = 0;

        for (int i = 1; i < parent.size(); i++)
        {
            if (find(i) == i)
                cnt++;
        }

        return cnt;
    }

    vector<int> takeParents()
    {
        vector<int> ans;

        for (int i = 1; i < parent.size(); i++)
        {
            if (find(i) == i)
                ans.push_back(i);
        }

        return ans;
    }

    void reset(int node)
    {
        parent[node] = node;
        sz[node] = 1;
    }

};

```
````
