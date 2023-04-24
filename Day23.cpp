#include <bits/stdc++.h>
using namespace std;

// Encapsulation
// Account class
class Account {
private:
    string name;
    double balance;

public:
    Account(string name, double balance) {
        this->name = name;
        this->balance = balance;
    }

    string getName() {
        return name;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        balance -= amount;
    }
};

// Bank class
class Bank {
private:
    vector<Account> accounts;

public:
    void addAccount(string name, double balance) {
        Account account(name, balance);
        accounts.push_back(account);
    }

    void deposit(string name, double amount) {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].getName() == name) {
                accounts[i].deposit(amount);
                return;
            }
        }
        cout << "Account not found." << endl;
    }

    void withdraw(string name, double amount) {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].getName() == name) {
                if (accounts[i].getBalance() >= amount) {
                    accounts[i].withdraw(amount);
                    return;
                } else {
                    cout << "Insufficient funds." << endl;
                    return;
                }
            }
        }
        cout << "Account not found." << endl;
    }

    void printBalances() {
        for (int i = 0; i < accounts.size(); i++) {
            cout << accounts[i].getName() << ": $" << accounts[i].getBalance() << endl;
        }
    }
};

// Inheritance
class Person {
protected:
    string name;
    int age;
public:
    Person(string _name, int _age) : name(_name), age(_age) {}
    void introduce() {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }
};

class Student : public Person {
private:
    string major;
public:
    Student(string _name, int _age, string _major) : Person(_name, _age), major(_major) {}
    void introduce() {
        cout << "I am a student. ";
        Person::introduce();
        cout << "My major is " << major << "." << endl;
    }
};

class Teacher : public Person {
private:
    string subject;
public:
    Teacher(string _name, int _age, string _subject) : Person(_name, _age), subject(_subject) {}
    void introduce() {
        cout << "I am a teacher. ";
        Person::introduce();
        cout << "I teach " << subject << "." << endl;
    }
};

// polymorphism
class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing a square" << endl;
    }
};


// Main function
int main() {
    // Create Bank object
    Bank bank;

    // Add two accounts
    bank.addAccount("John Smith", 1000);
    bank.addAccount("Jane Doe", 500);

    // Print account balances
    cout << "Account balances:" << endl;
    bank.printBalances();

    // Deposit $500 into John's account
    bank.deposit("John Smith", 500);
    bank.deposit("John Smith", 500);

    // Withdraw $200 from Jane's account
    bank.withdraw("Jane Doe", 200);

    // Print account balances again
    cout << "Account balances after transactions:" << endl;
    bank.printBalances();

    bank.addAccount("Sudhir Maurya", 100000);
    bank.printBalances();
    cout << endl;

    // Inheritance
    Person* person = new Person("John", 30);
    Student* student = new Student("Jane", 20, "Computer Science");
    Teacher* teacher = new Teacher("Bob", 40, "Mathematics");

    person->introduce();
    student->introduce();
    teacher->introduce();

    delete person;
    delete student;
    delete teacher;
    cout << endl;

    // polymorphism
    Shape* shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Square();
    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }
    return 0;
}
