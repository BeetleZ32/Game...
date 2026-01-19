#include <iostream>
using namespace std;

bool isFinished = false;
int user = 100000;

void clearScreen() {

    std::cout << "\033[2J\033[H";
}

void attackMenu() {

}

void keyDetection() {

    while (!isFinished) {

        cin >> user;

        if (user > 6) {
            cout << "Error\n Please Enter a Valid Character: ";
            continue;
        }

        else {

            cout << "Working" << endl;

            switch (user) 
            {
                case 1:
                    attackMenu();
                    break;
                case 2:
                    actionMenu();
                    break;
                case 3:
                    spellMenu();
                    break;
                case 4:
                    inventoryMenu();
                    break;
                case 5:
                    partyMenu();
                    break;
                case 6:
                    settingMenu();
                    break;
                case 0:
                    break;
            }

        }

        isFinished = true;  
    }
};

int main() {

    
    cout << "This is the 'Games' Interface. This'll be the UI for the main menu, where they be able to:\n"
            "\n1. Attack \n2. Action \n3. Spell \n4. Inventory \n5. Party \n6. Settings \n\n0. Quit Testing\n";

    keyDetection();

    cout << "Exiting..." <<endl;

    return 0;
}
