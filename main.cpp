#include <iostream>
#include <vector>
#include <unordered_map>
#include "search.h"

int main() {

    // Linear search
    std::vector<int> ids = {1023, 8456, 2345, 9012, 6789 };
    int targetID = 2345;

    int index = linearSearch(ids, targetID);
    std::cout << "Linear search: looking for ID " << targetID << ", found at index " << index << std::endl;

    // Binary search
    std::vector<int> sortedIds = {1023, 2345, 6789, 8456, 9012};
    targetID = 8456;

    index = binarySearch(sortedIds, targetID);
    std::cout << "Binary search: looking for ID " << targetID << ", found at index " << index << std::endl;

    // Map
    std::unordered_map<int, std::string> students;
    students[1023] = "River";
    students[2345] = "David";
    students[8456] = "Liani";

    std::cout << "Map search: ID 2345 belongs to " << students[2345] << std::endl;

    return 0;
}
