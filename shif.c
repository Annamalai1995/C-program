#include<stdio.h>
int main()
{


 char vels='Z';// 90

    printf("%d\n",(vels>>3));

    printf("%d",(vels<<2));

    int data=0,key=0,send=0,found=0;

    printf("\n-----------------Sender End-----------------");
    printf("\nEnter the data you wish to send: ");
    scanf("%d",&data);
    printf("\nEnter the key of encryption: ");
    scanf("%d",&key);

    send=data<<key;

    printf("\n-----------------Receiver End-----------------");
    printf("\nReceiver received data %d",send);
    printf("\nEnter the key to decrypt: ");
    scanf("%d",&key);

    found=send>>key;

    printf("\nIs you received %d is same as original %d",found,(data==found));

    return -1;
}