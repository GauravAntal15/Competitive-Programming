// intial sum of array = 1+2+3+4+5=15
// when we update all elements to 4 sum of array is 4+4+4+4+4=20 which is greater than 15
// note when we update element 3 then sum is 15 which is not greater than 15
// so 4 is the minimum value to which array elements need to be updated.
#include<bits/stdc++.h>
using namespace std;

int main() {
	int num,length;
	cin >> length;										int sum=0;
	for(int i=1;i<=length;i++)
	{
		cin>>num;
		sum += num;
	}
	int x = (sum/length)+1;
	cout<<x<<endl;
	return 0;
}
