#include <fstream>
#include <iostream>
#include <string.h>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

int main() {
    /*
    std::ifstream f("test.json");
    json data = json::parse(f);

    cout << data << endl;
    cout << data["testInt"] << endl;
    cout << data["testStr"] << endl;
    cout << data["test"] << endl;

    int iT = data["testInt"];
    cout << iT << endl;
    string sT = data["testStr"];
    cout << sT << endl;
    */

    json data;
    json d1;
    json d2;
    json d3;

    cout << d3.empty() << endl;

    d1["Test"] = 1;
    d2["RobTest"] = 2;

    data["Cam"] = d1;
    data["Rob"] = d2;

    cout << data.size() << endl;
    cout << data.items() << endl;

    for (auto& [key, val] : data.items())
    {
        std::cout << "key: " << key << ", value:" << val << '\n';
    }

    std::ofstream o("testWrite.json");
    o << std::setw(4) << data << std::endl;

    return 0;
}

