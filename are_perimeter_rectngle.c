#include<stdio.h>
int main(){             //main function
 int    length, breadth, perimeter,area;//declare variables
 
       printf  ("Enter the length of the rectangle: ");//ask user to enter length 
       scanf("%d", &length);//read length
       printf  ("Enter the breadth of the rectangle: ");//ask user to enter breadth
       scanf("%d", &breadth);//read breadth

       perimeter = 2 * (length + breadth);//calculate perimeter
       area = (length * breadth);//calculate area


                printf ("The perimeter of the rectangle is: %d\n", perimeter);//print the result
                printf ("The area of the rectangle is: %d\n", area);//print the result
       
                return 0;
}