#include <stdio.h>

struct player {
    char name[50];
    int runs_scored;
};

int main() {
    struct player team[11] = {
        {"John", 55},
        {"Mike", 102},
        {"David", 12},
        {"Sam", 8},
        {"Peter", 37},
        {"Jack", 19},
        {"Steve", 76},
        {"Tom", 62},
        {"Harry", 41},
        {"Chris", 27},
        {"Ben", 93}
    };
    int i, total_runs = 0;
    
    printf("Player names and runs scored by the cricket team:\n");
    for (i = 0; i < 11; i++) {
        printf("%s: %d\n", team[i].name, team[i].runs_scored);
        total_runs += team[i].runs_scored;
    }
    
    printf("\nTotal runs scored by the cricket team: %d\n", total_runs);
    
    return 0;
}

