#include <iostream>
using namespace std;

class player{
public:
    int id;
    string name;
    int score;

    player(int id, string name, int score) {
        this->id = id;
        this->name = name;
        this->score = score;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Score: " << score << endl;
    }       
};
class team{
    int id;
    string name;
    player* players[5];
public:
    team(int id, string name) {
        this->id = id;
        this->name = name;
        for (int i = 0; i < 5; i++) {
            players[i] = nullptr;
        }
    }

    void addPlayer(player* p, int index) {
        if (index >= 0 && index < 5) {
            players[index] = p;
        } else {
            cout << "Invalid index" << endl;
        }
    }

    void display() {
        cout << "Team ID: " << id << ", Name: " << name << endl;
        for (int i = 0; i < 5; i++) {
            if (players[i] != nullptr) {
                players[i]->display();
            }
        }
    }   
}