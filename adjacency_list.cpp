#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>mat[n];
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int m;
    cin>>m;
    cout<<"Adjacency List---"<<endl;
    for(int x:mat[m]){
        cout<<x<<" ";
    }
    
    return 0;
}