// Accept characters till the user enters EOF and count the number of lines entered. Also
// display the length of the longest line. (Hint: A line ends when the character is \n)

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	int count=0,fc=0;
	printf("enetr char\n");
	scanf("%c",&ch);
  while(1)
  {
		ch=getchar();
		count++;
		if (ch==EOF)
		{
			break;
		}
		if(ch=='\n')
		{
      if(count>fc)
      {

        fc=count;
        
      }
      count=0;
    }
	}

	printf("longest line is of %d characters\n",fc);
	return 0;
}