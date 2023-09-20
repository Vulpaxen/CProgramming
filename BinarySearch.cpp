#include <stdio.h>
#include <math.h>

int main(){
    long long int T, M;
    scanf("%lld", &T);
    int l=1;
    
    while(T--){
        scanf("%lld", &M);
        unsigned long long int i = cbrt(M*3);
        unsigned long long int sum = i*(i+1)*(2*i+1)/6;
        while(sum>M){
            i--;
            sum = i*(i+1)*(2*i+1)/6;
        }
        printf("Case #%d: %llu\n", l, i+1);
        l++;
    }
    return 0;
}
