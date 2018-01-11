#include"freq.h"

void scanlg(int Freq [])
{
   char lg;
   char newline;
   while (fscanf(stdin, "%c%c", &lg, &newline) != EOF)
      Freq[lg - 'A'] ++;
}

void printFreq (int Freq[])
{
   left to the reader
}
