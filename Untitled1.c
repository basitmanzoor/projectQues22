#include<stdio.h>
int main()
{
int p,q,n,a[60];
int frame[10];
int avail, count=0;
int frame_no, z;
 
printf("\n Enter the Number of Pages here :\n");  //here you have to enter the desired number of pages you want
scanf("%d",&n);
            printf("\n Enter the Page Numbers here :\n");  //here you need to enter the page numbers
            for(p=1;p<=n;p++)
             scanf("%d",&a[p]);
            printf("\n Enter the Number of Frames here :");  //here you need to enter how many frames you need  
       A:     scanf("%d",&frame_no);
            if(frame_no<0)
            {
            printf("Please enter a positive value\n");
            goto A;
        }
for(p=0;p<frame_no;p++)
            frame[p]= -1;
                        q=0;
                          printf("\tref string\t page frames\n");
for(p=1;p<=n;p++)
                        {
                                    printf("%d\t\t",a[p]);
                                    avail=0;
                                    for(z=0;z<frame_no;z++)
if(frame[z]==a[p])
                                                avail=1;
                                    if (avail==0)
                                    {
                                                frame[q]=a[p];
                                                q=(q+1)%frame_no;
                                                count++;
                                                for(z=0;z<frame_no;z++)
                                                printf("%d\t",frame[z]);
}
                                    printf("\n");
}
                        printf("Page Fault Is %d",count);  //here you will get the no of page faults in the page replacement
                        return 0;
}

