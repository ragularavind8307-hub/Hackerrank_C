#include <stdio.h>
void calculate_the_maximum(int n, int k) {
    int cand=0,cor=0,cxor=0;
    for(int a=1;a<n;a++){
        for(int b=a+1;b<=n;b++){
            if(((a&b)<k) & (cand<(a&b)))
                cand=(a&b);
            if (((a|b)<k) & (cor<(a|b)))
                cor=(a|b);
            if (((a^b)<k) & (cxor<(a^b)))
                cxor=(a^b);
        }
    }
    printf("%d\n%d\n%d\n",cand,cor,cxor);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
