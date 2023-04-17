#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    struct Time start, end, diff;
    int secondsDiff;

    printf("Enter start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &start.hours, &start.minutes, &start.seconds);

    printf("Enter end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &end.hours, &end.minutes, &end.seconds);

    // convert start and end times to seconds
    int startSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;

    // calculate the difference in seconds
    secondsDiff = endSeconds - startSeconds;

    // convert the difference back to hours, minutes, and seconds
    diff.hours = secondsDiff / 3600;
    diff.minutes = (secondsDiff % 3600) / 60;
    diff.seconds = secondsDiff % 60;

    printf("Time difference: %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
