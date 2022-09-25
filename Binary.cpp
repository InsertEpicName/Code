#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int rev=0;
    int m;
    while(n>0){
        m=n%2;
        rev=10*rev+m;
        n=n/2;
    }
    cout<<rev<<endl;
  
  
    //bitwise not ~
    cout<<~(12345678)<<endl;

    return 0;
}
