#include <iostream>
#include <fstream>
#include <string>

void userIn()
{
    char userReturn;
    std::cout << "Would you like to add(a), show(s), or remove(r) from your list: ";
    if(userReturn == 'a')
    {
        addlist(fileName);
    }
    if(userReturn == 's')
    {
        showList(fileName);
    }
    if(userReturn == 'r')
    {
        removeList(fileName);
    }
    else
    {
        std::cout << "Incorrect Input \n";
        return userIn(fileName);
    }

}

void addlist()
{


}

void showList()
{
    std::string line;
    while()
    {
        std::cout << line << "\n";
    }
}

void removeList()
{

}

int main()
{
    const std::string fileName = "ToDoFile.txt";
    std::ofstream thisFile(fileName, std::ios::out);
    if(thisFile.is_open())
    {
        userIn();

        thisFile.close();

    }
    else
    {
        std::cout << "Error opening";
    }
    return 0;
}

