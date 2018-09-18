# MKS65C-swap
 Seeding the random number generator
  srand( time(NULL) );
  srand(<SEED>) seeds the random number generator with the provided argument.
  If you use the same argument to srand() multiple times, you will get the exact same sequence of random numbers.
  time(NULL) will return the current EPOCH time, it is commonly used with srand() to get new random sequences. 
  Getting a random number
  rand(); 
  Returns the next random number in the sequence seeded by srand().
  Returns an int.
  srand() and rand() are both in <stdlib.h>
  time() is in <time.h>

  Create an array large enough to store 10 ints.
  Populate the array with random values.
  Set the last value in the array to 0.
  Print out the values in this array
  Create a separate array large enough to store 10 ints.
  USING ONLY POINTERS (that is, do not use the array variables) do the following:
  Populate the second array with the values in the first but in reverse order
  Print out the values in the second array