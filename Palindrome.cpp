#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n;
  //n needs to be stored in temp otherwise value of n will be changed which we dont want
    int reverse=0;
    int m;
    while(temp>0){
        m=temp%10;
        reverse=10*reverse+m;
        temp=temp/10;
    }
    
    if(n==reverse){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }

    return 0;
}
