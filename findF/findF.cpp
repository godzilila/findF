#include "stdafx.h"
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int N,F;
	int num[101],sum[101];
	memset(num,0,sizeof(num));
	memset(sum,0,sizeof(sum));
	cin>>N>>F;
	double ans=0;
	for(int i=1;i<N+1;i++)
	{
		cin>>num[i];
		sum[i]=sum[i-1]+num[i];
	}
	for (int j = N; j >= F; j--)
	{
		for (int i = N; i >= j; i--)
		{
			if (((double)(sum[i] - sum[i - j])/(double)j) > ans)
				ans = ((double)(sum[i] - sum[i - j]) / (double)j);
		}
	}
	
	printf_s("%.3f\n",ans);
	return 0;
}
