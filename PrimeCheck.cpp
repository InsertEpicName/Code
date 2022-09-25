

#include <iostream>

using namespace std;

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
       if(n%i==0)
       return false;
    }
    return true;
}

bool isPrimeOptimized(int n){
    if(n==1){
        return false;
    }
    else if(n==2 || n==3){
        return true;
    }
    else if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
//Almost 3 times faster than the regular implementation

int main()
{
    
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}
