/* Standard Clock v1 coded by Saluti */
/* Released 1/7/15 */
#include <stdio.h>
#include <time.h>


int main(void) {

    time_t rawtime;
    struct tm*  time_;
    
    time(&rawtime);
    time_ = localtime(&rawtime);
    
    printf("The current time is:\n");
    printf("\n")
    printf("\n")
    printf("%i:%i \n", time_->tm_hour, time_->tm_min);
    printf("\n")
    printf("\n")
    printf("Rest is important! Make sure to take a break once in awhile!\n");
}
