 #include<stdio.h>
int main()
{
int p,q,n,a[50];
int frame[10];
int avail, count=0;
int frame_no, k;
 
printf("\n Enter the Number of Pages here :\n");  //here you have to enter the desired number of pages you want
scanf("%d",&n);
            printf("\n ENTER THE PAGE NUMBER :\n");
            for(p=1;p<=n;p++)
            scanf("%d",&a[p]);
            printf("\n ENTER THE NUMBER OF FRAMES :");
            scanf("%d",&frame_no);
for(p=0;p<frame_no;p++)
            frame[p]= -1;
                        q=0;
                          printf("\tref string\t page frames\n");
for(p=1;p<=n;p++)
                        {
                                    printf("%d\t\t",a[p]);
                                    avail=0;
                                    for(k=0;k<frame_no;k++)
if(frame[k]==a[p])
                                                avail=1;
                                    if (avail==0)
                                    {
                                                frame[q]=a[p];
                                                q=(q+1)%frame_no;
                                                count++;
                                                for(k=0;k<frame_no;k++)
                                                printf("%d\t",frame[k]);
}
                                    printf("\n");
}
                        printf("Page Fault Is %d",count);  //here you will get the no of page faults in the page replacement
                        return 0;
}

