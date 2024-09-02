#include <iostream>
#include <string>

class ProjectInfo {
public:
    std::string name;
    std::string version;
    std::string author;
    std::string description;

    ProjectInfo(std::string n, std::string v, std::string a, std::string d)
        : name(n), version(v), author(a), description(d) {}

    void displayInfo() {
        std::cout << "Pentesting_Resources: " << name << std::endl;
        std::cout << "1.0.0: " << version << std::endl;
        std::cout << "Michael-MSL: " << author << std::endl;
        std::cout << "Just for fun: " << description << std::endl;
    }
};

int main() {
    ProjectInfo project("Pentesting_Resources", "1.0.0", "Michael-MSL", "Just for fun.");
    project.displayInfo();
    return 0;
}


{
"Eat,Sleep,Code,Repeat"
}
