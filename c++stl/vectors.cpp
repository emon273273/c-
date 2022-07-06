#include<bits/stdc++.h>

using namespace std;


void printvec(vector<int>&  v){

cout<<"size :"<<v.size()<<endl;

for(int i=0;i<v.size();i++){

cout<<v[i]<<" "<<endl;}
}


void printst(vector<string>&st){

cout<<"size of string"<<st.size()<<endl;

cout<<endl;

for(int i=0;i<st.size();i++){

cout<<st[i]<<" "<<endl;
}

}

int main(){


//declare vectors
vector<int>v; // current memory 0;

/*
int n;

cin>>n;

for(int i=0;i<n;i++){

int x;

cin>>x;

printvec(v);
v.push_back(x); }//o(1)


printvec(v);

*/

// age theke declare kore dibo

vector<int>v1(5); // prothom ta size and auto sob o bose jabe
v1.push_back(7);//0 0 0 0 0 7 // 5 ta 0 er por 7 print hobe
printvec(v1);

cout<<endl;
vector<int> v2(10,20); // 10 ta index 20 dara fill hoye jabe

printvec(v2);

cout<<"pop korar por"<<endl;

v2.pop_back();
printvec(v2);


// vector copy

cout<<"vector copy"<<endl;

vector<int>&v3=v2; //o(n) and & deyar fole ami ekhon theke jekono aktay change hole dutotei change hobe


v3.push_back(5);
v2.push_back(6);
cout<<"v3 "<<endl;

printvec(v3);
cout<<"v2"<<endl;

printvec(v2);

cout<<"string data type"<<endl;

vector<string>st;

int n;
cin>>n;
for(int i=0;i<n;i++){

string s;
cin>>s;
st.push_back(s);
}

printst(st);



} 
