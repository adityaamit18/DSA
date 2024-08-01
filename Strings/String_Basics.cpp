#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    string str1(5 , 'n');
    cout<<str1<<endl;

    // string str2;
    // // cin>>str2; this wont take the spaces with it , so we use getline
    // getline(cin , str2);
    // cout<<str2<<endl;

    string str3="iggaaa";
    // str1.append(str3);
    // cout<<str1<<endl;
    cout<<str1+str3<<endl;
    cout<<str3[2]<<endl;

    string s1 = "abc";
    string s2 = "xyz";
    cout<<s2.compare(s1)<<endl;
    if (s1.compare(s2)==0)
    {
        cout<<"it is same";
    }
    else cout<<"they are differetn"<<endl;

    //for clearing and making string empty
    string s3="abc";
    cout<<s3;
    s3.clear();
    if (s3.empty())
    {
        cout<<"Value deleted"<<endl;
    }

    //erase
    string s4="nincompoop";
    s4.erase(3,3); // it will erase 3 characters from 3rd index i.e.com
    cout<<s4<<endl;
    
    string s5="nincompoop";
        
    //find
    cout<<s5.find('poop')<<endl; //will return the first index of the finding word

    //insert
    s5.insert(2,"LOL");
    cout<<s5<<endl;

    //length
    for(int i=0;i<s5.length();i++){
        cout<<s5[i]<<endl;
    }

    //substring
    string s51 = s5.substr(9,12);
    cout<<s51<<endl;

    //if a number is in string and you want to convert it in int
    string s6 = "123";
    int z = stoi(s6);
    cout<<z-3<<endl; //123-3=120

    //if you have opposite
    int x = 123;
    cout<<to_string(x)+"4"<<endl; //"123"+"4"=1234

    //sort
    sort(s5.begin(),s5.end());
    cout<<s5<<endl;

    string s7="bchfojkaa";
    sort(s7.begin(),s7.end());
    cout<<s7<<endl;


    return 0;
}

/*Output
nnnnn
nnnnniggaaa
g
1
they are differetn
abcValue deleted
ninpoop
6
niLOLncompoop
n
i
L
O
L
n
c
o
m
p
o
o
p
poop
120
1234
LLOcimnnooopp
aabcfhjko
*/
