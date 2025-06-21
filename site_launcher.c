#include <stdio.h>
#include <stdlib.h>

int main() {

    // Set console color: 0 = black background, E = light yellow text
    system("color 0E"); 

    int choice; //menu selection

    while (1) {

        printf(" =============================================================================\n");
        printf("                 SiteLauncher - Instant Website Access Tool (V 0.2)\n");
        printf(" =============================================================================\n\n");

        printf(" Select a website to open:\n");
        printf("   1 - Google      2 - Youtube      3 - Google Drive    4 - Maps     5 - Gmail\n\n");
        printf("   6 - Chatgpt     7 - Deepseek     \n\n");
        printf("  11 - GitHub     12 - MongoDB      \n\n");
        printf("  16 - Whatsapp   17 - Canva        \n\n");
        printf("  21 - Moratuwa   22 - Coursera     \n\n");
        printf("  26 - Courseweb  \n\n");
        printf("   0 - Exit\n\n"); 

        printf("Select your site number (0 to Exit): ");
        scanf("%d", &choice);

        // Check user wants to exit
        if (choice == 0) {
            printf("Goodbye! Closing SiteLauncher.\n\n");
            break;
        }

        switch (choice) {
            case 1:
                system("start https://www.google.com/");
                break;
            case 2:
                system("start https://www.youtube.com/");
                break;
            case 3:
                system("start https://drive.google.com/drive/u/0/");
                break;
            case 4:
                system("start https://www.google.com/maps?authuser=0");
                break;
            case 5:
                system("start https://mail.google.com/");
                break;
            case 6:
                system("start https://chat.openai.com/");
                break;
            case 7:
                system("start https://chat.deepseek.com/");
                break;
            case 11:
                system("start https://github.com/sdinukarathnayake");
                break;
            case 12:
                system("start https://account.mongodb.com/account/login");
                break;
            case 16:
                system("start https://web.whatsapp.com/");
                break;
            case 17:
                system("start https://www.canva.com/");
                break;
            case 21:
                system("start https://open.uom.lk/lms/login/index.php");
                break;
            case 22:
                system("start https://www.coursera.org/");
                break;
            case 26:
                system("start https://courseweb.sliit.lk/my/");
                break;
            default:
                printf("Invalid choice. Please try again.\n");  
        }

        printf("\n"); 
    }

    return 0; 
}
