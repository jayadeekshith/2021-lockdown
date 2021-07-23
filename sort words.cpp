//example input he is a 
//example output a he is

//vectors approch

#include<bits/stdc++.h>
using namespace std;

int main() {
std::vector<string> v;
string s;

while(cin>>s){
    v.push_back(s);
}
sort(v.begin(),v.end());
for(auto it:v){
    cout<<it<<" ";
}
return 0;

}

//maps approch
#include<bits/stdc++.h>
using namespace std;

int main() {
map<string, int> m;
string s;
while(cin>>s){
     m.insert(pair<string, int>(s,0));
}
for(auto it:m){
    cout<<it.first<<" ";
}
return 0;
}
