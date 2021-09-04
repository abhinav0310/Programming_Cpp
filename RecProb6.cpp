//remove all duplicates from the string

#include<iostream>
using namespace std;

string remdup(string s){
    if(s.length()==0)
    return " ";

    char ch=s[0];

    string ans= remdup(s.subtr(1));

    if(ch==ans[0])
    return ans;

    else
    return (ch+ans);

}

int main(){
    string s;
    cin>>s;
    cout<<remdup(s)<<endl;

    return 0;
}