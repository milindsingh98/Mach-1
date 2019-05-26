#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int len,i;
  char sen[100];
  printf("Enter a sentence\n");
  scanf("%s",sen);
  len = stelen(sen);
  printf("%d\n",len);
}
