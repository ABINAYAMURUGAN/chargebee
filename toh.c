#include<stdio.h>
#include<conio.h>
void towerOfHanoi(int n, char fromrod, char torod, char midrod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", fromrod, torod);
        return;
    }
    towerOfHanoi(n-1, fromrod, midrod, torod);
    printf("\n Move disk %d from rod %c to rod %c", n, fromrod, torod);
    towerOfHanoi(n-1, midrod, torod, fromrod);
}
 
int main()
{
    int n = 4; 
    towerOfHanoi(n, 'A', 'C', 'B');  
    return 0;
}
