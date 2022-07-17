#include<bits/stdc++.h>
using namespace std;

void setzeros(vector<vector<int>>&matrix){

const int H=matrix.size();
const int W=matrix[0].size();



;
// cout<<" H is "<<H<<endl;

// cout<<" W is "<<W<<endlvector<bool>row_zero(H);
vector<bool>colmn_zero(W);
for(auto i: colmn_zero){

	cout<<i<<endl;
}
vector<bool>row_zero(H);
for(int row=0;row<H;row++){
for(int col=0;col<W;col++){

if(matrix[row][col]==0){

row_zero[row]=true;
colmn_zero[col]=true;

}
}
    }

for(int row=0;row<H;row++){
for(int col=0;col<W;col++){

if(row_zero[row] or colmn_zero[col]==true){

matrix[row][col]=0;


}
}}

}


 int main(){

 	vector<vector<int>>matrix{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

int n=matrix.size();
int m=matrix[0].size();
// cout<<m<<endl;
// cout<<n<<endl;

setzeros(matrix);
for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

 }