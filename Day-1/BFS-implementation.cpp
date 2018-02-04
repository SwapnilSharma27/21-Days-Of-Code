#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000][1000];
int vis[1000];
int q[10];
int rear = 0;
int fr = 0;

void push(int x){

    q[rear++] = x;

}

int pop(){

    return q[fr++];

}

void bfs(int s){

    int p;
    push(s);
    vis[s]=1;
    while(fr<rear){

        p = pop();

        cout<<p<<" ";

    for(int i=0;i<n;i++){

            if(a[p][i]==1 && vis[i]==0){

                vis[i]=1;
                push(i);
            }
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
            cin>>a[i][j];
        }
    }

    cout<<"\nEnter the source node: ";
    cin>>s;
    memset(vis,0,sizeof(vis));
    cout<<"\nThe graph traversal path is: \n";
    bfs(s);




}
