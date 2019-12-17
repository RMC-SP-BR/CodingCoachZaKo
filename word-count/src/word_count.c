#include "word_count.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Accept input and qualify                                                                                                                                                         
int word_count( const char* input_text, word_count_word_t* words)
{
  int i = 0, count;

    if (isalpha(input_text[i]))	 //check if first character is alphabetic                                                                                                          
      {
        count = 1;
      }
     for (i = 0; input_text[i] != '\0'; i++)    //loop to count number of words )                                                                                                  
       {
         if (input_text[i] == ' ')           //if character is a ' ', then characters before must've formed a word                                                                 
           {
             while (isspace(input_text[i])) // loops through all other spaces                                                                                                      
               {
                 i++;
               }
             if (input_text[i] != '\0') // if it's not the end of the line, it must be another word                                                                                
               {
                 words++;
               }
           }
       }
     return i;
}

