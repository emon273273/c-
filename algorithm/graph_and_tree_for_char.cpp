#include<iostream>
using namespace std;

int matrix[10][10];

 void immatrix(int e){


int i ;
char j,k;

for(i=0;i<e;i++){

    cin>>j>>k;

    matrix[(int)j-65][(int)k-65]=1;
    matrix[(int)k-65][(int)j-65]=1;




}
}

int main(){


int e=7, n=5;
    cin>>n>>e;



    immatrix(e);


    cout<<"output"<<endl;

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            cout<<matrix[i][j];

        }

        cout<<endl;
    }

}
