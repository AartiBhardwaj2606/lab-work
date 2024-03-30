//1TO CHECK IF THE STRINGS ARE EQUAL OR NOT WITHOUT USING PRE-DEFINED FUNCTION
/*#include <stdio.h>
#include <string.h>
int main() {
    char s1[40],s2[40];
    int l1,l2,i=0,res=0;
    puts("INPUT ANY STRING");
    fgets(s1,40,stdin);
    fgets(s2,40,stdin);
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1!=l2)
    res=1;
    else
    {
        while(s1[i]!='\0')
        {
            if(s1[i]!=s2[i])
            {
                res=1;
                break;
            }
            i++;
        }
    }
    if(res==1)
    puts("STRINGS ARE NOT EQUAL");
    else
    puts("EQUAL STRINGS");
    

    return 0;
}

//2 TO CHECK IF THE STRING IS PALINDROME OR NOT WITHOUT USING FUNCTION 
#include <stdio.h>
int main() {
    char s1[40];
    int len=0,i=0,res=0,j;
    printf("INPUT ANY STRING");
    scanf("%s",s1);
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(s1[i]!=s1[j])
        {
        res++;
        break;
        }
    }
   
    if(res==1)
    printf("NOT A PALINDROME");
    else
    printf("PALINDROME");
    

    return 0;
}

//3 TO INPUT A 2-D MATRIX OF DIMENSION (m X n) AND PERFORM THE OPERATION:
//R2=2*R2-R1+5*R3
#include <stdio.h>
int main() {
    int arr[6][6],i,j,m,n;
    printf("enter number of rows and columns");
    scanf("%d %d",&n,&m);
    printf("enter elements");
    for (i=0;i< m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        arr[1][j]=2*arr[1][j]-arr[0][j]+5*arr[2][j];
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
        return 0;

    
}
 
//4 TO FIND THE TRANSPOSE OF A 2-D MATRIX. 

/*#include <stdio.h>
int main() {
    int arr[6][6],i,j,m,n,temp;
    printf("enter number of rows and columns");
    scanf("%d %d",&n,&m);
    printf("enter elements");
    for (i=0;i< m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0+i;j<n;j++)
        {
            if(i!=j)
            {
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;

            }
        }
    }
    for (i=0;i< m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
        return 0;

    
}
//5 TO COUNT NUMBER OF WORDS IN A STRING WITHOUT USING LIB FUNCTIONS
#include <stdio.h>
#include <string.h>
int main() {
    char s1[40];
    int i=0,res=1;
    puts("INPUT ANY STRING");
    fgets(s1,40,stdin);
    while(s1[i]!='\0')
    {
        if(s1[i]==' ')
        {
            res++;
        }
        i++;
    }
    printf("number of words in given string are %d",res);
    return 0;
}
//6 TO CALCULATE NUMBER OF WORDS CONTAINING 'n' DIGIT WORDS.   
#include <stdio.h>
#include <string.h>
int main() {
    char s1[40];
    int i=0,res=1,c=0,count=0,n;
    puts("INPUT ANY STRING");
    fgets(s1,40,stdin);
    printf("enter word length");
    scanf("%d",&n);
    while(s1[i]!='\0')
    {
        while(s1[i]!=' ')
        {
            count++;
            i++;
        } 
        if(count==n)
        {
            c++;
        } 
        i++;
        count=0; 

    }
    printf("number for words containing %d digits are %d",n,c);
    return 0;
}*/
//7 TO INPUT 2-D ARRAY AND FING ITS MIRROR REVERSAL ACROSS PRINCIPLE DIAGONAL.
/*#include <stdio.h>
int main()
{
    int arr[6][6],i,j,m,n,temp,k,res;
    printf("enter number of rows and columns");
    scanf("%d %d",&n,&m);
    printf("enter elements");
    for (i=0;i< m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    if(m!=n)
    printf("OPERATION CAN'T BE PERFORMED AS NOT A SQUARE MATRIX");
    k=m-1;
    res=m-1;
    for (i=0;i< m;i++)
    {
        for (j=0;j<n;j++)
        {
            if(i+j<=m/2)
            {
                temp=arr[i][j];
                arr[i][j]=arr[i+k][j+k];
                arr[i+k][j+k]=temp;
            }
            k--;
        }
        res--;
        k=res;
    }
    
    for (i=0;i< m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}*///8 APPEND ONE STRING AFTER THE OTHER
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[40],str2[40];
    int i,len1,len2,j;
    puts("INPUT STRING");
    fgets(str1,40,stdin);
    fgets(str2,40,stdin);
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0,j=len1-1;i<len2;i++,j++)
    {
        str1[j]=str2[i];
    }
    str1[j]='\0';
    puts(str1);
    return 0;
}
1. Write a user define function in C to print all unique elements in an array. 
#include<stdio.h>
int main()
{
    int num,res,j,i,temp,arr[100];
    printf("ENTER LIMIT OF MATRIX");
    scanf("%d" ,&num);
    printf("ENTER ELEMENTS OF MATRIX");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("UNIQUE ELEMENTS FOUND IN THE ARRAY ARE :");
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]==arr[j])
            {
                break;
            }
        }
        if(j==num)
        {
            printf("\t%d",arr[i]);
        }
        
    }
    return 0;
    }




  2. Write a program in C to separate odd and even integers into separate arrays.
