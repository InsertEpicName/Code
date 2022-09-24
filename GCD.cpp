

#include <iostream>
#include <cmath>
using namespace std;
//GCD of (a,b) is the largest tile that can be used to construct an axb rectangle

int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    return (b,a%b);
}

int main()
{
  
  //Naive Approach.
  //WE choose the minimum number from them all and then start dividing and degrading the number by 1
    int a,b;
    cin>>a>>b;
    int res=min(a,b);
    
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    cout<<res<<endl;
  
  //A better solution can be by using the property of GCD
    return 0;
}
