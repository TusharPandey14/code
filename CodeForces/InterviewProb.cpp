#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int k; cin>>k;
        string s;
        cin>>s;
        string fb;
        for(int i=1;i<=2046;i++){
            if(i%3==0 && (i%5!=0))fb+="F";
            else if((i%3!=0) && i%5==0 )fb+="B";
            else if((i%3==0) && (i%5==0)) fb+="FB";
        }
        if (fb.find(s) != std::string::npos) 
        cout << "YES" << '\n';
        else cout<<"NO"<<endl;
    }
    return 0;
}