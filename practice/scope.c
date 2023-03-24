#define MAX 2
int y=20;
static int m=100;//globally declared
int main()
{
	static int m=2;
	int x=5;
	int a[1]={2};
#ifdef MAX
	x=x+MAX;
#else
	x=x-MAX;
#endif
	return 0;
}
