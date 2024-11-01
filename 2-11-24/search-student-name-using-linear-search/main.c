#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

   
    char s[n][20];

    printf("Enter the names of the students:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }

    char search[20];
    printf("Enter the name to search for: ");
    scanf("%s", search);

    int index = -1; 

    for (int i = 0; i < n; i++) {
        if (strcmp(s[i], search) == 0) {
            index = i;
            break;
        }
    }

    
    if (index != -1) {
        printf("Name '%s' found at index %d.\n", search, index);
    } else {
        printf("Name '%s' not found in the list.\n", search);
    }

    return 0;
}
