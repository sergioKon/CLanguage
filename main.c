#include <stdio.h>

int isEven(int num , int dig) {
    if(num/10 == 0 ) 
           return 0;
    if(num%5==0)
        return 1+isEven(num/10, dig );

        return isEven(num/10, dig );
}


int partSum(int num){
    if(num/10 == 0) {
        return num;
    }
    return num%10 + partSum(num/10);
}

int index=4;
void intToStr(int num, char* s){
     char digit = num % 10;
     // printf(" number  = %d  digit = %d \n ", num, digit );   
     if(num ==0 )   return; 
        // s[--index]= digit;
        s--;
        *(s)= digit;
        printf(" string = %s\ digit = %c \n ",  s, digit );    
        intToStr(num/10,s);   
}

int biggestLowPower(int power, int num){
   //  printf(" \n number =  %d  power=%d% \n ",num, power );
    if(num/power==0) {
        return 0;
    } 
   return 1 + biggestLowPower(power, num/power);
}


int main(int argc, char **argv)
{
  /*  int count = biggestLowPower(12, 20);
     printf(" -------------\n " );
    printf(" \n result %d is ",count );
    return 0;
  */  

    char s[5];
    int num=2135;
     (*s)+=strlen(s);
    intToStr(num,s);
     (*s)-=strlen(s);
    printf(" \n result %s is ",s );
    return 0;
    
    printf("Start \n");
 //   int value = isEven(95454,4);
    int value = partSum(27231/10);
    printf("%d", value );
    value = isEven(value,1);
    printf("\n%d", value ); 
    printf("\nfinished");
    return 0;
}


