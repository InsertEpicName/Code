#include <iostream>

using namespace std;

int main()
{
    //Check whether kth bit in a given number is set or not
    int n,k;
    cin>>n>>k;
    if(n&(1<<(k-1))!=0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }  if((n>>(k-1))&1!=0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
  
  //OR better yet
    if((n>>(k-1))&1!=0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    return 0;
}
