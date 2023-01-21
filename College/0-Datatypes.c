#include<stdio.h>
#include<float.h>
#include<limits.h>

int main()
{
	printf("size of int %d bytes \n",sizeof(int));
	printf("min value of signed int %d \n",INT_MIN);
	printf("max value of signed int %d \n",INT_MAX);
	printf("max value of unsigned int %d \n",UINT_MAX);
	printf("min value of short int %d \n",SHRT_MIN);
	printf("max value of unshort int %d \n",USHRT_MAX);
	printf("min value of long int %d \n",LONG_MIN);
	printf("max value of long int %d \n",LONG_MAX);
	printf("max value of unsigned long int %d \n",ULONG_MAX);
	printf("min value of float %d \n",FLT_MIN);
	printf("max value of float %d \n",FLT_MAX);
	printf("min value of double %d \n",DBL_MIN);
	printf("max value of double %d \n",DBL_MAX);
	printf("min value of long double %d \n",LDBL_MIN);
	printf("max value of long double %d \n",LDBL_MAX);
	printf("min value of character %d \n",CHAR_MIN);
	printf("max value of character %d \n",CHAR_MAX);

	
	return(0);
}
