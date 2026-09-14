#include<stdio.h>



void displayCardType(int digitOne, int digitTwo,int sumOfValues){

if((digitOne == 3 && digitTwo == 4) || (digitOne == 3 && digitTwo == 7 ) && sumOfValues % 10 == 0){
    printf("AMEX \n");
}
else if((digitOne == 5 && digitTwo == 1) || (digitOne == 5 && digitTwo == 2) || (digitOne == 5 && digitTwo == 3) || (digitOne == 5 && digitTwo == 4) || (digitOne == 5 && digitTwo == 5 ) && sumOfValues % 10 == 0 ){
    printf("MASTERCARD \n");
}
else if(digitOne == 4 &&  sumOfValues % 10 == 0){
    printf("VISA \n");
}
else{
    printf("INVALID \n");
}

}


int main(void)
{
	long long creditCardNumber = 0LL;
	long long temporaryCardNumber;
	long long scannedResults;
	int productOfDigits = 0;
	int sumOfProductDigits = 0;
	int position = 0;
	int firstDigit;
	int secondDigit;
	int sumOfEvenDigits = 0;
	int totalSumOfCardNumbers;
	int firstTwoCardDigits = 0;




while(1){
    printf("Number: ");
	scannedResults  = scanf("%lld",&creditCardNumber);
	temporaryCardNumber = creditCardNumber;

    if(scannedResults == 1){
        if(creditCardNumber >= 1000000000000LL && creditCardNumber <= 9999999999999999999LL){
            break;
        }else{
            printf("INVALID \n");
        }
    }
    else{

        while (getchar() != '\n');
    }
    }



    while(temporaryCardNumber > 0){
        int digit = temporaryCardNumber % 10;
        temporaryCardNumber = temporaryCardNumber / 10;


        if(temporaryCardNumber >= 100){
            long long temporaryCardNumberForFirstTwoDigits = temporaryCardNumber/ 10;
            firstTwoCardDigits = temporaryCardNumberForFirstTwoDigits;

        }

     if(position % 2 != 0){
         productOfDigits = digit * 2;
         if(productOfDigits / 10 > 0){
                while(productOfDigits > 0)
                {
                    int partialProductdigit = productOfDigits % 10;
                    sumOfProductDigits = sumOfProductDigits + partialProductdigit;
                    productOfDigits = productOfDigits / 10;
                }

         }
        sumOfProductDigits = sumOfProductDigits + productOfDigits;
    }else{
        sumOfEvenDigits = sumOfEvenDigits + digit;
    }
     position++;
    }

    firstDigit = firstTwoCardDigits / 10;
    secondDigit = firstTwoCardDigits % 10;
    totalSumOfCardNumbers = sumOfProductDigits + sumOfEvenDigits;
displayCardType(firstDigit,secondDigit,totalSumOfCardNumbers);



	system("pause");
    }


