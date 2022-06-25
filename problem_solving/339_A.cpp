#include<bits/stdc++.h>
using namespace std;



int main(){


string s;
cin>>s;
string newsum;

for(int i =0;i<s.size();i++){

    if (s[i]!='+'){

newsum.push_back(s[i]);


    }


}



    sort(newsum.begin(),newsum.end());

 cout<<newsum[0];
    for(int i=1;i<newsum.length();i++){

        cout<<"+"<<newsum[i];

    }
    
 
 
    }