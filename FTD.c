#include <stdio.h>
int main() {
    int n;
    int transactions[1000];
    int suspiciousID;
    int found = 0;
    int i;
    printf("Enter number of transactions: ");
    scanf("%d", &n);
    printf("Enter %d transaction IDs (separated by space/enter): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &transactions[i]);
    }
    printf("Enter suspicious transaction ID to search: ");
    scanf("%d", &suspiciousID);

    FILE *fileRecord = fopen("transactions.txt", "w");
    if (fileRecord == NULL) {
        printf("Error: Could not open transactions.txt\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        fprintf(fileRecord, "%d\n", transactions[i]);
    }
    fclose(fileRecord);
    for (i = 0; i < n; i++) {
        if (transactions[i] == suspiciousID) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        printf("Fraud Transaction Found\n");
    } else {
        printf("Transaction Not Found\n");
    } 

    FILE *fileLog = fopen("fraud_log.txt", "a");
    if (fileLog == NULL) {
        printf("Error: Could not open fraud_log.txt\n");
        return 1;
    }
    fprintf(fileLog, "Searched ID: %d -> %s\n", suspiciousID,
            found == 1 ? "Fraud Transaction Found" : "Transaction Not Found");
    fclose(fileLog);

    return 0;
}