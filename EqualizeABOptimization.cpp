You are given two numbers AA and BB along with an integer XX. In one operation you can do one of the following:

Set A = A + XA=A+X and B = B - XB=B−X
Set A = A - XA=A−X and B = B + XB=B+X
Determine if you can make AA and BB equal after applying the operation any number of times (possibly zero).

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers A, BA,B and XX — the parameters mentioned in the statement.
Output Format
For each test case, output YES if you can make AA and BB equal after applying the operation any number of times (possibly zero). Otherwise, output NO.

You can output each letter in any case i.e. YES, yes, yEs are all considered the same.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq A, B, X \leq 10^91≤A,B,X≤10 
9
 
Sample 1:




























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
