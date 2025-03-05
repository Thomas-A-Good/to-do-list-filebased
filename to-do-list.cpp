#include <iostream>
#include <fstream>
#include <string>

void addlist(std::string);
void showList(std::string);
void removeList(std::string);

void userIn(std::string fileName)
{
    char userReturn;
    std::cout << "Would you like to add(a), show(s), or remove(r) from your list: ";
    if(userReturn == 'a')
    {
        addlist(fileName);
    }
    else if(userReturn == 's')
    {
        showList(fileName);
    }
    else if(userReturn == 'r')
    {
        removeList(fileName);
    }
    else
    {
        std::cout << "Incorrect Input \n";
        return userIn(fileName);
    }

}

void addlist(std:: string fileName)
{
    std::string stop;
    std::string item;
    
    while(stop != "n")
    {
        //Get the item or task the user wants to add to the list
        std:: cout << "What would you like to add? " << std::endl;
        std::getline(std:: cin, item);

        //append the file with the new item
        std::ofstream thisFile(fileName, std::ios::app);
        thisFile << item;

        //Check if they want to stop
        std::cout << "Would you like to add an item to your To Do List (y / n): ";
        std::cin >> stop;
        
        //clears the buffer
        std::cin.ignore();

    }

}


void showList(std::string fileName)
{
    std::string line;
    //while()
    //{
    //    std::cout << line << "\n";
    //}
}

void removeList(std::string fileName)
{
    std::cout << "remove";
}

int main()
{
    const std::string fileName = "ToDoFile.txt";
    addlist(fileName);
    return 0;
}

