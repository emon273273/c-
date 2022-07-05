#include<bits/stdc++.h>

using namespace std;

int main(){

//map a continous memory ney na

//i+1 possible na but i++ possible



	map<int,string>m;



	m[1]="abc";

	m[5]="cdc";
	m[3]="acd";

	//arekta way

	m.insert({4,"afg"});

//element khuje paoyar jonno

	map<int,string>:: iterator it;

	for(it=m.begin();it!=m.end();it++){

		cout<<(*it).first<<" "<<(*it).second;
	}


}