#include<iostream>
#include<string>
using namespace std;

int main()
{
	string arr;
	cin>>arr;
	long long sum=0;
	long long cnt=0;
	for(int i=0; arr[i]!='\0';i++)
	{
		if(arr[i]==arr[i+1])
		{
			cnt++;
		}
		else
		{
			sum=max(sum,cnt);
			cnt=0;
		}
	}
	cout<<sum+1;
}
