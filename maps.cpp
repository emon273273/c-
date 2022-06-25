// maps are unordered

#include<bits/stdc++.h>
using namespace std;


void print(map<int,string>&m){

    cout<<m.size()<<endl;
    for(auto &pr:m){

    cout<<pr.first<<" "<<pr.second;
}
}
int main(){


map<int, string>m;

m[1]="emon";
m[5]="khalid";
m[6]="leeman";
m.insert({4,"arafat"});

// print(m);

//m.find()

 auto result=m.find(6);


if(result==m.end()){

    cout<<"no value";
}else{

    cout<<(*result).first<<" "<<(*result).second;
}

}