#include <iostream>
#include <fstream>
#include <string>

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
    while(stop != "n")
    {
        //Get the item or task the user wants to add to the list
        cout << "What would you like to add? " << endl;
        getline(cin, item);

        //append the file with the new item
        std::ofstream thisFile(fileName, std::ios::app);

        //Check if they want to stop
        cout << "Would you like to add an item to your To Do List (y / n): ";
        cin >> stop;
        
        //clears the buffer
        cin.ignore();

    }

}


void showList()
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
    return 0;
}

