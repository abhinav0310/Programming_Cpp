//Print all numbers till n in decreasing and increasing order

#include<iostream>
using namespace std;

void inc(int n){
    if(n==0)
    return;

    inc(n-1);
    cout<<n<<" "<<endl;

}
void dec(int n){
    if(n==1){
    cout<<"1"<<" ";
    return;
    }
    cout<<n<<" "<<endl;
    dec(n-1);
}



int main(){
    int n;
    cin>>n;
    inc (n);
    dec(n);
    return 0;

}

