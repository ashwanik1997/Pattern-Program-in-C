// Online C compiler to run C program online
#include <stdio.h>
void rightangle_triangle();
void inverted_rightangle_triangle();
void arrowshaped_triangle();
void mirrored_rightangle_triangle();
void invertedmirrored_rightangle_triangle();
void mirrored_arrowshaped_triangle();
void pyramid_pattern();
void inverted_pyramid_pattern();
void diamond_pattern();
void upperinverted_lowerpyramid();
void rightdiagonal_pattern();
void leftdiagonal_pattern();
void Xstar_pattern();
void Vstar_pattern();
void inverted_Vstar_pattern();
void hollow_square_pattern();
void hollowX_square_pattern();
void square_pattern();
void hollow_Rhombus_pattern();
void lefthalf_diamond_pattern();

int main() {
    // Write C code here
    int option;
    puts("1.  rightangle_triangle ");
    puts("2.  inverted_rightangle_triangle");
    puts("3.  arrowshaped_triangle");
    puts("4.  mirrored_rightangle_triangle");
    puts("5.  invertedmirrored_rightangle_triangle");
    puts("5.  mirrored_arrowshaped_triangle");
    puts("7.  pyramid_pattern");
    puts("8.  inverted_pyramid_pattern");
    puts("9.  diamond_pattern");
    puts("10. upperinverted_lowerpyramid");
    puts("11. leftdiagonal_pattern");
    puts("12. rightdiagonal_pattern");
    puts("13. Xstar_pattern");
    puts("14. Vstar_pattern");
    puts("15. inverted_Vstar_pattern");
    puts("16. hollow_square_pattern");
    puts("17. hollowX_square_pattern");
    
    printf("\nEnter the number to print the given pattern:  \n");
    scanf("%d", &option);
    switch(option) 
    {
        case 1:
            rightangle_triangle();
            break;
        case 2:
            inverted_rightangle_triangle();
            break;
        case 3:
            arrowshaped_triangle();
            break;
        case 4: 
            mirrored_rightangle_triangle();
            break;
        case 5:
            invertedmirrored_rightangle_triangle();
            break;
        case 6:
            mirrored_arrowshaped_triangle();
            break;
        case 7:
            pyramid_pattern();
            break;
        case 8:
            inverted_pyramid_pattern();
            break;
        case 9:
            diamond_pattern();
            break;
        case 10:
            upperinverted_lowerpyramid();
            break;
        case 11:
            leftdiagonal_pattern();
            break;
        case 12:
            rightdiagonal_pattern();
            break;
        case 13:
            Xstar_pattern();
            break;
        case 14:
            Vstar_pattern();
            break;
        case 15:
            inverted_Vstar_pattern();
            break;
        case 16:
            hollow_square_pattern();
            break;
        case 17:
            hollowX_square_pattern();
            break;
        default:
            printf(" Please select correct option");
            break;
    }
    return 0;
}

