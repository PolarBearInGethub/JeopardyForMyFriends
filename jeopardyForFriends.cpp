#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>

void tutorialExplanation();
void jeopardyPlayerBoard(std::vector<std::vector<std::string>> boardSetUp);
void jeopardyGame();
int playerQuestioning();
int playerColumnChoice(int choice);



int main() {
    std::vector<std::string> player_list;
    int player_amount;
    std::string player_name;
    std::string tutorial_choice;
    std::string lower_tutorial_choice;
    std::cout << "Welcome to my Jeopardy game!\nDo you wish for a tutorial?: " << std::endl;
    std::cin >> tutorial_choice;
    for (int c = 0; c < tutorial_choice.size(); c++) {
        lower_tutorial_choice += (char)std::tolower(tutorial_choice[c]);
    }
    if (lower_tutorial_choice == "yes") {
        tutorialExplanation();
    }
    std::cout << "How many people are playing?" << std::endl;
    std::cin >> player_amount;
    for (int i = 0; i < player_amount; i++) {
        std::cout << "Player " << (i + 1) << ": " << std::endl;
        std::getline(std::cin, player_name);
        player_list.push_back(player_name);
    }
    
    

    return 0;
}

void tutorialExplanation() {
    std::cout << "This game functions just like Jeopardy, however there are a few differences!" << std::endl;
    std::cout << "Unlike Jeopardy... well, for now it's just going to be like Jeopardy actually" << std::endl;
    std::cout << "Hope you have fun!\n";
}

void jeopardyGame() {
    std::vector<int> gameOptions;
}

void jeopardyPlayerBoard(std::vector<std::vector<std::string>> boardSetUp) {
    
    for (int i = 0; i < 13; i++) {
        if (i == 0) {
            std::cout << "________________________________________________" << std::endl; // 46 _'s
        } else if (i == 13) {
            std::cout << "|______________________________________________|" << std::endl; // 44 _'s && 2 |'s
        } else {
            if ((i % 2) == 0) {
                std::cout << "----------------------------------------------" << std::endl; // 46 -'s
            } else if ((i != 1)) {
                break; // paused here
            }
        }
    }
}
/* Drawing idea:
______________________________________________
|BioChem |English |Math    |Coding  |Asian E.|
----------------------------------------------
| 200    |        |        |        |        |
----------------------------------------------
|  400   |
---  
|  6
----
|   8
---
|   1
|_____________________________________________|
*/
