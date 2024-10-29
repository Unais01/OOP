#include <iostream>
using std::string;

class Book
{
public:
    string Title;
    string Author;
    string Publication;
    int Price;
    void Behavior()
    {
        std::cout << "The Title of the book : " << Title << "\n";
        std::cout << "The Author of the book : " << Author << "\n";
        std::cout << "Published by : " << Publication << "\n";
        std::cout << "for RS: " << Price << "\n";
    }

    Book(string title, string author, string publication, int price)
    {
        Title = title;
        Author = author;
        Publication = publication;
        Price = price;
    }
    // Constuctor : Special type of Function which is auto invoked on the time of object creation
    // Constuctor do not have return type
    // Should be name same as of class name
    // By defualt Compiler add defualt constructor if not specified any
};

int main()
{
    std::cout << "Hello! Object Oriented Programming\n";

    Book book01("Harry Potter :Philosophar Stone", "JK.Rowlings", "UK Publication 2000", 1299);
    book01.Behavior();

    Book book02("Harry Potter:The Serious Black", "JK.Rowlings", "UK Publication 2002", 1499);
    book02.Behavior();

    return 0;
}