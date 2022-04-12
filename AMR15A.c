
#include <stdio.h>
     
int main(void) {
    int n,i,c1=0,c2=0; scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0) c1++;
        else c2++;
    }
    if(c1>c2) printf("READY FOR BATTLE\n");
    else printf("NOT READY\n");
	// your code goes here
	return 0;
} 