#include<stdio.h>
int main()
{
    int num,res=0,i,temp=0,arr[100],even[100],odd[100];
    printf("ENTER LIMIT OF ARRAY");
    scanf("%d" ,&num);
    printf("ENTER ELEMENTS OF MATRIX");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        if(arr[i]%2==0)
        {
            even[res]=arr[i];
            res++;
        }
        else
        {
            odd[temp]=arr[i];
            temp++;
        
        }
    }
    printf("THE ODD ELEMENTS ARE:");
    for(i=0;i<temp;i++)
    {
        printf("\t%d",odd[i]);
    }
    printf("\n");
    printf("THE EVEN ELEMENTS ARE:");
    for(i=0;i<res;i++)
    {
        printf("\t%d",even[i]);
    }
    return 0;
}
*/
/*

  7. Write a program to remove characters from a string except alphabets.
  
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0,j;
    printf("INPUT A STRING:");
    fgets(str,100,stdin);
    printf("ORINGINAL STRING IS: " );
    puts(str);
    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=91 || str[i]>=97 && str[i]<= 122)
        {
            i++;
            continue;
        }
        else
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    printf("MODIFIED STRING IS: ");
    puts(str);
return 0;
}
/*

  6. Write a user define function to find the highest frequency character in a string.
  */
#include<stdio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i=0,j,max=0,count=0;
    printf("INPUT A STRING:");
    fgets(str,100,stdin);
    printf("ORINGINAL STRING IS: " );
    puts(str);
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(max<count)
        {
            max=count;
            ch=str[i];
        }
        
    }
    if(ch==' ')
    {
        printf("HIGHEST FREQUENCY CHARACTER APPEARS IN A STRING IS SPACE");
    }
    else
    {
        printf("HIGHEST FREQUENCY CHARACTER APPEARS IN A STRING IS %c",ch);
    }
    
   return 0;
}


 Q3 Write a program in C to find the sum of the lower triangular elements of a matrix 
#include<stdio.h>
int main()
{
    int r,c,i,j,temp,arr[10][10],sum=0;
    printf("ENTER LIMIT OF MATRIX");
    scanf("%d %d",&r,&c);
    printf("ENTER ELEMENTS OF MATRIX");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("GIVEN MATRIX IS:");
    printf("\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("THE ELEMENTS BEINGS SUMMED OF THE LOWER TRIANGULAR MATRIX ARE:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j)
            {
              printf("\t%d",arr[i][j]);
              sum=sum+arr[i][j];
            }
            
        }
       
    }
    printf("\n");
    printf("THE SUM OF THE LOWER TRIANGULAR MATRIX ELEMENTS ARE: %d",sum);
    return 0;   
}*/
/*
 4. Write a program in C to find the max element of each row of a matrix 
#include<stdio.h>
int main()
{
    int r,c,i,j,max,arr[10][10];
    printf("ENTER LIMIT OF MATRIX");
    scanf("%d %d",&r,&c);
    printf("ENTER ELEMENTS OF MATRIX");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("GIVEN MATRIX IS:");
    printf("\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("THE MAXIMUM ELEMENT OF EACH ROW OF MATRIX ARE:");
    for(i=0;i<r;i++)
    {
        max=arr[i][0];
        for(j=1;j<c;j++)
        {
            if(max<arr[i][j])
            {
              max=arr[i][j];
            }
            
        }
        printf("\t%d",max);
    }
    return 0;   
}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0,j;
    printf("input a string:");
    fgets(str,100,stdin);
    printf("ORINGINAL STRING IS:" );
    puts(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
        printf("\n");
        i++;
        }
        else
        {
            printf("%c",str[i]);
            i++;
        }
    }
return 0;

}
