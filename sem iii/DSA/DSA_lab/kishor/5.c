#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
int precedence(char c) {
    if (c=='+' || c=='-') return 1;
    if (c=='*' || c=='/') return 2;
    if (c=='^') return 3;
    return 0;
}

int main() {
    char infix[100], postfix[100];
    int j = 0;
    printf("Enter infix: ");
    scanf("%s", infix);

    for (int i = 0; infix[i]; i++) {
        char c = infix[i];

        if (isalnum(c)) postfix[j++] = c;
        else if (c == '(') push(c);
        else if (c == ')') {
            while (stack[top] != '(') postfix[j++] = pop();
            pop();
        } 
        else {
            while (top != -1 && precedence(stack[top]) >= precedence(c))
                postfix[j++] = pop();
            push(c);
        }
    }

    while (top != -1) postfix[j++] = pop();
    postfix[j] = '\0';

    printf("Postfix: %s\n", postfix);
}
