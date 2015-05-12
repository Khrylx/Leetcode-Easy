#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int divide(int dividend, int divisor) 
{
	const int max = 0x7fffffff;
	const int min = 0x80000000;
	int sign1 = dividend>0 ? 1:-1;
	int sign2 = divisor>0 ? 1:-1;

	if (divisor == min)
	{
		return 0;
	}

	if (dividend == min)
		dividend = max;
	else
		dividend*=sign1;

	divisor*=sign2;

	if (divisor == 0)
	{
		return max;
	}

	if (divisor == 1)
	{
		return sign1*sign2*dividend;
	}

	int totalRes = 0;
	

	while (1)
	{
		if (dividend<divisor)
		{
			break;
		}
		int sum = divisor;
		int res = 1;
		while (sum < dividend>>1)
		{
			res = res<<1;
			sum = sum<<1;
		}
		totalRes+=res;
		dividend-=sum;
	}


	return sign1*sign2*totalRes;
}

int main()
{
	int A,B;
	cin>>A>>B;
	A=-2147483648; B= -1;

	cout<<divide(A,B)<<endl;
	cout<<A/B<<endl;
	return 1;
}