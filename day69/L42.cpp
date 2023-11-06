#include<iostream>
using namespace std;

/*
class Hero{
    private:
    int health;
    public:
    char level;

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    int setHealth(int h){
        health = h;
    }

    int setLevel(char ch){

        level = ch;
    }

};

// int main(){
//     //creation of object
//     //static allocation
//     Hero jardaani;
//     cout << "Jardaani health is : " << jardaani.getHealth() << endl;
//     //use setter
//     jardaani.setHealth(70);
//     cout << "After setting the health to 70, Jardaani's health is : "<<jardaani.getHealth()<<endl;
// } 

int main(){
    //static allocation
    Hero jardaani;
    jardaani.setHealth(85);
    jardaani.setLevel('A');
    cout << "Level is : " << jardaani.level << endl;
    cout << "Health is : " << jardaani.getHealth() << endl;//health is private thats why we using getHealth function
   
    //dynamic allocation
    Hero *b = new Hero;
    b->setHealth(92);
    b->setLevel('B');
    cout << "Level is : " << (*b).level << endl; //we can also use b -> level
    cout << "Health is : " << (*b).getHealth() << endl;
    cout << "Health is : " << b->getHealth() << endl;
}

*/

/*
class Hero{
    private:
    int health;
    public:
    Hero(){
        cout << "Constructor called"<<endl;
    }

    //parameterized constructor
    Hero(int health){
        cout << "This -> " << this << endl;
        this -> health = health;
    }
};

int main() {
    // static allocation
    Hero b;
    Hero a(10);
    cout << "address : " << &a << endl;
    return 0;
}
*/


/*
class Hero{
    public:
    int health;
    int level;
    Hero(){
        cout << "Simple constructor called" << endl;
    }
    //parameterized constructor
    Hero(int health){
        this -> health = health;
    }
    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }
    void print(){
        cout << "health " << this->health << endl;
        cout << "Level " << this->level <<endl;
    }
};

int main(){
    Hero S(70, 'C');
    S.print();

    //copy constructor
    Hero R(S);
    R.print();
    return 0;
}

*/
 
/*
    !Encapsulation example
*/

// class Student{
//     private:
//     string name;
//     float gpa;
//     int age;
//     public:
//     int getAge(){
//         return this->age;
//     }
// };

// int main(){
//     Student s1;
//     cout<<"Sab sahi chalra hai"<<endl;
//     return 0;

// }

  