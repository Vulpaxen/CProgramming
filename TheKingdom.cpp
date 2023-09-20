#include <stdio.h>	
#include <string.h>

char grid[255][255];
int sum=0;

struct list{
    int a;//koordinat x
    int b;//koordinat y
    char c;//char
};
list data[27];//inisialisasi struct
list temp;

void bubbleSort(int n){//bubblesort sesuai abjad
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(data[j].c>data[j+1].c){
				temp.c=data[j].c;
				data[j].c=data[j+1].c;
				data[j+1].c=temp.c;
				temp.a=data[j].a;
				data[j].a=data[j+1].a;
				data[j+1].a=temp.a;				
				temp.b=data[j].b;
				data[j].b=data[j+1].b;
				data[j+1].b=temp.b;
			}
		}
	}	
}

void move(int x,int y){//untuk hitung area kerajaan
    if(grid[x][y]=='#'||grid[x][y]=='\n'||grid[x][y]=='\0'){
        return;
    }
	else if(grid[x][y]=='.'){
		sum++;
	}
	
    grid[x][y]='#';
    move(x+1,y);
    move(x-1,y);
    move(x,y+1);
    move(x,y-1);
}

int main(){
    int n, m;
    int count=0;
    scanf("%d %d", &n, &m);//scan besar peta
    getchar();
	
    for(int i=0;i<n;i++){//loop untuk scan grid kerajaan dan koordinat
        for(int j=0;j<n;j++){
            scanf("%c", &grid[i][j]);
            if(grid[i][j]>46){
                data[count].a=i;
                data[count].b=j;
                data[count].c=grid[i][j];
                count++;
            }
        }
		getchar();
    }
    bubbleSort(m);//bubblesort kerajaan berdasarkan abjad
    
    for(int i=0;i<m;i++){//untuk output kerajaan dan banyak area
	    move(data[i].a,data[i].b);
    	printf("%c %d\n", data[i].c, sum+1);   
  		sum=0;  					
	} 

    for(int i=0;i<255;i++){
        for(int j=0;j<255;j++){
            grid[i][j]='\0';
		}
	}
    return 0;
}
