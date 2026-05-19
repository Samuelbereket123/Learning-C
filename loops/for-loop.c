/* in order to loop in c it's going to be a little different.
 * so in c for loops goes like this for (setup; condition; update/iterate) this is the whole shit. so let's see it in an example 
 */
#include <stdio.h>

int main(void){
int i;

for (i = 0; i < 20; i++)
{
       printf("%d\n", i);
}      
}
