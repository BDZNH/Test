#include<cstdio>
#include<ctime>
#include<iostream>
int a[10000000];
int main ()
{
	int start = clock();
	std::ios::sync_with_stdio(false);
	freopen("data.txt","r",stdin);
	for(int i=0;i<10000000;i++)
		std::cin>>a[i];
	printf("%.3lf\n",double(clock()-start)/CLOCKS_PER_SEC);
}
