//siveve prime is used
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int primeor(int n){
    if (n==1) return 0;
     if(n==2) return 1;
      if(n%2==0) return 0;
         if(n==3) return 1;
           if(n%3==0) return 0;
            for(int i=5;i<=sqrt(n);i+=2){
              if(n%i==0){
                 return 0;
        
                  break;
              }
    }
return 1;
    
}
int main(){
    int a;
    cin>>a;
    int count=0;
for(int i=1;i<=sqrt(a);i++){

    if(primeor(i)){
        
        if((i*i)<=a){
            count++;
        }
    }
    
    
}
cout<<count;

 return 0;
}
