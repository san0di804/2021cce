#include <stdio.h>
int main()
{
    int a,b;
	scanf("%d %d",&a,&b);
	int c=a%b;

	printf("a�O�j��%d b�O����%d c�O�p��%d\n",a,b,c);
	while(1){
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
    printf("a�O�j��%d b�O����%d c�O�p��%d\n",a,b,c);
	}
	printf("�]��c�O0,���}�j��,�ӥB���׬O������b\n");
	printf("%d",b);
}
