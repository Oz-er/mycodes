#include <stdio.h>
#include <stdlib.h>

int main() {
    int v, ed;

    // Input number of vertices
    printf("Enter the number of vertices: ");
    scanf("%d", &v);

    // Allocate memory for adjacency list
    int **a = (int **)malloc(sizeof(int *) * v);
    int *edgeCount = (int *)malloc(sizeof(int) * v); // Store edge counts for each vertex

    for (int i = 0; i < v; i++) {
        do {
            printf("\nHow many edges for vertex %d?: ", i + 1);
            scanf("%d", &ed);

            if (ed > v - 1) {
                printf("Invalid. The number of edges cannot exceed %d.\n", v - 1);
            }
        } while (ed > v - 1);

        edgeCount[i] = ed; // Store the edge count

        if (ed == 0) {
            a[i] = NULL; // No edges for this vertex
            continue;
        }

        // Allocate memory for edges
        a[i] = (int *)malloc(sizeof(int) * ed);

        printf("\nEnter edges adjacent to vertex %d: ", i + 1);
        for (int j = 0; j < ed; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input node and value to check
    int node, value;
    printf("\nEnter the node you want to check: ");
    scanf("%d", &node);
    printf("\nEnter the directed node you want to check: ");
    scanf("%d", &value);

    // Validate the node
    if (node < 1 || node > v) {
        printf("Invalid node.\n");
        return 1;
    }

    // Check if the value is adjacent to the node
    int check = 0;
    int index = node - 1; // Convert to 0-based index
    for (int j = 0; j < edgeCount[index]; j++) {
        if (a[index][j] == value) {
            check = 1;
            break;
        }
    }

    if (check)
        printf("YES\n");
    else
        printf("NO\n");

    // Free allocated memory
    for (int i = 0; i < v; i++) {
        if (a[i] != NULL) {
            free(a[i]);
        }
    }
    free(a);
    free(edgeCount);

    return 0;
}
