#include<bits/stdc++.h>
using namespace std;


void rev(int arr[],int start, int end)
{
while(start<end)
{

	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
}
}

//for print

void printarry(int arr[],int size){

	for (int i=0;i<size;i++){

		cout<<arr[i]<<" ";

	}
}

//string


void revstring(string &str){

	int n=str.length();


for(int i=0;i<n/2;i++){

	swap(str[i],str[n-i-1]); //
}
}
int main(){

// int arr[]={1,2,3,4,5,6};

// int n=sizeof(arr)/sizeof(arr[0]);

// // cout<<" normal method use kore"<<endl;

// // rev(arr,0,n-1);
// printarry(arr,n);





// //built in method use kore

// cout<<"build in function use kore"<<endl;
// int arr2[]={12,13,14,15,16};

// int n2=sizeof(arr2)/sizeof(arr2[0]);

// reverse(arr2, arr2+n2);
// printarry(arr2,arr2+n2);



	

//reverse string

string str="emon";
revstring(str);
cout<<str;





}