#include <iostream>
#include "json.hpp"
#include <fstream>      // std::ifstream
#include <typeinfo>
using namespace std;
using json = nlohmann::json;
int main()
{
    std::ifstream i("example.json");
    json j3;
    i >> j3;

    for(int x = 0; x < j3.at("eBooks").size(); x++)
    {
        cout << "Edition of the book: " << j3.at("eBooks")[x].at("edition") << endl;
        cout << "Language of the book: " << j3.at("eBooks")[x].at("language") << endl;
    }
    return 0;
}
