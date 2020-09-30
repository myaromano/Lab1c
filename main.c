// Author: Mya Romano mlr5819@psu.edu
// Collaborator: Octavia Szkutnik oas5135@psu.edu
// Collaborator: Daniel Mikita djm6907@psu.edu
// Collaborator: Joseph Imperial jri5073@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *ctemp = readline("Enter temperature in Celsius: "); 

  double c = atof(ctemp);
  double f = atof(ctemp);

  f = (c * 9/5) + 32;

  printf("%.6f° celsius is equivilent to %f° Fahrenheit.\n",c, f);



  return 0;
}