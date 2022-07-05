//https://www.codechef.com/problems/ATM2

#include<bits/stdc++.h>
using namespace std;

int main(){


	int t;

	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		int p, total;

		cin>>p>>total;
		int a[p];

		for(int j=0;j<p;j++){

         cin>>a[j];

		}
      
      

      for( int i=0;i<p;i++){

      	if(total-a[i]>=0){

            total=total-a[i];

      		cout<<"1";
      	}else if(total-a[i]<0){

      		cout<<"0";
      	}


      }

      cout<<endl;
	}
}