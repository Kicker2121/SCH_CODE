#include<stdio.h>

int mystery(int, int);

int main (void)
{
   int a, b, z;
 
   z = mystery(a, b);

   scanf("%d %d",&a, &b);
   printf("z = %d\n", z);

   scanf("%d %d",&a, &b);
   printf("z = %d\n", mystery(a, b));

   return 0;     

}
int mystery(int x, int y) 
{       
   int ans;       
   ans = (x > y) ? x : y;
   return ans;
}
