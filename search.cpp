#include "search.h"

// Linear search
int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Binary search
int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

// Add student
void addStudent(std::unordered_map<int, std::string>& students, int id, std::string name) {
    students[id] = name;
}

// Find student
std::string findStudent(const std::unordered_map<int, std::string>& students, int id) {
    if (students.find(id) != students.end()) {
        return students.at(id);
    }
    return "Not found";
}
