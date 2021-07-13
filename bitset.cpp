#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n ;
  cin>>n;
  string s = bitset<64> (n).to_string();
  const auto loc1 = s.find('1');
  
  if(loc1 != string::npos)
    cout<<s.substr(loc1);
  
  

  return 0;
}
