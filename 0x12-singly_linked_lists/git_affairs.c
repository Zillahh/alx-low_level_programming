#include <stdio.h>
#include <stdlib.h>

int main() {
    // Run the git add command
    int add_status = system("git add .");

    if (add_status != 0) {
        printf("Error: Git add failed\n");
        return 1;
    }

    // Run the git commit command
    int commit_status = system("git commit -m \"Automated commit\"");

    if (commit_status != 0) {
        printf("Error: Git commit failed\n");
        return 1;
    }

    // Run the git push command
    int push_status = system("git push");

    if (push_status != 0) {
        printf("Error: Git push failed\n");
        return 1;
    }

    printf("Git add, commit, and push completed successfully\n");

    return 0;
}

