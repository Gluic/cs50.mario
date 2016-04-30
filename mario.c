#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string block = "##";
    string block1 = "#";
    printf ("Input height from 1 to 23 of the Mario tower: ");
    int height = GetInt();
    
    while (height < 1 || height > 23)
    {
            printf ("Bad input. Try: ");
            height = GetInt();
     }
     for (int k = 0;k < height;k++)
        {
            int h = k;
            while (h > 0)
            {
              printf ("%s",block1);
              h = h - 1;   
            }
            
            printf ("%s\n",block);
            
        }
}
