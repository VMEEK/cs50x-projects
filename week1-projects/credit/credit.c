#include<stdio.h>
#include<string.h>


//int addMultipliedDigits(long number)
//{
//	char str[16];
//	printf("The current value 2 is %c", str[1]);
//	sprintf(str, "%ld",number);
//	printf("The current value 2 is %c", str[1]);
//	int extractedValue;
//	int summedExtractedValue = 0;
//	int typeIntValue;
//
//	int length = strlen(str);
//
//	int vLength = length;
//
//	for (int i = 0; i < length; i++)
//	{
//		printf("The current value is %c", str[i]);
////		if (i == 0)
////		{
//				extractedValue = str[vLength - 2];
//				vLength--;
////		}
////		else
////		{
////			extractedValue = str[vlength - 1]
////			vlength--;
////		}
//
//		typeIntValue =  extractedValue - '0';
//		summedExtractedValue = (typeIntValue * 2) + summedExtractedValue;
//
//		printf("%d", summedExtractedValue);
//	}
//	return summedExtractedValue;
//}

int main(void)
{
	long long creditCardNumber;
	char str[] = {};

	printf("Number: ");
	scanf("%lld",&creditCardNumber);

	printf("The number you entered is %lld\n",creditCardNumber);




//	int addedValue = addMultipliedDigits(creditCardNumber);
//	printf("%d", addedValue);

	//char str[16];

	sprintf(str, "%lld",creditCardNumber);
	printf("String: %s\n",str);

	char extractedValue;
	int summedExtractedValue = 0;
	int typeIntValue;

	int length = strlen(str);

	int vLength = length;

	for (int i = 0; i < length; i++)
    {
        //printf("str[%d] is %c \n",i,str[i]);
        int index;
        printf("length is %d \n",length);
        index = length - 2;
        printf("current index %d \n", index);
        extractedValue = str[index];
			length--;
        printf("The extracted value  is %c\n", extractedValue);
        typeIntValue =  extractedValue - '0';
        printf("The int value  is %d\n", typeIntValue);

		summedExtractedValue = (typeIntValue * 2) + summedExtractedValue;


	printf("summed value is %d\n", summedExtractedValue);
    }



//	for (int i = 0; i < length; i++)
//	{
//		printf("The current value is %c\n", str[i]);
////		if (i == 0)
////		{
//				extractedValue = str[vLength - 2];
//				vLength--;
//					printf("The extracted value 2 is %c\n", extractedValue);
////		}
////		else
////		{
////			extractedValue = str[vlength - 1]
////			vlength--;
////		}
//
//		typeIntValue =  extractedValue - '0';
//		summedExtractedValue = (typeIntValue * 2) + summedExtractedValue;
//			printf("The int value 2 is %d\n", typeIntValue);
//				printf("The current value 2 is %c\n", str[1]);
//
//		printf("%d", summedExtractedValue);
//	}


}
