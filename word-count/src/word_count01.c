#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
  char str [] = "one fisH, two Fish, bLue fish";
  char delimiters[] = " \n\".,;/:!?)(";
  char *array [60];
  int count = 0;
  int i;

      //lowercasing the input string
      for (int h = 0; str[h]; h++)
      {
          str[h] = tolower(str[h]);
      }
      //setting the memory allotted to 0s 
      memset(array, 0, 60);
      
      //tokenizing the input
      char *p = strtok (str, delimiters );
      i = 0;
      while (p != NULL) //while it's not the end of the string...
      {
          array[i++] = p;     //put the tokens in the arrays
          p = strtok (NULL, delimiters);  //tokenize the next input
          count++;                        // count tokens
      }

      //looping input string looking for matches
      for ( i = 0; array[i]; ++i)
      {
        int matches = 1; // matches start at one
        for (int j = 0; j < i; ++j)
        {
          if (!strcmp(array[i], array[j])) //if match, 
          {
            ++matches; // increase matches
          }
        }
        printf("%d instances of %s in original string\n", matches, array[i]);
      }
return 0;
}
