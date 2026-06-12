#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void loadtasks(std::vector<std::string>& mytask)
{

    std::ifstream loadFile("tasks.txt");
    if (loadFile.is_open())
    {

        std::string singletask;
        while (getline(loadFile, singletask))
        {
            mytask.push_back(singletask);
        }

        loadFile.close();
        std::cout << "Your tasks are successfully saved from the file\n";
    }
    else
    {
        std::cout << "we can not find any saved tasks in that file";
    }
}
void saveTasks(const std::vector<std::string> &mytask)
{
    std::ofstream outFile("tasks.txt"); 
    if (outFile.is_open())
    {
        for (const std::string &task : mytask)
        {
            outFile << task << "\n"; 
        }
        outFile.close();
        std::cout << "[system]: All tasks were saved to file succesfully!\n";
    }
    else
    {
        std::cerr << "[error]: there was a problem in saving the tasks into file!\n";
    }
}
    int main(){
        std::vector<std::string> mytasks;
        loadtasks(mytasks);
        int choice; std::string newintent;

        while(true){
            std::cout << "\n -=-=-=-=-=jamikdev Taskmanager-=-=-=-" << std::endl;
            std::cout << "1 seeing the tasks\n";
            std::cout << "2 adding tasks to file\n";
            std::cout << "3 save and exit\n";
            std::cout << "your choice  ";
            std::cin >> choice;
            std::cin.ignore();
            if (choice == 1)
            {

                if (mytasks.empty())
                {
                    std::cout << "What the idiot you have nothing to do";
                }
                else
                {
                    for (const std::string &babe : mytasks)
                    {
                        std::cout << "-)" << babe << '\n';
                    }
                }
            }
            else if (choice == 2)
            {
                std::cout << "Enter the new tasks";
                std::getline(std::cin, newintent);
                mytasks.push_back(newintent);
                std::cout << "Your tasks were added succesfully";
            }
            else if (choice == 3)
            {
                saveTasks(mytasks);
                std::cout << "[System]: congrats you have succesfully saved your tasks to vector my tasks and free to go or exit the program\n";
                break;
            } else {
                std::cout << "Your operation canceled, check the number you entered ";
            }
        }
        
        
        return 0;
    }
    

    
    

    //checking

    
