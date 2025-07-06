#include <iostream>
using namespace std;

class Player {
    int playerNo;
    string name;
    int matches;
    int *goals;

public:
    Player(int no, string n, int m) {
        playerNo = no;
        name = n;
        matches = m;
        goals = new int[matches];

        cout << "Enter goals for " << matches << " matches:\n";
        for (int i = 0; i < matches; i++) {
            cout << "Match " << i + 1 << ": ";
            cin >> goals[i];
        }
    }

    void display() {
        cout << "Player No: " << playerNo << "\nName: " << name << "\nGoals: ";
        for (int i = 0; i < matches; i++)
            cout << goals[i] << " ";
        cout << endl;
    }

    ~Player() {
        delete[] goals;
    }
};

int main() {
    Player p(1, "Kishor", 3);
    p.display();
    return 0;
}
