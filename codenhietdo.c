//
//  main.c
//  test 2
//
//  Created by Hiếu Hee on 01/06/2022.
//

#include <stdio.h>
int main(void)
{
    float F;
    float C;
    
    printf("C\n");
    scanf("%f",&C);
    F= (1.8*C)+32 ;
    printf("F is %f\n",F);
    if(F>80)
        printf ("đây là cực nam\n");
    if(F<80)
        printf("đây là cực bắc\n");
    return 0;
}
