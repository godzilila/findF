// findF.cpp : 定义控制台应用程序的入口点。
//

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
	for(int i=N;i>=F;i--)
	{
		if(sum[i]-sum[i-F]>ans)
			ans=sum[i]-sum[i-F];
	}
	printf_s("%.3f\n",(double)ans/(double)F);
	return 0;
}

