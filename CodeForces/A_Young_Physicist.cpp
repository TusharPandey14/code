// .............................
using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
     // col =3 , row=n;
    int row; cin>>row;
    vector<vector<int>> matrix(row,vector<int>(3));
    for(int i=0;i<row;i++){
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
    
    

}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    solve();
    return 0;
}