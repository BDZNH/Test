#include<cstdio>
#include<ctime>
int a[10000000];
int main ()
{
	int start = clock();
	freopen("data.txt","r",stdin);
	for(int i=0;i<10000000;i++)
		scanf("%d",&a[i]);
	printf("%.3lf\n",double(clock()-start)/CLOCKS_PER_SEC);
}
