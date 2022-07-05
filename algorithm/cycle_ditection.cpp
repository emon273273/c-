 #include<bits/stdc++.h>
 using namespace std;

bool iscycle(int src, vector<vector<int>> &adj,vector<bool> &isvisited, int parent){


   isvisited[src]=true;

   for(auto i: adj[src]){
    if(i!=parent){
        if(isvisited[i]){
            return true;
        }
        if(!isvisited[i] and iscycle(i,adj,isvisited,src)){

            return true;
        }
    }
   } 
   return false;

}
 int main(){

    int n,m;

    cin>>n>>m;

    vector<vector<int>>adj(n);
  


for(int i=0;i<m;i++){
  int u,v;
cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
    

bool cycle=false;

vector<bool>isvisited(n,false);
for(int i=0;i<n;i++){
if(!isvisited[i] and  iscycle(i,adj,isvisited,-1)){

    cycle=true;

}

}
if(cycle){

    cout<<"cycle  is present"<<endl;
}
else{
    cout<<"cycle is not present"<<endl;
}

 }