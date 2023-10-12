#include <stdio.h>
int main() {
int a;
for (a = 0; a < 5; a++)
{
printf ("a is equal to %d\n", a);
}
printf ("I've finished the loop and a is equal to %d\n", a);
return (0);
}

// ● a is the loop control variable
// ● a is initialised to 0 at the start of the loop
// ● a < 5 is the terminating condition test - it is checked on each iteration of the
// loop and the loop code is ONLY executed is the test evaluates TRUE.
// ● a++ is the incrementor - it adds 1 to the value of a each time the loop repeats 