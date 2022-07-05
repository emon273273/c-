#include <bits/stdc++.h>

using namespace std;

int main(){

	vector <int> v={2,3,5,6,7};

// 	for(int i=0;i<v.size();i++){

// 		cout<<v[i]<<" ";

	
// }

cout<<endl;

// vector<int>::iterator it;
// for(it=v.begin();it!=v.end();++it){

// 	cout<<(*it)<<" ";


// for (int &value:v){


//  value++;
// 	cout<<value<<" ";
// }
// cout<<endl;


// for(int k:v){

// 	cout<<k <<" ";

// }


//vector of pair

vector<pair<int,int> >v_p={{1,2},{2,3}};

for (auto vl:v_p){

	cout<<vl.first<<" "<<vl.second<<endl;
}

}