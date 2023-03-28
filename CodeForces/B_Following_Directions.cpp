#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        int x=0,y=0;
          for(int i=0;i<n;i++)
          {
            // FOR UP DIRECTION
            if(s[i]=='U') { y++; 
              if(x==1 && y==1)
               {
                flag=1; break;
              }
            }     
            // FOR RIGHT DIRECTION
            else if(s[i]=='R') { x++; 
              if(x==1 && y==1)
               {
                flag=1; break;
              }
            }  
            // FOR DOWN DIRECTION
            else if(s[i]=='D') { y--; 
              if(x==1 && y==1)
               {
                flag=1; break;
              }
            }   
            // FOR LEFT DIRECTION
            else if(s[i]=='L') { x--; 
              if(x==1 && y==1)
               {
                flag=1; break;
              }
            }     
          }
          
        //  cout<<x<<" "<<y<<endl;
          if(flag) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
    }
    return 0;
}