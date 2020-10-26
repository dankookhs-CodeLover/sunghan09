#include <stdio.h>
int main() {
	int max=-1000000, min=1000000, num,tar;
	scanf("%d",&num);
	for (int i=0; i < num; i++) {
		scanf("%d",&tar);
		if (tar > max) max = tar;
		if (tar < min) min = tar;
	}
	printf("%d %d",min,max);
}
return 0;
