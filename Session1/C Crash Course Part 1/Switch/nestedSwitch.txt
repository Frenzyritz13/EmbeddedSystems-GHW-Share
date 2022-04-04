#include <stdio.h>
int main() {
        int ID = 500;
        int password = 000;
        printf("Plese Enter Your ID:\n ");
        scanf("%d", & ID);
        switch (ID) {
            case 500:
                printf("Enter your password:\n ");
                scanf("%d", & password);
                switch (password) {
                    case 000:
                        printf("Welcome Dear Programmer\n");
                        break;
                    default:
                        printf("incorrect password");
                        break;
                }
                break;
            default:
                printf("incorrect ID");
                break;
        }
}