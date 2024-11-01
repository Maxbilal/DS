/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main() {


	int n,i,found=0;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	getchar();

	char s[n][40];

	printf("Enter the names of students:");
	for (i = 0; i < n; i++) 
	{
		fgets(s[i],sizeof(s[i]), stdin);
		
	}
	char search[50];
	printf("Enter the name to search: ");
	fgets(search, sizeof(search), stdin);
	
	for(i=0;i<n;i++)
	{
	    if (strcmp(s[i],search) == 0) 
	    {
            printf("Name %s found at %d", s[i], i);	        
            found = 1;
            break;
	    }
	}
	if(!found)
	{
	    printf("Element not found");
	}
	
    return 0;
}