# include <stdio.h>

/**
 * main - Program execution 
 * description: displays sizes 
 * Return: 0 (Success)
 */

int main(void)
{
		char chaR;
			int inT;
				long lonG;
					long long lonG_int;
						float floaT;

							printf("Size of a char: %lu byte(s)\n", sizeof(chaR));
								printf("Size of an int: %lu byte(s)\n", sizeof(inT));
									printf("Size of a long int: %lu byte(s)\n", sizeof(lonG));
										printf("Size of a long long int: %lu byte(s)\n", sizeof(lonG_int));
											printf("Size of a float: %lu byte(s)\n", sizeof(floaT));
												return (0);
}
