#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[])
{
  float a;
  float b;
  char op;
  float ans;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &a, &op, &b);

  switch(op)
    {
    case '/': ans = a/b;
      break;
    case '*': ans = a*b;
      break;
    case '+': ans = a+b;
      break;
    case '-': ans = a-b;
      break;
    case '^': ans = pow(a,b);
      break;
    case ' ': ans = sqrt(b);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",a,op,b,ans);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}