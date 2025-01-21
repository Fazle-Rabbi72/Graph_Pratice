#include<bits/stdc++.h>
using namespace std;

vector<int>v[1005]; //adjacency list
bool vis[1005]; // for visited tracking 
// BFS traversal function 
void bfs(int src ,int des){
    queue<pair<int,int>>q;
    q.push({src,0});
    vis[src]=true;
    bool found_level=false;


    while(!q.empty())
    {
        pair<int,int> p=q.front();
        q.pop();

        int parnt=p.first;
        int level=p.second;
        
        if(parnt==des)
        {
            cout<<"level of "<<parnt<<" is "<<level<<" ";
            found_level=true;
            return;
        }
        for(int chiled:v[parnt])
        {
            if(!vis[chiled])
            {
                q.push({chiled,level+1});
                vis[chiled]=true;
            }
        }

    }
    if(!found_level)
    {
        cout<<"path not found";
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

    int src,des;
    cin>>src>>des;
    memset(vis,false,sizeof(vis));
    bfs(src,des);
    

    return 0;
}

