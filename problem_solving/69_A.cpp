#include<bits/stdc++.h>
using namespace std;

int main(){
int a;
int b[100][100];

    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;

    for(int i=0;i<n;i++){

       for(int j=0;j<n;j++){


           cin>>b[i][j];

  
 
       } 

       

     sum1+=b[i][0];
     sum2+=b[i][1];
     sum3+=b[i][2];
    
    

    }

    if(sum1==0 && sum2==0 && sum3==0){

        cout<<" YES";
    }
    else{
        cout<<" NO";
    }

    
}