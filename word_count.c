#include "word_count.h"

//Accept input and qualify                                                                                                                                                         

int word_count( const char* input_text, word_count_word_t* words)
{
    int i = 0;

    if ( MAX_WORDS > 20 ) // if input_text is larger then MAX_WORD_LENGTH                                                                                                          
    {
      return EXCESSIVE_NUMBER_OF_WORDS; //... return EXCESSIVE                                                                                                                     
    }
    if ( MAX_WORD_LENGTH > 50 )  // if words is larger than MAX_WORDS                                                                                                              
    {
      return EXCESSIVE_LENGTH_WORD; // return EXCESSIVE                                                                                                                            
    }
    else                                // else...                                                                                                                                 
      for (i = 0; input_text[i] != '\0'; i++)        //loop to count no of words                                                                                                   
        {
          if (input_text[i] == ' ')
            words++;
        }
return 0;
}

