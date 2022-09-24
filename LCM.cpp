#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    return (b,a%b);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int res=max(a,b);
    
    while(1){
        if(res%a==0 && res%b==0){
            break;
        }
        res++;
    }
    cout<<res<<endl;
    cout<<gcd(4,6)<<endl;
    return 0;
}
