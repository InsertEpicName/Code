#include <iostream>
#include <vector>
using namespace std;
bool isPrimey(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    //Print all the prime numbers that are smaller than or equal to n
    for(int i=2;i<=n;i++){
        if(isPrimey(i)){
            cout<<i<<endl;
        }
    }
    
    //Other method for this is seive of eratothenes
    vector <bool> isPrime (n+1,true);
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=2*i;j<=n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            cout<<i<<endl;
        }
    }
    
    
    return 0;
}
