#include <stdio.h>

long long int N, A[444444], M;
long long int pref[444444], ans = 0;

long long int max(long long int A, long long int B){
    return A>B ? A : B;
}

int main(){
    scanf("%lld", &N);
    A[0] = 0;
    
    for(long long int i=1; i<=N; i++) {
        scanf("%lld", &A[i]);
    }
    scanf("%lld", &M);
    pref[0] = 0;
    
    for(long long int i=1; i<=N; i++) {
        pref[i] = pref[i - 1] + A[i];
    }

    long long int l = N + 1;
    long long int r = N;
    long long int curr = 0;
    while(l > 0){
        if(l > r){
            while(l > r){
                l--;
            }
            curr = A[l];
        }
        else{
            while(curr > M && r > l) {
                int temp = pref[r] - pref[l - 1];
                r--;
                curr -= temp;
            }
            if(curr <= M) {
                ans = max(ans , curr);
            }
            l--;
            curr += (r - l + 1) * A[l];
        }
        if(curr <= M){
            ans = max(ans , curr);
        }
    }
    printf("%lld\n", ans);
	return 0;
}
