#include <stdio.h>

int main(){
  int K, F0, F1;
  scanf("%d %d", &F0, &F1);
  int next = F0+F1;
  scanf("%d", &K);

  for (int i=3; i<=K; ++i){
    F0 = F1;
    F1 = next;
    next = F0+F1;
  }
  printf("%d\n", next);
  return 0;
}
