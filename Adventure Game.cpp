#include <iostream>
#include <conio.h>
#include "Adventure.h"
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    cout << "Welcome to the Adventure Game!" << endl;
    cout << "You are in a forest hunting for a treasure.\nThere you found a temple which might have a treasure in it." << endl;
    cout << "You have a backpack with following items:-\n1. Torch\n2. Map\n3. Pickaxe\n4. Apple" << endl;
    cout << "There is a narrow passage leading to the temple\nyou enter it by turning your flashlight ON." << endl;
    cout << "There is a symbol carved on the door, you look through your map and find that it's one of the clues" << endl;
    cout << "You enter the temple and find that there are statues with precious jewellry on it.\nWhat will you do?" << endl;
    cout << "Enter 1 to take stones\nEnter 2 to leave them\n" << endl;
    cin >> ch;
    switch (ch)
    {
        case '1':
            cout << "You take the stones and put them in your backpack" << endl;
            destroy();
            break;
        case '2':
            cout << "You leave the stones and move forward" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            cout << "You left the game" << endl;
            cout << "Press any key to exit..." << endl;
            getch();
            exit(0);
            break;
    }
    cout << "You find a door with dim lights coming from behind, you enter the room." << endl;
    cout << "You find a trophy of pure gold and precious stones inside the room at the center" << endl;
    cout << "You find a skeleton inside the trophy with a golden sword in it's hand" << endl;
    cout << "What will you do?" << endl;
    cout << "Enter 1 to take the trophy and the sword\nEnter 2 to remove the skeleton and take the trophy without sword\nEnter 3 to leave the trophy and move forward" << endl;
    cin >> ch;
    switch (ch)
    {
    case '1':
        cout << "You take the trpohy and the sword and put them in your backpack" << endl;
        destroy();
        break;
    case '2':
        cout << "You remove the skeleton and take the trophy without sword" << endl;
        destroy();
        break;
    case '3':
        cout << "You leave the trophy and move forward" << endl;
        break;
    
    default:
        cout << "Invalid input" << endl;
        cout << "You left the game" << endl;
        cout << "Press any key to exit..." << endl;
        getch();
        exit(0);
        break;
    }
    cout << "You smell something delicious and follow the smell" << endl;
    cout << "You find a room with a table and a chair with a plate of apple pie on it" << endl;
    cout << "What will you do?" << endl;
    cout << "Enter 1 to eat the pie\nEnter 2 to put your apple on top of the apple pie\nEnter 3 to leave pie as it is." << endl;
    cin >> ch;
    switch (ch)
    {
    case '1':
        cout << "You eat the pie and feel dizzy" << endl;
        cout << "You fell asleep, a monster came and ate you" << endl;
        cout << "GAME OVER" << endl;
        cout << "Press any key to exit..." << endl;
        getch();
        exit(0);
        break;
    case '2':
        cout << "You put apple on top of the pie" << endl;
        cout << "You heard a loud creaky noise, you hid behind the door and saw a monster coming towards the pie." << endl;
        cout << "The monster fell asleep after eating the pie." << endl;
        cout << "You took the key from monster's locket and ran away!" << endl;
    case '3':
        cout << "You leave the pie and move forward" << endl;
        cout << "A monster incoming saw you and killed you" << endl;
        cout << "GAME OVER" << endl;
        cout << "Press any key to exit..." << endl;
        getch();
        exit(0);
        break;
    default:
        cout << "Invalid input" << endl;
        cout << "You left the game" << endl;
        cout << "Press any key to exit..." << endl;
        getch();
        exit(0);
        break;
    }
    cout << "You used the key to open the door and found a treasure chest" << endl;
    cout << "You opened the chest and found a lot of gold and precious stones" << endl;
    cout << "You took the treasure and ran away from the temple" << endl;
    cout << "You won the game!" << endl;
    cout << "Press any key to exit..." << endl;
    getch();
    return 0;
}