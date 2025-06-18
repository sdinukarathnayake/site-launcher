#include <stdio.h>
#include <stdlib.h>

int main() {

    int choice;

    printf(" ====================================================\n");
    printf("  SiteLauncher - Instant Website Access Tool (V 0.1)\n");
    printf(" ====================================================\n\n");

    printf(" Select a website to open:\n");

    printf("   1 - Google     2 - Youtube      3 - Google Drive    4 - Maps\n\n");
    printf("   5 - Chatgpt    6 - Deepseek \n\n");

    printf("  10 - GitHub    11 - MongoDB     \n\n");

    printf("Select your site number : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            system("start https://www.google.com/");
            break;
        case 2:
            system("start https://duckduckgo.com/");
            break;
                case 3:
            system("start https://drive.google.com/drive/u/0/");
            break;
                   case 4:
            system("start https://www.google.com/maps?authuser=0");
            break;
                   case 5:
            system("start https://chatgpt.com/");
            break;
             case 6:
            system("start https://chat.deepseek.com/");
            break;
                   case 10:
            system("start https://github.com/sdinukarathnayake");
            break;
                   case 11:
            system("start https://account.mongodb.com/account/login");
            break;
        default:
            printf("Invalid choice.\n");
    }

    system("pause");
    return 0;
}