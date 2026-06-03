#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    int health;
    int score;
    string name;

public:
    void setHealth(int h) {
        this->health = h;
    }

    void setScore(int s) {
        this->score = s;
    }

    void setName(string n) {
        this->name = n;
    }

    int getHealth() {
        return this->health;
    }

    int getScore() {
        return this->score;
    }

    string getName() {
        return this->name;
    }
};

int maxScore(Player a, Player b) {
    return (a.getScore() > b.getScore())
        ? a.getScore()
        : b.getScore();
}

Player maxHealth(Player a, Player b) {
    return (a.getHealth()>b.getHealth())?a:b;
}

int main() {

    Player p1;
    p1.setHealth(23);
    p1.setScore(80);
    p1.setName("Abhitics");

    Player p2;
    p2.setHealth(70);
    p2.setScore(100);
    p2.setName("Shreyanza");

    cout << "Max Score: " << maxScore(p1, p2) << endl;

    Player sanket = maxHealth(p1, p2);

    cout << "Player with max health:" << endl;
    cout << sanket.getName() << endl;
    cout << sanket.getHealth() << endl;

    return 0;
}