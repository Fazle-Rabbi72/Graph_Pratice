#include<bits/stdc++.h>
using namespace std;

vector<int>v[1005]; //adjacency list
bool vis[1005]; // for visited tracking 
// BFS traversal function 
void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=true;


    while(!q.empty())
    {
        int prnt=q.front();
        q.pop();
        cout<<prnt<<" ";

        for(int chiled:v[prnt])
        {
            if(!vis[chiled])
            {
                q.push(chiled);
                vis[chiled]=true;
            }
        }

    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));
    bfs(src);

    return 0;
}