#include <stdio.h>

// Function for calculation
int collatz_sequence_length(int n) {
    int length = 1; 
    while (n != 1) {  //condition for number
        if (n % 2 == 0) {
            n /= 2;   // If n is even number then divide it by 2
        } else {
            n = 3 * n + 1;   // If n is odd number then multiply it by 3 and add 1
        }
        length++;  //length incrementation
    }
    return length;
}

int main() {
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n); //taking number form the user
    printf("this is your given number: %d \n",n);
    int longest_starting_number = 0;
    int max_length = 0;

    for (int i = 1; i < n; i++) {
        int length = collatz_sequence_length(i);
        if (length > max_length) {
            max_length = length;
            longest_starting_number = i;
        }
    }

    printf("Starting number with the longest Collatz sequence under %d is %d, with length %d.\n", n, longest_starting_number, max_length);

    return 0;
}
