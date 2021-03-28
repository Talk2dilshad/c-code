#include <stdio.h>
#include <time.h>
// asctime()

void TIME()
{
    time_t current_time=time(NULL);
    struct tm *tm=localtime(&current_time);
    printf("%s\n",asctime(tm));
}
int main()
{
    TIME();
    return 0;
}