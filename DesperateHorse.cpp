#include <stdio.h>

int min, AX, AY;
void rec(int BX, int BY, int move)
{
    if(move >6 ||BX <1 ||BX >8 ||BY <1 ||BY>8){
    return;
	}
    
    if(BX ==AX && BY==AY)
    {
        if(move <min)
        {
            min =move;
        }
        return;
    }

    rec(BX + 1, BY + 2, move + 1);
    rec(BX + 1, BY - 2, move + 1);
    rec(BX - 1, BY + 2, move + 1);
    rec(BX - 1, BY - 2, move + 1);
    rec(BX + 2, BY + 1, move + 1);
    rec(BX + 2, BY - 1, move + 1);
    rec(BX - 2, BY + 1, move + 1);
    rec(BX - 2, BY - 1, move + 1);
}

int main()
{
    int T;
    scanf("%d", &T); 
	getchar();
	
    for(int i=1; i<=T; i++)
    {
        char c1, c2;
        int y;
        min = 7;
        scanf("%c%d %c%d", &c1, &y, &c2, &AY); 
		getchar();
		
        int x = c1 - 'A' + 1;
        AX = c2 - 'A' + 1;
        rec(x, y, 0);
        printf("Case #%d: %d\n", i, min);
    }

return 0;
}

