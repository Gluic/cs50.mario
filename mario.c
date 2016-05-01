#include <stdio.h>
#include <cs50.h>
/*
* The Tower of Mario 
* prints a tower of "#"
* height input by user (from 0 to 23)
**/
int main(void)
{
    int x = 1;// init a value for loop 
    //get a height of tower
    printf ("Input height from of the Mario tower: ");
    int height = GetInt();
    
    //check if value of height is negative or more than 24
    while (height < 0 || height > 23)         
                {
                printf ("Input height from of the Mario tower: ");
                height = GetInt();
                }
    if (height == 0)
                return 0;
   
    //loop for build the tower
    for (int k = height;k > 0;k--)
        {
            //print a spaces before # 
            int h = k - 1;
            while (h > 0)
            {
              printf (" ");
              h = h - 1;   
            }
            //print a # 
            h = x;
            while (h > 0)
            {
              printf ("#");
              h = h - 1;   
            }
            //print a last # with new line and grow cicle number
            x = x + 1;
            printf ("#\n");
            
        }
}
