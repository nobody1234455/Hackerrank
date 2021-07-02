#include "Author.cpp"

class Book
{
private:
    string name;
    vector<Author> authors;
    double price;

public:
    Book(string name, vector<Author> authors, double price)
    {
        this->name = name;
        this->authors = authors;
        this->price = price;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setPrice(double price)
    {
        this->price = price;
    }
    string getName()
    {
        return name;
    }
    double getPrice()
    {
        return price;
    }
    // string getAuthorNames()
    // {
    //     string new_ = "";
    //     for (int i = 0; i < authors.size(); i++)
    //     {
    //         new_ = new_ + authors[i].getName();
    //         new_ += ", ";
    //     }
    //     return new_;
    // }
    string getAuthorNames()
    {
        string authorNames = "";
        for (int i = 0; i < authors.size() - 1; i++)
        {
            authorNames += authors[i].getName() + ", ";
        }
        authorNames += authors[authors.size() - 1].getName();
        return authorNames;
    }
};