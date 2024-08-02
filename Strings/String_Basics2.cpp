#include<bits/stdc++.h>
using namespace std;

int main(){

string s1="adbaf";

cout<<'a'-'A'<<endl; // this is equal to 32

//convert all in upper case
for(int i=0;i<s1.size();i++){
    if(s1[i] >= 'a' && s1[i]<='z')
    s1[i] = s1[i] - 32; //s1[i] -= 32;
}
cout<<s1<<endl;

// convert in lower case
for(int i=0;i<s1.size();i++){
    if(s1[i] >= 'A' && s1[i]<='Z')
    s1[i] = s1[i] + 32; //s1[i] += 32;
}
cout<<s1<<endl<<endl;

string s="hello";

transform(s.begin(),s.end(),s.begin(), ::toupper); //transform(it first, it last , from where you need to start , lower/upper case)
cout<<s<<endl;

transform(s.begin(),s.end(),s.begin(),::tolower);
cout<<s<<endl<<endl;

//decreasing order
string ss="1234567812596787";
sort(ss.begin(),ss.end(),greater<int>());
cout<<ss<<endl<<endl;

return 0;
}

/*Output
32
ADBAF
adbaf

HELLO
hello

9887776655432211
*/
