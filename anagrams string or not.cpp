#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
string a,b,c;
cin>>a>>b;
c=a;
sort(c.begin(),c.end());
reverse(a.begin(),a.end());
sort(b.begin(),b.end());
if(c==b)
{
    cout<<a;
}
else
cout<<"no";
	return 0;
}
