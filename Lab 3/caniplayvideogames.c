#include <stdio.h>

int main() {

    int currentHour, currentMinute;
    int homeworkDeadlineHour, homeworkDeadlineMinute;
    int videoGameDuration, homeworkDuration;

    printf("Please enter the current hour and minute, separated by a space.\n");
    scanf("%d %d", &currentHour, &currentMinute);
    printf("How many minutes will the video game take to play?\n");
    scanf("%d", &videoGameDuration);
    printf("How many minutes will your homework take?\n");
    scanf("%d", &homeworkDuration);
    printf("Please enter the hour and minute the homework is due.\n");
    scanf("%d %d", &homeworkDeadlineHour, &homeworkDeadlineMinute);

    int currentTimeInMinutes = (currentHour * 60) + currentMinute;
    int homeworkDeadlineInMinutes = (homeworkDeadlineHour * 60) + homeworkDeadlineMinute;

    int totalElapsedTime = videoGameDuration + homeworkDuration;
    int totalAvailableTime = homeworkDeadlineInMinutes - currentTimeInMinutes;

    if (totalElapsedTime <= totalAvailableTime) {
        printf("Great, you can play the game and still finish your homework.\n");
    } else {
        printf("Sorry, no game for you. Just do your homework.\n");
    }
}