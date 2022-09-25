#include <iostream>

using namespace std;

int main()
{
    //Check whether kth bit in a given number is set or not
    int n;
    cin>>n;
    int ctr=0;
    while(n>0){
        if((n&1)!=0){
            ctr++;
        }
        n=n>>1;
    }
    cout<<ctr<<endl;
    
    
    return 0;
}
