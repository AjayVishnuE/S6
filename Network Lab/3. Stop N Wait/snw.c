#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, nf, x, x1=10, x2;
    printf("Enter the no. of frames: ");
    scanf("%d", &nf);
    while(nf>0){
        printf("\n Sending Frame %d ",i);
        srand(x1++);
        int flag = rand()%10;
        if(flag%2==0){
            for(x2=1;x2<2;x2++){
                printf("\nWaiting for %d second0s\n", x2);
                sleep(x2);
                printf("Missing Acknowledgement %d",i);
            }
            printf("\nSending Frame %d ", i);
            srand(x1++);
            x=rand()%10;
        }
        printf("\n Acknowledgement Received for frame %d", j);
        nf-=1;
        j++;
        i++;
    }
    printf("End");
    return 0;
}