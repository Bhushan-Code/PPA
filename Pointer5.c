#include<stdio.h>
int main()
{

    int no = 11;

    int *p = &no;
    
    int **q = &p;
    
    int ***x = &q;
    
    int ****y = &x;
    
    int *****z = &y;
    
    int ***a = &q;
    
    int ****b = &a;

    /*
    
    no



    
    */


    return 0;
}