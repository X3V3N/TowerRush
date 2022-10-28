#include <stdio.h>
#include <stdlib.h>
void tower(int k)
{
    int op;
    int c1[k],c2[k];
    int points=0,c=0;
    for(int i=1;i<=k;i++)
    {
        int num=rand()%5+1;
        //printf("Cheat=%d\n",num);
        printf("Enter 2 card nos.(numbers must be in range (1-5) and should not be identical. For example- 1 3)\n[%d]:",i);
        scanf("%d%d",&c1[i],&c2[i]);
        while((c1[i]>5 || c1[i]<1) || (c2[i]>5 || c2[i]<1) || (c1[i]==c2[i]))
        {
            printf("Wrong input!! Enter again\n[%d]:",i);
            scanf("%d%d",&c1[i],&c2[i]);
        }
        if(num==c1[i] || num==c2[i])
        {
            printf("You Got Caught! Game Over!!\nTotal Points= 0");
            c+=1;
            break;
        }
        else if(num!=c1[i] || num!=c2[i])
        {
            points+=5;
        }
        if(i!=k)
        {
            printf("Do You Want To Continue? Press 0 To Exit, Otherwise Press Any Other Number:\n");
            scanf("%d",&op);
        }
        if(op==0)
        {
            c+=2;
            break;
        }
    }
    if(c==2)
    {
        printf("You Have Successfully Left With Your Loot!!\nTotal Points= %d",points);
    }
    if(c==0)
    {
        printf("Congrats You Have Reached The Top!!\nTotal Points= %d",points);
    }
}
int main()
{
    int n;
    printf("Enter no. of rounds:");
    scanf("%d",&n);
    tower(n);
    return 0;
}
