//输入包含多组数据，每组数据第一行是整数个数n，第二行是n个整数，n=0为输入结束标记，程序应忽略这组数据。
//相邻两个数据间应输出一个空行。求他们的最大最小平均值
#include <stdio.h>
#define INF 100000000
int main () {
	int x,n=0,kase=0;
	while (scanf("%d",&n)==1 && n) {
		int s=0,min=INF,max=-INF;
		for (int i=0;i<n;i++) {
			scanf("%d",&x);
			s+=x;
			if(x<min) min=x;
			if(x>max) max=x;
		}
		if(kase) printf("\n");
	    printf("Case %d: %d %d %.3f\n",++kase,min,max,(double)s/n);
	}
	return 0;
}