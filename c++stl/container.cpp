// why do we write #include <bits/stdc++.h>
// because it has all things in all 

#include<bits/stdc++.h>


using namespace std;

int main(){




// //array declare globally vs locally

// array<int,3> arr; // -> {0,00,}
// // declares array in globally it becomes automatically value all in 0
// int main(){

//   //array

// array <int,3> arr; //-> local hisebe korle ekhane sob garbage value thakbe 

    
//     array<int,5>arr1={1,5,6};  //-> [1,5,6,0,0] 
//     //but declare kore  dile tokhn baki element a auto 0 asbe


// // so ami jdi evabe array ke declare korte chai amake oboshoi ei kaj korte hbe je prothom value 0 diye rakhte hbe tahole bakiguli auto 0

// array<int,3>arr2={0};//->[0,0,0]

//  int arr5[100]={0}; // ->[0,0 ... ... ]
//     for ( auto a : arr5){
//         cout<<a;
//     }



    // othoba chaile amra fill function diyeo korte pari

//     array<int,5>arr6;

//     arr6.fill(10);

    
//  // ->[0,0 ... ... ]
//     for ( auto a : arr6){
//         cout<<a;
//     }


// arr6.at(4);



//itetors

//begin(), end(),rbegin(),rend()

//rbegin() -> reverse begin

//end()-> it is point right after the last element

//rend()-> it is point first of the left element



// array<int ,5> arr={1,2,3,4,5};




// for(auto it =arr.rbegin();it!=arr.rend();it++){

//     cout<<*it;

    
// }

//arek method

// for(auto it:arr.end()-1;it<arr.begin();it--){

//     cout<<*it<<endl;
// }



// //arekta method


// //it is like for each loop
// for(auto it: arr){
  
//     cout<<it<<" ";
// }
// cout<<endl;

// string s="emon sab";

// for(auto c:s){

//     cout<<c<<" ";
// }

// //print size
// cout<<endl;
// cout<<arr.size()<<endl;

// cout<<arr.begin()<<endl;
// cout<<arr.front()<<endl;
// cout<<arr.back()<<endl;

// cout<<arr.end()<<endl; //basically eta adress dibe


/////////////////////////////////



//vector 
 
// at max it can be (1000000) or 10^6 ->int , double char anything is the maximum size

// globally eta  
//10^7 hbe 
// if data type is bollean 10^7 and globally hole 10^8


// vector <int>arr; // size of 0 is created or empty vector is created {}

// arr.push_back(10);
// arr.push_back(20);
// arr.push_back(10);
// arr.push_back(20);
// arr.push_back(10);
// arr.push_back(20);
// arr.push_back(10);
// arr.push_back(20);
// arr.push_back(10);
// arr.push_back(20);
// arr.pop_back();// pop out the last element


// segmentation fault means if you push_back 10^7


// cout<<arr.size()<<endl;

// arr.clear(); // erase all element

// cout<<arr.size();


// vector<int>vec1(4,0);// {0,0,0,0}
// vector<int>vec2(4,10);// {10,10,10,10}


// //copy of vector array
// vector<int>vec3(vec2.begin(),vec2.end())
//or
// vector<int>vec3(vec2);


// vector <int>arr; // size of 0 is created or empty vector is created {}

// arr.push_back(10); //arr.emplace_back(1);// emplace_back is takes lesser time than push_back()
// arr.push_back(20);
// arr.push_back(100);
// arr.push_back(200);
// arr.push_back(103);
// arr.push_back(205);
// arr.push_back(106);
// arr.push_back(208);
// arr.push_back(108);
// arr.push_back(206);


// // vector er element 205 pojjonto chaile

// // 205 er index 6

// vector<int>emon(arr.begin(),arr.begin()+6); 

// for(auto a: emon){

//     cout<<a<<" ";
// }



// to defining 2D vectors

// vector<vector<int>>emon;

// vector<int>emon1;
// emon1.push_back(10);
// emon1.push_back(20);

// vector<int>emon2;
// emon2.push_back(30);
// emon2.push_back(40);

// vector<int>emon3;
// emon3.push_back(50);
// emon3.push_back(60);
// emon3.push_back(70);

// emon.push_back(emon1);
// emon.push_back(emon2);
// emon.push_back(emon3);
// for(vector<int>vect:emon){

// //     for(int x: vect){

// //         cout<<x<<" ";
// //     }
// // }


// // cout<<"arekta way "<<endl;
// // for(auto i: emon){

// //     for(auto it:i){

// //         cout<<it<<" ";
// //     }
// //     cout<<endl;
// // }


// //traditional way

// for(int i=0;i<emon.size();i++){
// for(int j=0;j<emon[i].size();j++){

//     cout<<emon[i][j]<<" ";
// }
// cout<<endl;

// }

// }



// define 2d vectors

//  vector<vector<int>>vec1;


// vector<int>emon1;

// emon1.push_back(1);
// emon1.push_back(2);

// vector<int>emon2;
// emon2.push_back(3);
// emon2.push_back(4);
// emon2.push_back(5);



// vec1.push_back(emon1);
// vec1.push_back(emon2);

// for(auto vctr: vec1){

//     for(auto it:vctr ){

//         cout<<it<<" ";
//     }
//     cout<<" "<<endl;
    
// }


// other way loop


// for(int i=0;i<vec1.size();i++){

//     for(int j=0;j<vec1[i].size();j++){

//         cout<<vec1[i][j]<<" ";
//     }
//     cout<<endl;
// }




// define 5 x 20 

// vector <vector<int>>vec(5,vector<int>(20,0));

// for(auto vect:vec){

//     for(auto it: vect){

//         cout<<it<<" ";
//     }
//     cout<<endl;
// }


// vector<int>arr[4]; // prottekta element a vector type hobe
 



// 3D vectors

// 10 x 20 x 30 int arr[10][20][30]

 

}


