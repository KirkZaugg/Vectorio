#include<iostream>
#include<vector>
#include<string>

std::vector<char> create() {
    std::vector victor = {'a','b','c','d','e'};
    victor.push_back('a');
    return victor;
}

output(std::vector<char> victor) {
    std::cout << victor.at(0);
    std::cout << victor.at(victor.size() - 1);
}

int main() {
    std::vector<char> victor = create();
    output(victor);
    victor.pop_back();
    std::cout << victor.at(victor.size() - 1);
    auto iter = victor.begin();
    iter++;
 
}