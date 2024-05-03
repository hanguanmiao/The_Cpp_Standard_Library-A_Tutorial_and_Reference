#include <iostream>
#include <memory>
#include <vector>
#include <string>

using namespace std;

int main()
{
    std::shared_ptr<std::string> pNico(new std::string("nico"));
    std::shared_ptr<std::string> pJutta(new std::string("jutta"));

    (*pNico)[0] = 'N';
    pJutta->replace(0,1,"J");

    std::vector<std::shared_ptr<std::string>> whoMadeCoffee;
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pNico);
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pNico);

    for(auto ptr : whoMadeCoffee){
        std::cout << *ptr << "   ";
    }
    std::cout << std::endl;

    *pNico = "Nicolai";

    for(auto ptr : whoMadeCoffee){
        std::cout << *ptr << "   ";
    }
    std::cout << std::endl;

    std::cout << "use_count: " << whoMadeCoffee[0].use_count() << std::endl;

    return 0;
}
