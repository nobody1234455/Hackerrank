#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book
{
protected:
    string title;
    string author;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
    }
    virtual void display() = 0;
};

// Write your MyBook class here
//   Class constructor
//
//   Parameters:
//   title - The book's title.
//   author - The book's author.
//   price - The book's price.
//
// Write your constructor here
//Write MyBook class
class MyBook : public Book
{
protected:
    int price;

public:
    MyBook(const string &title, const string &author, int price)
        : Book(title, author), price(price) {}

    virtual void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
// class MyBook : Book{
//     private int price;
//     public MyBook(String title, String author, int price) : base(title, author){
//     }

//     //   Function Name: display
//     //   Print the title, author, and price in the specified format.
//     //
//     // Write your method here
//     void display(){
//         cout << "Title: " << title << endl;
//         cout << "Author: " << author << endl;
//         cout << "Price: " << price << endl;
//     }
// // End class
// };
int main()
{
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin >> price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}
