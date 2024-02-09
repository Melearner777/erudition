#include <stdio.h>
#include <time.h>

int main() {
    // Infinite loop to continuously update and display the current time
    while (1) {
        // Get current time
        time_t current_time;
        struct tm *time_info;
        time(&current_time);
        time_info = localtime(&current_time);

        // Print current time
        printf("Current Time: %02d:%02d:%02d\n", time_info->tm_hour, time_info->tm_min, time_info->tm_sec);

        // Delay for one second
        sleep(1);

        // Clear the console to update the time
        system("clear");
    }

    return 0;
}
