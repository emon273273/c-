#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m; // n hosse node m hosse edge

    cin>>n>>m;

    //declare adacency matrix

    // int adj[n+1][n+1];

    // for(int i=o;i<m;i++){

    //     int u,v;

    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;

    // }



    //for adacency list


    // vector<int>adj[n+1];

    // for(int i=0;i<m;i++){

    //     int u,v;
    //     cin>>u>>v;


    //     adj[u].push_back(u);

    //     adj[v].push_back(v);
        
    // }



    // jodi weighted soho thake

        vector<pair<int,int>>adj[n+1];

    for(int i=0;i<m;i++){

        int u,v,wt;
        cin>>u>>v>>wt;


   adj[u].push_back({v,wt});
   adj[v].push_back({u,wr});
        
    }

}