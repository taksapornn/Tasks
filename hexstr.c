#include <stdio.h>
#include <string.h>

int main()
{
  char HEX_DIGITS[] = "0123456789abcdef";
  unsigned long long b_value;
  int value;
    
  printf("\nInteger :");
  scanf("%d", &value);
  if (value < 0){   
    b_value = 1ULL<<32;
    b_value += value;
  }
  else{
    b_value = value;
    }
  int x;
  char s[] = "0x",y[16],rev[16];
  char d[2]="\0";
  while(b_value!=0)
  {
    x = b_value & 0xf;
    d[0] = HEX_DIGITS[x];
    strcat(y,d);
    b_value >>= 4;
    if (b_value == 0)
    {
      break;
    }
  }
  int sly;
  sly = strlen(y);
  for(int i=0;sly>=0;i++)
  {
    sly--;
    rev[i]=y[sly];
  }
  strcat(s,rev);
  printf("\nHex String : %s\n",s);
  main();
  return(0);
}