#include<iostream>
using namespace std;

int getsum(int n){
    int res=0;
    while (n>=0)
    {
        res=res+n%10;
        n=n/10;
        /* code */
    }
    return res;
    cout<<"23"<<endl;
}
int main(){
    cout<<getsum(253)<<endl;

    return 0;
}