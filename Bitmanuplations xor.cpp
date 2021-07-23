//print lowest frequency element in array

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
int a[]={1,2,2,1,3,4,4,3,5,6,6};
int xo=0;
for(int i=0;i<11;++i){
    xo^=a[i];
}

return 0;
}

//print xor of all between 1 to n

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
int n;
cin>>n;
if(n%4==3) cout<<"0";

if(n%4==2) cout<<n+1;

if(n%4==1) cout<<'1';

if(n%4==0)cout<<n;
return 0;}


//xor in range

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int xorfu(int n){
    if(n%4==3) return 0;

if(n%4==2) return n+1;

if(n%4==1) return 1;

if(n%4==0) return n;

}
int main() {
int l,r;
cin>>l>>r;
cout<<(xorfu(l)^xorfu(r));
return 0;
}

//


