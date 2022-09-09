// #include<bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;
void bfs(int x, bool *vis, vector<int> arr[])
{
    queue<int> Q;
    Q.push(x);
    vis[x] = true;
    if (!Q)
    {
        int node = Q.front();
        Q.pop();
        cout << node << " ";
        for (auto i : arr[x])
        {
            if (!vis[i])
            {
                vis[i] = true;
                Q.push(i);
            }
        }
    }
}
vector<int> *graph(int v, int e)
{
    vector<int> arr[v + 1];
    for (int i = 0; i < e; i++)
    {
        int u, w;
        cin >> u, w;
        arr[u].push_back(w);

        return arr;
    }
    int main()
    {
        int v, e;
        cin >> v >> e;
        bool *vis = new bool[v + 1];
        for (int i = 0; i <= v; i++)
        {
            vis[i] = false;
        }
        // vector<int>* temp = graph(v,e);
        bfs(2, vis, graph(v, e));
    }