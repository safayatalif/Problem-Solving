#include <stdio.h>
int main()
{
    long long int memo, momo , k;
    scanf("%lld %lld %lld", &memo, &momo, &k);
    if(memo % k == 0 && momo % k == 0){
        printf("Both\n");
    }
    else if(memo % k == 0){
        printf("Memo\n");
    }
    else if(momo % k == 0){
        printf("Momo\n");
    }
    else{
        printf("No One\n");
    }

    return 0;
}