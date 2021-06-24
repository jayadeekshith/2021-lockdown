finding no. of string1 esists in string 2

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
string s,c;
cin>>s>>c;
int count=0;
sort(s.begin(),s.end());
sort(c.begin(),c.end());


int n1=s.length();
int n2=c.length();
int a[n1]={0};
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        if(c[j]==s[i]){
 a[i]++;  
        }
    
    }
    
}
sort(a,a+n1);
cout<<a[0];
return 0;
}
