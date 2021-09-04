//Move all x in string to the end of the string

#include<iostream>
using namespace std;

string moveX(string s){
    if(s.length()==0)
    return "";

    char ch=s[0];

    string ans=moveX(s.substr(1));

    if(ch=='x')
    return ans+ch;

    else
    return ch+ans;
}

int main(){
    string s;
    cin>>s;
    cout<<moveX(s)<<endl;
    return 0;
}