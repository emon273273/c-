//https://www.codechef.com/viewsolution/63889643



#include <bits/stdc++.h>

using namespace std;


int main(){

	int t;

	cin>>t;

	while(t--)
	{

		int l,r,ans=0;

		cin>>l>>r;

		for(int i=l;i<=r;i++){


			if(i==2||i==3||i%10==2||i%10==3||i%10==9){

				ans++;

			}
		}

		cout<<ans<<endl;
		
	}
}