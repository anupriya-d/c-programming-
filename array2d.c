//2D array 

#include <stdio.h>

int main()
{
    // 2D array  -> array [][] = {{},{},{}}; 

    int nums[3][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9}}; 

    printf("%d\n", nums[0][0]); //to print element

    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 3; j++)
        {
            printf("%d ", nums[i][j]);
        }
        
        printf("\n"); //new line 
        
    }
    



    /* code */
    return 0;
}

