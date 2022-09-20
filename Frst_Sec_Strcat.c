#include<stdio.h>
#include<string.h>

int main() {
    char firststr[100] = "Hello ";
    char secstring[] = "world";
    strcat(firststr, secstring);
    puts(firststr); 
}