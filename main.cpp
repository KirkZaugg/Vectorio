#include<iostream>
#include<vector>
#include<string>

std::vector<char> create() {
    std::vector<char> victor = {'a','b','c','d','e'};
    victor.push_back('f');
    return victor;
}

void output(std::vector<char> victor) {
    std::cout << "the first item is: " << victor.at(0) << std::endl;
    std::cout << "The last item is: " << victor.at(victor.size() - 1) << std::endl;
}

int main() {
    std::vector<char> victor = create();
    output(victor);
    victor.pop_back();
    std::cout << "The new last item is: " << victor.at(victor.size() - 1) << std::endl;
    auto iter = victor.begin();
    iter++;
    victor.erase(iter);
    std::cout << "The new second item is: " << victor.at(1) << std::endl;
    victor.at(1) = 'z';
    std::cout << "The new second item is: " << victor.at(1) << std::endl;
    iter--;
    victor.insert(iter, 'x');
    std::cout << "The new first item is: " << victor.at(0) << std::endl << std::endl << "The contents of the vector are as follows:\n";
    for(int i; i < victor.size(); i++) {
        std::cout << victor.at(i) << std::endl;
    }
}