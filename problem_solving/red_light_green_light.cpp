//https://www.codechef.com/problems/DOLL


#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;


while(t--){

	int a,h;
	cin>>a>>h;
	int count=0;

	for(int i=0;i<a;i++){

		int temp;
		cin>>temp;

		if(temp>h){

			count++;
		}



	}

	cout<<count<<endl;


}


}
