#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int len,i;
  char sen[100];
  printf("Enter a sentence\n");
  scanf("%s",sen);
  len = strlen(sen);
  printf("%d\n",len);
  for(i=0;i<=len;i++)
  {
          switch(i)
          {
        case a:
            {
                printf(".-\t");
                break;
            }
        case b:
            {
                printf("-...\t");
                break;
            }
        case c:
            {
                printf("-.-.\t");
                break;
            }
        case d:
            {
                printf("-..\t");
                break;
            }
        case e:
            {
                printf(".\t");
                break;
            }
        case f:
            {
                printf("..-.\t");
                break;
            }
        case g:
            {
                printf(--."\t");
                break;
            }
        case h:
            {
                printf("....\t");
                break;
            }
        case i:
            {
                printf("..\t");
                break;
            }
        case j:
            {
                printf(".---\t");
                break;
            }
        case k:
            {
                printf("-.-\t");
                break;
            }
        case l:
            {
                printf(".-..\t");
                break;
            }
        case m:
            {
                printf("--\t");
                break;
            }
        case n:
            {
                printf("-.\t");
                break;
            }
        case o:
            {
                printf("---\t");
                break;
            }
        case p:
            {
                printf(".--.\t");
                break;
            }
        case q:
            {
                printf("--.-\t");
                break;
            }
        case r:
            {
                printf(".-.\t");
                break;
            }
        case s:
            {
                printf("...\t");
                break;
            }
        case t:
            {
                printf("-\t");
                break;
            }
        case u:
            {
                printf("..-\t");
                break;
            }
        case v:
            {
                printf("...-\t");
                break;
            }
        case w:
            {
                printf(".--\t");
                break;
            }
        case x:
            {
                printf("-..-\t");
                break;
            }
        case y:
            {
                printf("-.--\t");
                break;
            }
        case z:
            {
                printf("--..\t");
                break;
            }
        case default:
            {
                printf("Enter only letters");
            }

          }
  }
}
