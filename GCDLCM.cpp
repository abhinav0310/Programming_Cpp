#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int rem= a%b;
        a=b;
        b=rem;
    }
    return a;
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"GCD = "<<gcd(a,b)<<endl;
    cout<<"LCM = "<<lcm(a,b)<<endl;

    return 0;
}