#include<bits/stdc++.h>

using namespace std;

void bubblesort(int arr[],int n)
{






int i,j;
    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){

                swap(arr[j],arr[j+1]);
            }


        }
    }
}


void print(int arr[],int n){

int i,j;
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";

       cout<<endl;
   } 
}

int main(){


    int arr[]={67,67,54,5,7,97,54,46};
int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);

    cout<<"sorted array"<<endl;
    print(arr,n);


}