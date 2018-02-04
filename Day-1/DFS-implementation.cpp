#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int n;
int g[1000][1000];
int vis[1000];
void dfs(int x)
{
    if(vis[x]==1)
        return;
    else
    {
        int i;
        vis[x]=1;
        cout<<x<<" ";
        for(i=0;i<n;i++)
        {
            if(g[x][i]==1 && vis[i]==0 )
                dfs(i);
        }
    }
}

int main(){

    int i,j,s;
    cout<<"Enter number of nodes: ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\nEnter the 1 if node exists between "<< i << " & " << j << " else enter 0: ";
            cin>>g[i][j];
        }
    }

    cout<<"\nEnter the source node: ";
    cin>>s;

    dfs(s);
}
