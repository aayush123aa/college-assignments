#include <stdio.h>
#include <string.h>

// Union with all fields directly (no struct)
union Player {
    char playername[50];
    char teamname[20];
    float test1;
    float test2;
    float test3;
};

#define MAX_PLAYERS 10

int main() {
    // Since union shares memory, we declare separate arrays per field
    char playernames[MAX_PLAYERS][50];
    char teamnames[MAX_PLAYERS][20];
    float test1[MAX_PLAYERS];
    float test2[MAX_PLAYERS];
    float test3[MAX_PLAYERS];

    union Player p; // used as a temporary input buffer
    int n;

    printf("Enter number of players (max %d): ", MAX_PLAYERS);
    scanf("%d", &n);
    if (n > MAX_PLAYERS) n = MAX_PLAYERS;

    // Input
    for (int i = 0; i < n; i++) {
        printf("\nPlayer %d:\n", i + 1);

        printf("  Name: ");
        scanf("%s", p.playername);
        strcpy(playernames[i], p.playername);

        printf("  Team (Red/Blue/Green): ");
        scanf("%s", p.teamname);
        strcpy(teamnames[i], p.teamname);

        printf("  Test1 score (-1 if missed): ");
        scanf("%f", &p.test1);
        test1[i] = p.test1;

        printf("  Test2 score (-1 if missed): ");
        scanf("%f", &p.test2);
        test2[i] = p.test2;

        printf("  Test3 score (-1 if missed): ");
        scanf("%f", &p.test3);
        test3[i] = p.test3;
    }

    // Player-wise average
    printf("\n--- Player-wise Averages ---\n");
    for (int i = 0; i < n; i++) {
        float sum = 0;
        int count = 0;
        if (test1[i] >= 0) { sum += test1[i]; count++; }
        if (test2[i] >= 0) { sum += test2[i]; count++; }
        if (test3[i] >= 0) { sum += test3[i]; count++; }
        printf("%s: %.2f\n", playernames[i], count ? sum / count : 0);
    }

    // Test-wise average
    printf("\n--- Test-wise Averages ---\n");
    float s1=0, s2=0, s3=0;
    int c1=0, c2=0, c3=0;
    for (int i = 0; i < n; i++) {
        if (test1[i] >= 0) { s1 += test1[i]; c1++; }
        if (test2[i] >= 0) { s2 += test2[i]; c2++; }
        if (test3[i] >= 0) { s3 += test3[i]; c3++; }
    }
    printf("Test1 Avg: %.2f\n", c1 ? s1/c1 : 0);
    printf("Test2 Avg: %.2f\n", c2 ? s2/c2 : 0);
    printf("Test3 Avg: %.2f\n", c3 ? s3/c3 : 0);

    // Team-wise average
    printf("\n--- Team-wise Averages ---\n");
    char teams[3][20] = {"Red", "Blue", "Green"};
    for (int t = 0; t < 3; t++) {
        float sum = 0; int count = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(teamnames[i], teams[t]) == 0) {
                float ps = 0; int pc = 0;
                if (test1[i] >= 0) { ps += test1[i]; pc++; }
                if (test2[i] >= 0) { ps += test2[i]; pc++; }
                if (test3[i] >= 0) { ps += test3[i]; pc++; }
                if (pc > 0) { sum += ps/pc; count++; }
            }
        }
        printf("Team %s Avg: %.2f\n", teams[t], count ? sum/count : 0);
    }

    return 0;
}