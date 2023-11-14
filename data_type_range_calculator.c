#include<stdio.h>
#include<math.h>//for pow function
#include<string.h>//to compare string
int main()
{
    int byte,bits,signedisFalse,flag;
    long long total_range,signed_range;
    char s[20];
    printf("Wanna see a list of datatypes and their size? Yes or No\n");
    scanf("%s",s);
    flag = strcmp(s,"Yes");
    if(flag == 0)
    {
        printf("---Primitive Datatypes--\n");
    printf("Size of char: %d\n",sizeof(char));
    printf("Size of int: %d\n",sizeof(int));
    printf("Size of float: %d\n",sizeof(float));
    printf("Size of double: %d\n",sizeof(double));
    printf("--Datatype Modifiers--\n");
    /*Signed Unsigned Long Short*/
    printf("Size of short int: %d\n",sizeof(short int));
    printf("Size of  long int: %d\n",sizeof( long int));
    printf("Size of long long int: %d\n",sizeof(long long int));
    printf("Size of Long Double: %d",sizeof(long double));
    }
    else{}
    printf("\nEnter number of bytes for the datatype: ");
    scanf("%d",&byte);
    bits = byte * 8;
    printf("Bytes to Bit Conversion(1 byte = 8bits)\nNumber of bits: %d\n",bits);
    total_range = (pow(2,bits))-1;
    printf("Total Range =%lld ",total_range);
    printf("\nEnter signed or unsigned to get the range(do not use uppercase): ");
    scanf("%s",s);
    signedisFalse = strcmp(s,"signed");
    {
        if(signedisFalse==0)
        {
            signed_range = total_range/2;
            printf("Range is - %lld to %lld",signed_range+1,signed_range);
        }
        else
        printf("Range is 0 to %lld",total_range);
    }
}
