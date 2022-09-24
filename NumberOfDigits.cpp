#include <iostream>

using namespace std;
int ctt;
int recursiveCount(int n){
    if(n==0){
        return 0;
    }
    ctt++;
    return recursiveCount(n/10);
}



// int numOfDigits(int n){
// return floor(log(10*n)+1)    
// }


int main()
{
    int n;
    cin>>n;
    int ct=0;
    while(n--){
        n=n/10;
        ct++;
    }
    cout<<ct<<endl;
    recursiveCount(123944);
    cout<<ctt<<endl;

    return 0;
}
