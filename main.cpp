#include <iostream>
#include <string>
#include <array>
using namespace std;
void prelude();
string username;
int decisions[10];
int fullcheck = 0;
class Inventory {

public:
    string items[5] = {"  ","  ","  ","  ","  "};
    void add(string object){
        int check = 0;
        for(int i = 0; i< 5;i++){
            if(items[i] == "  "){
                items[i] = object;
                cout << "Added!" << endl;
                check++;
                break;

            }
        }
        if(check == 0){
            cout << "Inventory full !";
        }
    }
    void check(){
        for(int i = 0; i<5;i++){
            cout << items[i] << endl;
        }
    }
    void del(string object){
        int check = 0;
        for(int i = 0; i<5;i++){
            if(items[i] == object){
                items[i] = "  ";
                check ++;
                break;
            }
        }
        if(check == 0){
            cout << "No such item in inventory!";
        }
    }

};
Inventory inventory;
void Introduction(){

    cout << "You are a renowned traveler, who scavenges the land for treasure." << endl;
    cout << "One day you happen to come across a tower, and with the lure of potential treasure, enter it." << endl;
    cout << "The moment you do so,you feel your eyelids drooping, and eventually you pass out." << endl;
    cout << "..... Some Unspecified Time later....." << endl;
    cout << "You wake up at what seems to be the top of the tower." << endl;
    cout << "You then hear voices talking about a human sacrifice, and with a sinking feeling you realize the voices are" << endl;
    cout << "referring to you." << endl;
}
void Floor1(){
    int rooms[] = {1,2,3,4};
    cout << "There are four rooms ahead of you, one of which leads to the next staircase, which do you want to enter: " << endl;
    for(int i=0;i<4;i++){
        cout << rooms[i];
        cout << endl;
    }
    cout << "Choose which room to enter: ";
    cin >> decisions[1];
    switch(decisions[1]){
    default:
        cout << "Invalid room number!";
        break;
    case 1:
        cout << "As you opened the door and stepped inside, suddenly water started seeping out of the floor, and suddenly a huge creature with many tentacles appeared, made completely out of water." << endl;
        cout << "\"You dare disturb me, Hydra!,\" It proclaimed. Since you don't have anything to lash out with it struck you with its tentacle and absorbed you, thus killing you." << endl;
        cout << "Game Over.";
        break;
    case 2:
        cout<<"You entered a room, and found a big fountain in the middle, and you saw besides it an oil based lantern, as well a loose brick in the wall that looked like it could be used as a shield" << endl;
        cout<< "What will you do?" << endl;
        cout << "1. Pick up Oil lantern" << endl;
        cout << "2. Pick up shield" << endl;
        cout << "3.Exit room" << endl;
        cout << "Enter choice number: ";
        cin >> decisions[2];
        while(decisions[2] !=3){
            if(decisions[2] == 1){
                cout << "What will you do?" << endl;
                cout << "2. Pick up shield" << endl;
                cout << "3.Exit room." << endl;
                cout << "Enter choice number: ";
                //inventory.add("Oil Lantern");
                cin >> decisions[2];
            }else if(decisions[2] == 2){
                cout << "What will you do?";
                cout << "1. Pick up Oil lantern" << endl;
                cout << "2.Exit room." << endl;
                cout << "Enter choice number: ";
                cin >> decisions[2];
                //inventory.add("Shield");
            }

        }
        cout << "You exited the room!";\
        break;
    case 3:
        cout<<"You entered a room, and found water everywhere, with clothes and other items lying everywhere, and among them you spotted a sword and grappler." << endl;
        cout<< "What will you do?" << endl;
        cout << "1. Pick up Sword" << endl;
        cout << "2. Pick up Grappler" << endl;
        cout << "3.Exit room" << endl;
        cout << "Enter choice number: ";
        cin >> decisions[2];
        while(decisions[2] !=3){
            if(decisions[2] == 1){
                cout << "What will you do?" << endl;
                cout << "2. Pick up Grappler" << endl;
                cout << "3.Exit room." << endl;
                cout << "Enter choice number: ";
                //inventory.add("Sword");
                cin >> decisions[2];
            }else if(decisions[2] == 2){
                cout << "What will you do?"<<endl;
                cout << "1. Pick up Oil lantern" << endl;
                cout << "2.Exit room." << endl;
                cout << "Enter choice number: ";
                cin >> decisions[2];
                //inventory.add("Shield");
            }
        }
        break;
    case 4:
        cout<<"You entered a room, and found a big fountain in the middle, and you saw besides it an oil based lantern, as well a loose brick in the wall that looked like it could be used as a shield" << endl;
        cout<< "What will you do?" << endl;
        cout << "1. Pick up Oil lantern" << endl;
        cout << "2. Pick up shield" << endl;
        cout << "3.Exit room" << endl;
        cout << "Enter choice number: ";
        cin >> decisions[2];
        while(decisions[2] !=3){
            if(decisions[2] == 1){
                cout << "What will you do?" << endl;
                cout << "2. Pick up shield" << endl;
                cout << "3.Exit room." << endl;
                cout << "Enter choice number: ";
                //inventory.add("Oil Lantern");
                cin >> decisions[2];
            }else if(decisions[2] == 2){
                cout << "What will you do?";
                cout << "1. Pick up Oil lantern" << endl;
                cout << "2.Exit room." << endl;
                cout << "Enter choice number: ";
                cin >> decisions[2];
                //inventory.add("Shield");
            }
        }
        break;
    }
}
void prelude(){

        Introduction();
        cout << "What will you do next?" << endl;
        cout << "1. Jump out the open window" << endl;
        cout << "2. Curl in the corner and wait to see what happens" << endl;
        cout << "3. Attempt to break down the door" << endl;
        cout << "Enter option: ";
        cin >> decisions[0];
        switch(decisions[0]){
        case 1:
            cout << "You Jumped out the window and ended up getting impaled by a Hidden spike. Game over" << endl;
            break;
        case 2:
            cout << "You curl up and eventually go to sleep, and when you open your eyes you are tied to a cross" << endl;
            cout << "They start a weird chanting and eventually an arrow shoots out and impales you in the heart and you die. Game Over" << endl;
            break;
        case 3:
            cout << "You ram the door a few doors and it doesn't seem to work.However, when you lean on it to take rest it opens up." << endl;
            cout << "You end up falling down the stairs, and you see an entire floor laid out in front of you" << endl;
            Floor1();
            break;
        default:
            cout << "Input invalid!" << endl;
}
        }

int main()
{
    prelude();
    return 0;

}
