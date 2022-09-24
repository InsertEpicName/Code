#include <iostream>
#include <cmath>
using namespace std;

// int pow(int a,int b){
//     int prod=1;
//     for(int i=1;i<=b;i++){
//         prod*=a;
//     }
//     return prod;
// }

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    int zer=0;
    int temp=factorial(n);
    while(temp%10==0){
        zer++;
        temp/=10;
    }
    cout<<zer<<endl;
    
    //More efficient method
    int zer1;
    for(int i=5;i<=n;i=i*5){
        zer1=zer1+n/i;
    }
    cout<<zer<<endl;
    return 0;
}
