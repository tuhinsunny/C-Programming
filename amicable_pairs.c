#include<stdio.h>
 
int main() {
    int i,j,k,sum1=0,sum2=0;
    int n = 1000000;
    printf("All the Amicable pairs within 1 to 1000000 are :\n");
    for(i=1;i<n-1;i++) {
        for(j=i+1;j<n;j++){
            //finding the sum of proper divisors of i
            for(k=1;k<i;k++){
                if(i%k==0)
                sum1+=k;
            }
            if(sum1==j){
                //finding the sum of proper divisors of j
                for(k=1;k<j;k++){
                  if(j%k==0)
                  sum2+=k;
                }
                if(sum2==i){
                    printf("%d %d\n",i,j);
                }
            }
            sum1=0;
            sum2=0;
        }
    }
    return 0;
}