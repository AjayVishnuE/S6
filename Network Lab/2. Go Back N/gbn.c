#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int nf,N,nt=0,i=1;
    srand(time(NULL));
    printf("Enter the no. of frames: ");
    scanf("%d", &nf);
    printf("Enter the window size: ");
    scanf("%d", &N);    

    while (i<=nf)
    {
        int x=0;
        for(int j=i; j < i+N &&  j <= nf; j++){
            printf("Sent Frame: %d \n", j);
            nt++;
        }
        for(int j=i; j < i+N &&  j <= nf; j++){
            int flag=rand()%2;
            if(flag){
                printf("%d: Acknowledged..\n",j);
                x++;
            }
            else{
                printf("Frame %d NOT Received..\n",j);
                printf("Retransmitting Window.\n");
                break;
            }
        }
        printf("\n");
        i+=x;
    }
    printf("Total no. of transmissions: %d\n",nt);
    return 0;
}