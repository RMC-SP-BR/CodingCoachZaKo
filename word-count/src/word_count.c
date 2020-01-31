#include "word_count.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#define __STDC_WANT_LIB_EXT1__ 1


//Accept input and qualify
int word_count( const char* input_text, word_count_word_t* words) 
{
  char delimiters[] = " \n\".,;:!?)(";
  int uniqueWords[MAX_WORDS];
  size_t len = MAX_WORD_LENGTH;
  char *ptr= NULL;
  char* pWord = strtok_s(text, &len, delimiters, &ptr); // finding the very first word

  if (!pWord)
    {
      return 1;
    }

  //find the rest of the words
  bool new_word = true;
  
  while(true)
    {
      pWord = strtok_s(NULL, &len, delimiters, &ptr); // finding subsequent words
      if(!pWord)
	break; // no more words to tokenize
      
      //check if word exists already
      for(int i = 0; i < count; i++)
	{
	  if(strcmp(words[i], pWord) == 0)
	    {
	      ++uniqueWords[i];
	      new_word = false;
	    }
	}

      if(new_word) // if new word is true,
	{
	  strcpy_s(words[count], MAX_WORD_LENGTH, pWord); // copy new word to array
	  ++uniqueWords[count++]; // increment count, index
	}

      else

	new_word = true; // reset new_word

      if(count > MAX_WORDS - 1)
	{
	  return  EXCESSIVE_NUMBER_WORDS;
	}
    }




   return 0;
}
