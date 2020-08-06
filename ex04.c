#include <stdio.h>
int main(void){
    // Your code here!
    int i,num,heads=0,tails=0;
    

    char name[8];
    printf("Who are you?\n");
    scanf("%s",&name);
    printf("Hello %s!\n",name);
  
     int choice;
    printf("Which is win do %s think heads or tails?\n",name);
    printf("Take 0 if %s think heads will win, take 1 if you think tails will win.\n",name);
    scanf("%d",&choice);
    
    if(choice == 0){
        printf("%s think heads will win.\n",name);
    }else if(choice == 1){
        printf("%s think tails will win.\n",name);
    }
    
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
    
    if(heads>tails){
        if(choice == 0){
            printf("%s won!",name);
        }else if(choice == 1){
            printf("%s lost...",name);
            }
    }
    if(heads<tails){
        if(choice == 1){
            printf("%s won!",name);
        }else if(choice == 0){
            printf("%s lost...",name);
        }
    }
    return 0;
}
