#include <stdio.h>

// Function to clean the input buffer
void clean_input_buffer(){
    int c;
    // Read characters until we find a newline or reach the end of file
    while(c = getchar() != '\n' && c != EOF); 
}

int main(){
    int num1, num2; // Variables to store the two numbers
    char op;        // Variable to store the operator

    // Loop to get a valid operator input
    do{
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &op); // Read the operator
        if(op == '+' || op == '-' || op == '*' || op == '/'){
            break; // Exit loop if a valid operator is entered
        }
        clean_input_buffer(); // Clear input buffer for invalid input
    } while(1);  

    int result; // Variable to store the result of scanf for input validation
    // Loop to get two valid integer inputs
    do{
        clean_input_buffer(); // Clear input buffer to avoid leftover data
        printf("Enter two numbers: ");
        result = scanf("%d %d", &num1, &num2); // Read two integers
    } while(result != 2); // Repeat if two valid integers are not entered

    // Display the operator and numbers entered by the user
    printf("Operator entered: %c\n", op);
    printf("Entered numbers: %d %d\n", num1, num2);

    // Perform the operation based on the operator entered
    switch(op){
        case '+':
            printf("Result: %d\n", num1 + num2); // Addition
            break;
        case '-':
            printf("Result: %d\n", num1 - num2); // Subtraction
            break;
        case '*':
            printf("Result: %d\n", num1 * num2); // Multiplication
            break;
        case '/':
            if(num2 == 0){ // Check for division by zero
                printf("Division by zero is not allowed\n");
            } else {
                printf("Result: %d\n", num1 / num2); // Division
            }
            break;
        default:
            printf("Invalid operator\n"); // Shouldn't reach here due to earlier checks
            break;
    }

    return 0;
}
