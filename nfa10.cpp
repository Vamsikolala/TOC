#include <stdio.h>

int main() {
    int n;  // number of states
    int m;  // number of transitions

    printf("Enter the number of states: ");
    scanf("%d", &n);

    printf("Enter the number of transitions: ");
    scanf("%d", &m);

    // Use struct to handle transitions properly
    struct {
        int from;
        char symbol;
        int to;
    } transitions[m];  

    // Input transitions
    for (int i = 0; i < m; i++) {
        printf("Enter transition %d (fromState inputSymbol toState): ", i + 1);
        scanf("%d", &transitions[i].from);

        char inputSymbol[2];
        scanf("%1s", inputSymbol);

        scanf("%d", &transitions[i].to);

        if (inputSymbol[0] == 'e') {
            transitions[i].symbol = 'e';  // epsilon
        } else {
            transitions[i].symbol = inputSymbol[0];
        }
    }

    // Compute e-closure for each state
    for (int i = 0; i < n; i++) {
        printf("e-closure(%d): {%d ", i, i);
        for (int j = 0; j < m; j++) {
            if (transitions[j].from == i && transitions[j].symbol == 'e') {
                printf("%d ", transitions[j].to);
            }
        }
        printf("}\n");
    }

    return 0;
}

