#include<bits/stdc++.h>
using namespace std;

int main(){



    pair<int,string> emon1;

    emon1=make_pair(2,"emon");
    cout<<emon1.first<<" "<<emon1.second<<endl;
    // arekvabe likha jay

pair<int,string>p;
    p={2,"abcd"};
p.first=3; // eta hobe na karon copy gese jodi ref dei tokhn seta kaj korbe 

    cout<<p.first<<" "<<p.second<<endl;

// p1.first diye change korbo &p1ref kore p ke change


pair<int,string> &p1=p;


p1.first=3;

cout<<p1.first<<" " <<p1.second<<endl; // p er first man ke change kore disse



cout<<"pair array relation"<<endl;
// pair  chaile duita te relation kora jay

pair <int,int>p_array[3];

p_array[0]={1,2};
p_array[1]={2,3};
p_array[2]={3,4};

for(int i=0;i<3;i++){

cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
} 


// so ekhn chaile amra pair array ke swap korte pari 

//swap korbo
cout<<"swap korar por"<<endl;

swap(p_array[0],p_array[2]);
for(int i=0;i<3;i++){

cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
} 


//pair cin korbo

cout<<"pair cin korbo"<<endl;



pair <string ,string> pabel;

cin>>pabel.first;
cin>>pabel.second;



cout<<"pabel full name is :"<<pabel.first<<" "<<pabel.second<<endl;

  


}
