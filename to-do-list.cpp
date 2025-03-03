#include <iostream>
#include <fstream>
#include <string>

void userIn()
{
    char userReturn;
    std::cout << "Would you like to add(a), show(s), or remove(r) from your list: ";
    if(userReturn == 'a')
    {
        addlist();
    }
    if(userReturn == 's')
    {
        showList();
    }
    if(userReturn == 'r')
    {
        removeList();
    }
    else
    {
        std::cout << "Incorrect Input \n";
        return userIn();
    }

}

void addlist()
{

}

void showList()
{
    std::string line;
    while(std::getline(thisFile, line))
    {
        std::cout << line << "\n";
    }
}

void removeList()
{

}

int main()
{
    std::ofstream thisFile("ToDoFile.txt", std::ios::out);
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

