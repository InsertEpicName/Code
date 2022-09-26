//My solution 
#include <iostream>
using namespace std;

bool set1 (long long int a,long long int b,long long int x){
    while(a<=b){
        if(a==b){
            return true;
        }
        a=a+x;
        b=b-x;
    }
    return false;
}

bool set2 (long long int a,long long int b,long long int x){
    while(a>=b){
         if(a==b){
            return true;
        }
        a=a-x;
        b=b+x;
    }
    return false;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int a,b,x;
	    cin>>a>>b>>x;
	    if(set1(a,b,x) || set2(a,b,x)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}


//Optimized solution
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,x;
	    cin>>a>>b>>x;
	    if(abs((a-b)%(2*x))==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
