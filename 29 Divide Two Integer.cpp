#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int divide(int dividend, int divisor) 
{
	const int max = 0x7fffffff;
	const int min = 0x80000000;
	int flag = 1;
	if (divisor == min && dividend == min)
	{
		return 1;
	}
	if ( divisor == min || dividend == 0)
	{
		return 0;
	}
	if (dividend == min && divisor==1)
	{
		return min;
	}
	if (dividend == min && divisor==-1)
	{
		return max;
	}

	if (dividend<0 && divisor>0 || dividend>0 && divisor<0)
	{
		flag = -1;
		divisor = -divisor;
	}

	if (divisor == 1)
	{
		return flag*dividend;
	}

	int totalRes = 0;


	while (1)
	{
		if (dividend>=0 && dividend<divisor || dividend<=0 && dividend>divisor)
		{
			break;
		}
		int sum = divisor;
		int res = 1;
		while (dividend>0 && sum < dividend>>1 || dividend<0 && sum > dividend>>1)
		{
			res = res<<1;
			sum = sum<<1;
		}
		totalRes+=res;
		dividend-=sum;
	}


	return flag*totalRes;
}


int main()
{
	int A,B;
	cin>>A>>B;

	cout<<divide(A,B)<<endl;
	cout<<A/B<<endl;
	return 1;
}