#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
  char str [] = "one fisH, two Fish, bLue fish, one";
  char delimiters[] = " \n\".,;/:!?)(";
  char *array [80];
  int count = 0;
  int i, max;

  typedef struct result
  {
   char text[80];      // allow for the string to be null-terminated
   int count;
   int maxcount;
  } result_t;

  result_t text[80];
  result_t maxcount;

      for (int h = 0; str[h]; h++)
      {
          str[h] = tolower(str[h]);
      }
      memset(array, 0, 60);
      char *p = strtok (str, delimiters );
      i = 0;
      while (p != NULL) //while it's not the end of the string...
      {
          array[i++] = p;     //put the tokens in the arrays
          p = strtok (NULL, delimiters);         //tokenize the next input
          count++;                        // count tokens
      }

      for ( i = 0; array[i]; ++i)
      {
        int matches = 0;
        for (int j = i; j < count; j++)
        {
          if (!strcmp(array[i], array[j]))
          {
            ++matches;
          }
        }

        strcpy(text->text, array[i]); //copying the word into text->text
        text->count = matches;
        printf("word: %s, count: %d\n" , text->text, text->count);

      }

return 0;
}
