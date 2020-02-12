#include <stdio.h> //importinput output
#include <cs50.h>

int main(void)
{
    string answer = get_string("What is your name?");
    printf("hello, %s%s\n",answer,answer);
}
