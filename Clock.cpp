#include <stdio.h>
#include <string.h>

int main(){
    int T, mm, hh;
    char time[3];
    scanf("%d", &T);
    for (int i=0; i<T; i++){
        scanf("%d:%d %s", &hh, &mm, time); getchar();
        if(hh<=12 && mm<=59){
            if(strcmp(time,"pm")==0 && hh!=0 && hh!=12){
                hh=hh+12;
            }else if(strcmp(time,"am")==0 && hh==12){
            	hh=0;
        	}
        printf("Case #%d: %02d:%02d\n", i+1, hh, mm);
        }
    }
    return 0;
}
