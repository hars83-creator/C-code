#include<stdio.h>

// factorial usong recursion
int fact_num(int n){
    if(n==0)
        return 1;
    else 
        return n * fact_num (n-1);
 }
 // factorial usong non recurssive function
int fact_num_nonrec(int n ){
    int i,fact = 1;
    for (i=1; i<=n; i++)
        fact =fact*i;
        return fact;
 }

int main (){

    int num,digit,factorial, fact;
    printf("enter the number ");
    scanf("%d",&num);

    fact = fact_num(num);
    printf("factorial is %d\n", fact );//factorial using recursion

    // factorial using non recursive function
    printf("factorial using non recursive function is %d\n", fact_num_nonrec(num));
    
    return 0;

}
    
