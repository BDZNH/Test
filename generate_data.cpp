#include<cstdio>
#include<ctime>
#include<cstdlib>
int main ()
{
	freopen("data.txt","w",stdout);
	srand(time(0));
	for(int i=0;i<10000000;i++)
		printf("%d ",rand());
	return 0;
}
