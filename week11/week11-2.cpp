#include <stdio.h>
int a[10000000];
int main()
{
    printf("請問你想要幾個質數? (最大的質數不超過10000000，請給小一點)");
    int q;
    scanf("%d",&q);
    int ans=0;
    for(int i=2;ans<q;i++){
        if(a[i]==0){
                ans++;
            printf("%d ",i);
            for(int k=i+i;k<10000000;k+=i){
                a[k]=1;
            }
        }
    }
}


