a number is abn if its idex place no. is eqal to number of digits present in it

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
string s;
cin>>s;
int count2=0,count,n=s.length();
for(int j=0;j<n;j++){
    count=0;
for(int i=0;i<n;i++){
    if(s[i]-'0'==j){
        count++;
    }
}
    if(count==s[j]-'0'){
if(j>0)
count2++;
continue;
    }
    else cout<<"no";
    break;
}
 if(count2==n-1)
    for(int i=1;i<n;i++){
        cout<<s[i];
    }

    
}
