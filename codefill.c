#include<stdio.h>
void printClue(int );
int findSum(int );

int main()
{
    // write a code to find the sum of n prime numbers in a series  
    // eg
    // if n=5
    //     then prime series would be 2, 3, 5, 7, 11
    //     then sum = 2+3+5+7+11 = 28 


    int n;
    // write a code to get input for n


    int sum=findSum(n);
    printClue(sum);
    return 0;
}
int findSum(int n)
{
    int sum=0;
    // write a code here to find the sum

    return sum;
}


void printClue(int x)
{
  printf("%d",x);
}