#include<bits/stdc++.h>

using namespace std;




//display function for vector 

void printvec(vector<int>v){

cout<<"size is "<<v.size()<<endl;

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<endl;

    }
}







int main(){


    // pair<int,string>p;

    // p=make_pair(2,"abc");


// p={2,"abc"};

// pair<int,string>&p1=p;
// p1.first=3;
//     cout<<p1.first<<endl;


// array swap in pair

// int a[]={1,2,3};

// int b[]={2,3,4};

// pair<int,int>p_array[3];
// p_array[0]={1,2};
// p_array[1]={2,3};
// p_array[2]={3,4};
// swap(p_array[0],p_array[2]);

// for(int i=0;i<3;++i){

//     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;

// }




//vectors

vector<int>v;
//eta ekta dynamic vector


int n;

cin>>n;
for(int i =0;i<n;i++){

    int x;
    cin>>x;
    v.push_back(x); // vector er end a jabe


}



printvec(v);


 



}


