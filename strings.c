//frequency of all alphabets cointained in a string 
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,arr[52]={0};
    char str[40];
    puts("enter string");
    fgets(str,40,stdin);
    for(i=0;i<40;i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            int res=str[i];
            arr[res-97]=arr[res-97]+1;

        }
        if(str[i]>=65&&str[i]<=90)
        {
            int res=str[i];
            arr[res+26-65]=arr[res+26-65]+1;

            
        }
    }
    for(i=0;i<52;i++)
    {
        if(arr[i]>0)
        {
            if(i<=25)
            printf("%c is present %d times\n",97+i,arr[i]);
            else
            printf("%c is present %d times\n",39+i,arr[i]);
        }   
    }
    return 0;

}
//delition to most occuring alphabet in string
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,arr[52]={0};
    char str[40];
    puts("enter string");
    fgets(str,40,stdin);
    for(i=0;i<40;i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            int res=str[i];
            arr[res-97]=arr[res-97]+1;

        }
        if(str[i]>=65&&str[i]<=90)
        {
            int res=str[i];
            arr[res+26-65]=arr[res+26-65]+1;

            
        }
    }
    for(i=0;i<52;i++)
    {
        if(arr[i]>0)
        {
            if(i<=25)
            printf("%c is present %d times\n",97+i,arr[i]);
            else
            printf("%c is present %d times\n",39+i,arr[i]);
        }   
    }
    int big,indx=0;
    big=arr[0];
    for(i=0;i<52;i++)
    {
        if(arr[i]>big)
        {
          big=arr[i];
          indx=i;
        }
    }
    for(i=0;i<40;i++)
    {
        if(str[i]==indx+97||str[i]==indx+39)
        {
            for(j=i;j<40;j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    printf("%s",str);
    return 0;

}
