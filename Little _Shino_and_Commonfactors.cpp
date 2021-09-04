//The common factors of 10 and 15  are 1 and 5. so out put is 2 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// Function to calcutlate gcd of two numeber

ll gcd(ll a, ll b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);	
}
// Function to calculate all common divisors of two number
// a,b --> input integer numbers

ll commDiv(ll a,ll b){
  // find gcd of a,b
	ll n = gcd(a,b);
  //count divisors of n.
	int result = 0;
	for(int i=1;i<= sqrt(n);i++){
    //if 'i' is factor of n 
		if(n%i==0)
      //check if divisors are equal
		{ if(n/i==i)
		    result +=1;
		  else
		    result +=2;   
		}
	}
	return result;
}

int main(){
	ll a,b;
	cin>> a>>b;
	cout<< commDiv(a,b);
	return 0;
}
