#include <stdio.h>

int main(){
    int incoming, outgoing, buck_size, n, store=0;
    printf("Enter bucket size: ");
    scanf("%d",&buck_size);
    printf("Enter outgoing rate: ");
    scanf("%d",&outgoing);
    printf("Enter no. of inputs: ");
    scanf("%d",&n);
    
    while(n!=0){
        printf("Enter the incoming packet size: ");
        scanf("%d",&incoming);
        printf("incoming: %d\n",incoming);
        if(incoming <= buck_size - store){
            store+=incoming;
            printf("Bucket Buffer Size %d Out of %d \n ",store,buck_size);
        }        
        else{
            printf("Dropped %d no. of packets \n", incoming-(buck_size-store));
            printf("Bucket buffer size %d out of %d\n",store,buck_size);
            store=buck_size;
        }
        store=store-outgoing;
        if(store<0){
            store=0;
        }
        printf("After outgoing %d packets left out of %d in buffer\n",store,buck_size);
        n--;
    }

}