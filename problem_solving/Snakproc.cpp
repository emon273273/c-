//https://www.codechef.com/problems/SNAKPROC

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;

	cin>>t;

	while(t--){

		int n;
		cin>>n;

		string s;

		cin>>s;

string ts;
for(int i=0;i<n;i++){

	if (s[i]!='.'){

		ts+=s[i];
	}
}

bool ans=true;

if(ts.length()%2!=0){

	ans=false;

}else{
for(int i=0;i<ts.length();i++){



	if(i%2==0 and ts[i]=='T'){ // every even position a H na theke jdi T thake tahole tokhn seta abar false


		ans=false;
		break;
		
	}
	else if(i%2!=0 and ts[i]=='H'){

ans =false;
break;
	}
}

}


if(ans==true){

	cout<<"Valid"<<endl;
}else{

	cout<<"Invalid"<<endl;
}

	}
}