#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long sum=0;
	for(int i=1; i<=n; i++)
	{
		sum+=i;
	}
	long long sum1=0;
	for(int i=1; i<n; i++)
	{
		long long x;
		cin>>x;
		sum1+=x;
	}
	cout<<sum-sum1;
}
