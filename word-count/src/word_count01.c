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

  typedef struct result   //result struct created to store repeated words and its occurrence
  {
   char text[80];      
   int count;
  } result_t;

  result_t text[80];

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
          if (!strcmp(array[i], array[j])) //if contents of borh arrays don't match, it's found another word, so ...
          {
            ++matches; // increase matches
          }
        }
        //TODO: print out ONLY the highest occurring match for each individual word in the array
        
        strcpy(text->text, array[i]); //copying the matched word into result structure
        text->count = matches;        //copying the word's occurrence into results structure
        printf("result: %s\n", text->text); //print statement to validate expected results
        printf("count: %d\n", matches);     //print statement to validate expected results
        printf("%d instances of %s in original string\n", matches, array[i]);
        
      }
return 0;
}