void rightangle_triangle()
{
    int i, j, row = 5; 
    int col = 5;
    printf("rightangle_triangle \n");
    for(i = 1; i<= row; ++i)
    {
        for(j = 1; j <= col; ++j) 
        {
            if(j <= i)
            {
                printf(" * ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void inverted_rightangle_triangle()
{
    int i, j, row = 5; 
    int col = 5;
    printf("inverted_rightangle_triangle \n");
    for(i = 1; i<= row; i++)
    {
        for(j = 1; j<= col; j++) 
        {
            if(j <= 6-i)
            {
                printf(" * ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void arrowshaped_triangle()
{
    int i, j, k =0,row = 7; 
    int col = 4;
    printf("arrowshaped_triangle \n");
    for(i = 1; i<= row; i++)
    {
        i <= col? k++:k--;
        for(j = 1; j<= col; j++) 
        {
            if(j <= k )
            {
                printf(" * ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void mirrored_rightangle_triangle()
{
    int i, j, row = 5; 
    int col = 5;
    printf("mirrored_rightangle_triangle \n");
    for(i = 1; i<= row; i++)
    {
        for(j = 1; j<= col; j++) 
        {
            if(j >= 6-i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void invertedmirrored_rightangle_triangle()
{
    int i, j, k=0,row = 5; 
    int col = 5;
    printf("invertedmirrored_rightangle_triangle \n");
    for(i = 1; i<= row; i++)
    {
        k++;
        for(j = 1; j<= col; j++) 
        {
            if(j >= k)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void mirrored_arrowshaped_triangle()
{
    int i, j, k =0,row = 5; 
    int col = 3;
    printf("mirrored_arrowshaped_triangle \n");
    for(i = 1; i<= row; i++)
    {
        i <= col ? k++ : k--;
        for(j = 1; j <= col; j++) 
        {
            if(j >= 4-k)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void pyramid_pattern()
{
    int i, j, row = 4; 
    int col = 7;
    printf("pyramid_pattarn \n");
    for(i = 1; i<= row; i++)
    {
        for(j = 1; j<= col; j++) 
        {
            if(j >= 5-i && j <= 3+i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void inverted_pyramid_pattern()
{
    int i, j, row = 4; 
    int col = 7;
    printf("inverted_pyramid_pattern \n");
    for(i = 1; i<= row; i++)
    {
        for(j = 1; j<= col; j++) 
        {
            if(j >= i && j <= 8-i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void diamond_pattern()
{
    int i, j, row = 7; 
    int col = 7, k = 0;
    printf("diamond_pattarn \n");
    for(i = 1; i<= row; i++)
    {
        i <= 4 ? k++ : k--;
        for(j = 1; j<= col; j++) 
        {
            if(j >= 5-k && j <= 3+k)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void upperinverted_lowerpyramid()
{
    int i, j, row = 7; 
    int col = 7, k = 0;
    printf("upperinverted_lowerpyramid \n");
    for(i = 1; i<= row; i++)
    {
        i <= 4 ? k++ : k--;
        for(j = 1; j<= col; j++) 
        {
            if(j >= k && j <= 8-k)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void rightdiagonal_pattern()
{
    int i, j, row = 5; 
    int col = 5;
    printf("rightdiagonal_pattarn \n");
    for(i = 1; i<= row; i++)
    {
        for(j = 1; j<= col; j++) 
        {
            if(j >= 6-i && j <= 6-i )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void leftdiagonal_pattern()
{
    int i, j, row = 5; 
    int col = 5;
    printf("leftdiagonal_pattarn \n");
    for(i = 1; i<= row; i++)
    {
        for(j = 1; j<= col; j++) 
        {
            if(j >= i && j <= i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }    
}
void Xstar_pattern()
{
    int i, j, row = 5; 
    int col = 5, k = 0;
    printf("Xstar_pattern \n");
    for(i = 1; i<= row; i++)
    {
        i <=3 ? k++: k--;
        for(j = 1; j<= col; j++) 
        {
            if(j == k || j ==6-k)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void Vstar_pattern()
{
    int i, j, row = 5; 
    int col = 9;
    printf("Vstar_pattern \n");
    for(i = 1; i<= row; i++)
    {
        for(j = 1; j<= col; j++) 
        {
            if(j == i || j == 10-i )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void inverted_Vstar_pattern()
{
    int i, j, row = 5; 
    int col = 9;
    printf("inverted_Vstar_pattern \n");
    for(i = 1; i<= row; i++)
    {
        for(j = 1; j<= col; j++) 
        {
            if(j == 6-i || j == 4+i )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }    
}
void hollow_square_pattern()
{
    int i, j,row = 5; 
    int col = 5;
    printf("hollow_square_pattern \n");
    for(i = 1; i<= row; i++)
    {
        //i <=1 ? k--:k++;
        for(j = 1; j<= col; j++) 
        {
            if(i == 1 || j == 1 || i == row || j == col )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }    
}
void hollowX_square_pattern()
{
    int i, j,row = 7; 
    int col = 7;
    printf("hollowX_square_pattern \n");
    for(i = 1; i<= row; i++)
    {
        //i <=1 ? k--:k++;
        for(j = 1; j<= col; j++) 
        {
            if((i == 1 || j == 1 || i == row || j == col-i+1 || i ==j || j == col))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }    
}

