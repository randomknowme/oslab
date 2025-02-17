#include <stdio.h>

int main() {
    int n, at[10], bt[10], wt = 0, tat, total_wt = 0, total_tat = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("P%d Arrival & Burst: ", i + 1);
        scanf("%d %d", &at[i], &bt[i]);
    }

    printf("\nProcess AT  BT  WT  TAT\n");
    for (int i = 0, ct = 0; i < n; i++) {
        if (ct < at[i]) ct = at[i];
        wt = ct - at[i];
        tat = wt + bt[i];
        total_wt += wt; total_tat += tat;
        printf("P%d      %d   %d   %d   %d\n", i + 1, at[i], bt[i], wt, tat);
        ct += bt[i];
    }

    return 0;
}
