#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];

//dfs function
bool vis[N];

void dfs(int vertex){


cout<<"vertex is "<<vertex<<endl;



vis[vertex]=true; // 1 kore dilam





for(int child: g[vertex]){

	
if(vis[child]==true){
	cout<<"visited of child"<<vis[child]<<endl;
	continue;

}


dfs(child);

	
		

}

	/*take action on child after exiting child node*/
}




int main(){


int n,e;

cin>>n>>e;

for(int i=0;i<e;i++){

	int v1,v2;
	cin>>v1>>v2;
	g[v1].push_back(v2);
	g[v2].push_back(v1);


}

int ct=0;

for(int i=1;i<=n;i++){

	if(vis[i]==true){
continue;



	} 


dfs(i);
ct++;

                     }




cout<<endl;
cout<<ct<<endl;


cout<<"print boolean array  ";

for( int a =0;a<=e; a++){

	cout<<vis[a]<<" ";
}

} 