//Place your needed include statements here (This is roughly the equivelent of libraries in python)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  //Place your solution code here
(void)argc;
(void)argv;
  
int n = 0;
int *arr = NULL;

printf("Enter the number of elements ");
if (scanf("%d", &n) != 1){
    printf("INVALID NUMBER \n");
    return 1;
    /**
     * Asks for number of elements if not
     * then message is shown 
     */
}

if (n <= 0){
    printf("Number must be greater than zero \n");
    return 0;
}
/**
 * Tests if memory allocation failed
 */
arr = (int *)malloc(n *sizeof(int));
if (arr == NULL) {
    printf("Memory failed \n");
    return 1;
}
/**
 * Puts the numbers in the array
 */
for(int i = 0; i < n; i++) {
    printf("Enter integer %d: ", i + 1);
    if (scanf("%d", &arr[i]) != 1) {
        printf("Invalid \n"); 
        free(arr);
        return 1;
    }
}

/**
 * Prints them in reverse order using for loop
 */
for (int i = n - 1; i >= 0; i--)
{
    printf("%d", arr[i]);
}
printf("\n");
free(arr);
arr = NULL;

  return 0;
}
