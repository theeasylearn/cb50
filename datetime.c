#include <stdio.h>
#include <time.h>
https://chatgpt.com/s/t_68517f1610fc8191b6c983d0bfe26fc8
int main() {
    time_t timer;
    struct tm* tm_info;

    time(&timer); //store gap between epoc and 
    tm_info = localtime(&timer);

    printf("Current Date and Time: %s", asctime(tm_info));

    return 0;
}