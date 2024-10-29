#include <iostream>
using std::string;
class Book
{
private:
    string Title;
    string Author;
    string Publication;
    int Price;

public:
    void Behavior()

    {
        std::cout << "The Title of the book : " << Title << "\n";
        std::cout << "The Author of the book : " << Author << "\n";
        std::cout << "Published by : " << Publication << "\n";
        std::cout << "for RS: " << Price << "\n\n";
    }

    void setTitle(string title)
    {
        Title = title;
    }
    string getTitle()
    {
        return Title;
    }
    void setAuthor(string author)
    {
        Author = author;
    }
    string getAuthor()
    {
        return Author;
    }
    void setPrice(int price)
    {
        Price = price;
    }
    int getPrice()
    {
        return Price;
    }

    Book(string title, string author, string publication, int price)
    {
        Title = title;
        Author = author;
        Publication = publication;
        Price = price;
    }
};

int main()
{
    std::cout << "Welcome to C++ Encapsulation!\n\n";
    Book book01("Harry Potter :Philosophar Stone", "JK.Rowlings", "UK Publication 2000", 1299);
    book01.setTitle("Harry Potter:Half Blood Prince");
    book01.setAuthor("J.K Rowling");
    book01.setPrice(799);
    book01.Behavior();
    Book book02("XYZ", "John Doe", "Amazon", 0);
    book02.setTitle("Wings of Fire");
    book02.setAuthor("A.P.J Abdul Kalam");
    book02.setPrice(100);
    book02.Behavior();

    return 0;
}