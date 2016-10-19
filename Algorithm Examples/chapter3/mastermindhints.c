//实现经典的“猜数字”游戏，给定答案序列和用户猜的序列，统计有多少个字正确，多少个字在两个序列中都出现过但位置不对
//uva340	用数组统计
#include <stdio.h>
#define MAXN 1000+10
int a[MAXN],b[MAXN];
int main () {
	freopen("mastermindhints.in","r",stdin);
	freopen("mastermindhints.out","w",stdout);
	int n,kase=0;
	while (scanf("%d",&n)==1 && n) {
		printf("Game %d:\n",++kase);
		for (int i=0; i<n; i++) scanf("%d",&a[i]);
		for(;;) {
			//while (b[0]!=0) {
			int A=0,B=0;
			for (int i=0;i<n;i++) {
				scanf("%d",&b[i]);
				if(a[i]==b[i]) A++;
			}
			if(b[0]==0) break;
			for (int d=1;d<=9;d++) {
				int c1=0,c2=0;
				for (int i=0;i<n;i++) {
					if(a[i]==d) c1++;
					if(b[i]==d) c2++;
				}
				if(c1<c2) B+=c1; else B+=c2;
			}
			printf("	(%d,%d)\n",A,B-A);
			
		}
	}
	
	return 0;
}
