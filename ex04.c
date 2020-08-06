#include <stdio.h>
int main(void){
    // Your code here!
    int i,num,heads=0,tails=0;
    
    char name[8];
    printf("Who are you?\n");
    scanf("%s",&name);
    printf("Hello %s!\n",name);
    
    for(i=0;i<3;i++){
        num=rand();
        if(num%2==0){
            printf("Round%d is head\n",i+1);
            heads++;
        }else{
            printf("Round%d is tail\n",i+1);
            tails++;
        }
    }
    printf("heads = %d  tails = %d\n",heads,tails);
    return 0;
}
