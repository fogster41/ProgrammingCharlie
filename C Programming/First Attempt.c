// Use// To Comment in VSCODE
//Include header file for input and output functions
#include <stdio.h>

/*Main function - execution starts here
Anything inside {} will be executed 
Int means the function will return an integer value
*/
int main() {
  char name[] = "John";
  // Function is used to output 
  printf("Hello %s", name);
  // \n is needed for newline, C doesnt add new line
  printf("\nThis is my first attempt at C programming\nAnd my name is Charlie");
  //Return 0 indicates that the program ended successfully
  return 0;
}