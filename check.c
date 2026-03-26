#include <stdio.h>
#include <string.h>

union Player {
    char playername[50];
    char teamname[20];
    float test1;
    float test2;
    float test3;
};


int main() {
	int i,t,count,c1,c2,c3,pc;
	float sum,s1,s2,s3,ps;
    char playernames[10][50];
    char teams[3][20] = {"Red", "Blue", "Green"};
    char teamnames[10][20];
    float test1[10];
    float test2[10];
    float test3[10];

    union Player p; 


    for (i = 0; i < 10; i++) {
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



    printf("Player-wise Averages:\n");
    for (i = 0; i < 10; i++) {
		sum = 0;
        count = 0;
        if (test1[i] >= 0) { sum += test1[i]; count++; }
        if (test2[i] >= 0) { sum += test2[i]; count++; }
        if (test3[i] >= 0) { sum += test3[i]; count++; }
        printf("%s: %.2f\n", playernames[i], count ? sum / count : 0);
    }



    printf("Test-wise Averages:\n");
    s1=0, s2=0, s3=0;
    c1=0, c2=0, c3=0;
    for ( i = 0; i < 10; i++) {
        if (test1[i] >= 0) { s1 += test1[i]; c1++; }
        if (test2[i] >= 0) { s2 += test2[i]; c2++; }
        if (test3[i] >= 0) { s3 += test3[i]; c3++; }
    }
    printf("Test1 Avg: %.2f\n", c1 ? s1/c1 : 0);
    printf("Test2 Avg: %.2f\n", c2 ? s2/c2 : 0);
    printf("Test3 Avg: %.2f\n", c3 ? s3/c3 : 0);


    printf("\nTeam-wise Averages:\n");
    
    for (t = 0; t < 3; t++) {
        sum = 0;count = 0;
        for (i = 0; i < 10; i++) {
            if (strcmp(teamnames[i], teams[t]) == 0) {
                ps = 0; pc = 0;
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
