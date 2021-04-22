#include <stdio.h>
int findlcm(int , int );
int main()
{
    int a,b, LCM;
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &a, &b);
    if(a > b)
        LCM = findlcm(a,b);
    else
        LCM = findlcm(a,b);
        
    printf("LCM of %d and %d is = %d",a ,b, LCM);
    
    return 0;
}
int findlcm(int a, int b)
{
  static int m = 0;
  m += b;
  if((m % a == 0) && (m % b == 0))
    {
        return m;
    }
    else 
    {
        return findlcm(a, b);
    }
}
