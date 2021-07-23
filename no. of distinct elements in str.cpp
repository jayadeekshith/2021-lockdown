#include<bits/stdc++.h>
using namespace std;

int main() {
string s;
cin>>s;
std::set<char> c(s.begin(),s.end());
int a=s.length(),b=c.size();
if(a==b) cout<<'0';
else if(a>b)cout<<a-b;

  return 0;
}
