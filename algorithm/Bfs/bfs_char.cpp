#include<bits/stdc++.h>
using namespace std;

void bfs(int s,vector<char>adj[],bool vis[],int n){

queue<char>q;

q.push(s);
vis[s]=true;
while(!q.empty()){

char curr=q.front();
q.pop();
cout<<curr<<" ";
for(int i=0;i<adj[curr].size();i++){
if(vis[adj[curr][i]]==false){

q.push(adj[curr][i]);
vis[adj[curr][i]]=true;
}}}}
int main(){

int T;
cin>>T;
while(T--){


int n,e;
cin>>n>>e;
vector<char>adj[n];

bool vis[n]={false};

for(int i=0;i<e;i++){

char u,v;
cin>>u>>v;
adj[u].push_back(v);


}

bfs(0,adj,vis,n);
cout<<endl;
}

}
//function
/*
A B
A C
B D
D F
D E
E F
E C
*/
