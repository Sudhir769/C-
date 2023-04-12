#include <bits/stdc++.h>
using namespace std;

class Hero{
    public:
        int health;
        char level;
    // private:

        int getHealth(){
            return health;
        }
        char getLevel(){
            return level;
        }
        void setHealth(int h){
            health = h;
        }
        void setLevel(char l){
            level = l;
            }
};

int main(){
        Hero Batman;
        Batman.health = 100;
        Batman.level = 'A';

        cout << "Health is :" << Batman.health << endl;
        cout << "Level is :" << Batman.level << endl;
        cout << endl;

        Batman.setHealth(70);
        Batman.setLevel('B');
        cout << "Health is :" << Batman.getHealth() << endl;
        cout << "Level is :" << Batman.getLevel() << endl;
}