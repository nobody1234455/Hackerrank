#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
    // Write your constructor here

    /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
    // Write your function here
    Student(string firstName, string lastName, int id, vector<int> &scores) : Person(firstName, lastName, id), testScores(scores) {}

    string calculate()
    {
        int n = testScores.size();
        string letter;
        letter = (char *)malloc(sizeof(char) * 2);
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += testScores[i];
        }
        float result = sum / n;
        if (result >= 90)
            letter = "O";
        else if (result >= 80)
            letter = "E";
        else if (result >= 70)
            letter = "A";
        else if (result >= 55)
            letter = "P";
        else if (result >= 40)
            letter = "D";
        else
            letter = "T";

        return letter;
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}