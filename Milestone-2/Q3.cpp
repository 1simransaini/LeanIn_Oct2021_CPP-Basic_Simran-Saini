// C++ program to print fizz buzz and fizzbuzz
#include <stdio.h>
 
int main(void)
{
    int i;
    for (i=1; i<=50; i++)
    {
        // number divisible by 3 and 5 will
        // always be divisible by 15, print
        // 'fizzbuzz' in place of the number
        if (i%15 == 0)       
            printf ("fizzbuzz\t");   
         
        // number divisible by 3? print 'buzz'
        // in place of the number
        else if ((i%3) == 0)   
            printf("buzz\t");                
         
        // number divisible by 5, print 'fizz' 
        // in place of the number
        else if ((i%5) == 0)                      
            printf("fizz\t");                
     
        else // print the number           
            printf("%d\t", i);                
 
    }
 
    return 0;
}
/*1       2       buzz    4       fizz    buzz    7       8       buzz    fizz 
11      buzz    13      14      fizzbuzz        16    17      buzz    19      fizz 
buzz    22      23      buzz    fizz    26      buzz    28      29      fizzbuzz  
31      32    buzz    34      fizz    buzz    37      38      buzz    fizz  
41      buzz    43      44      fizzbuzz        46      47      buzz  49  fizz*/
