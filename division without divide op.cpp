#include<bits/stdc++.h>
using namespace std;
int ans(int &a,int &b){
   int count=0;
    while(a>=b){
    
        a=a-b;
  count++;
    }
    return count;
}
int main() {
int a,b;
cin>>a;
cin>>b;
cout<<ans(a,b);
return 0;
}
