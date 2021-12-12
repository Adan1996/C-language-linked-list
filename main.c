#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

void display(struct node *start);
struct node *addatbeg(struct node *start, int num);

int main() {
    struct node *start = NULL;
    int choice, num;

    while(1) {
        printf("\n1. Display\n");
        printf("2. Insert at Begining\n");
        printf("9. Exit\n\n");

        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("start address: %x -> ", start);
                display(start);
                break;
            case 2:
                printf("Enter the number:\n");
                scanf("%d", &num);
                start = addatbeg(start, num);
                break;
            case 9:
                exit(1);
            default:
                printf("invalid options");
        }
    }
    return 0;
}

void display(struct node *start) {
    struct node *p;
    if(start == NULL) {
        printf("Empty list!\n\n");
        return;
    }

    p = start;
    while(p != NULL) {
        if(p->link == 0) {
            printf("| %d address: %s |", p->info, "NULL");
        } else {
            printf("| %d address: %X |", p->info, p->link);
        }
        p = p->link;
        if(p == 0) {
            printf("");
        } else {
            printf("\n%X -> ", p);
        }

    }
}

struct node *addatbeg(struct node *start, int num) {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = num;
    temp->link = start;
    start = temp;
    return start;
}