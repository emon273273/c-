#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>v={1,2,3};

//declaring an iterator
vector<int>:: iterator i;
 
 for(i=v.begin();i!=v.end();++i){

     cout<< *(i);
 }

//adding one more element to vector

v.push_back(4);
cout<<endl;
for( i=v.begin();i!=v.end();i++){
cout<<*(i);
}

}

