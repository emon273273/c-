#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];

/*connected compents stoere*/

vector<vector<int>> c_component;

//current connected components

vector<int>current_cc;

//dfs function
bool vis[N];

void dfs(int vertex){






vis[vertex]=true; // 1 kore dilam

current_cc.push_back(vertex);





for(int child: g[vertex]){

	
if(vis[child]==true){
	
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
/*temporary vector*/


for(int i=1;i<=n;i++){

	if(vis[i]==true){
continue;




	} 
current_cc.clear();

dfs(i);

c_component.push_back(current_cc);

ct++;

                     }


 cout<<c_component.size()<<endl;




//connected components

 for(auto c_c: c_component){

 	for(int vertex:c_c){

 		cout<<vertex<<" ";
 	}
 	cout<<endl;
 }




 
} 