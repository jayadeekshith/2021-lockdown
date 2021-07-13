//way 1 using ~

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
ll t;
cin>>t;
for(int i=2;i<=t;i=(-(~i))+1){
cout<<i<<" ";
}
return 0;

    
}

//way 2 using %2==0

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
ll t;
cin>>t;
for(int i=2;i<=t;i++){
if(i%2==0)
{
  cout<<i<<" ";
}
}
return 0;

    
}



//way 3 using +=2

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
ll t;
cin>>t;
for(int i=2;i<=t;i+=1){
cout<<i<<" ";
}
return 0;

    
}
