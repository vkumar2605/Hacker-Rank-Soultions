#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int d1; 
    int m1; 
    int y1; 
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2; 
    int m2; 
    int y2; 
    scanf("%d %d %d",&d2,&m2,&y2);
    
    if(y1==y2){
        if(m1==m2){
            if(d1<=d2){
                printf("0");
            }else{
                printf("%d\n",15*(d1-d2));
            }
        }else{
            if(m1<=m2){
                printf("0");
            }else{
                printf("%d\n",500*(m1-m2));
            }
        }
    }else{
        if(y1<y2){
            printf("0");
        }else{
            printf("10000");
        }
    }
    
    
    return 0;
}
