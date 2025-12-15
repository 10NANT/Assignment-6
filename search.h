#ifndef SEARCH_H
#define SEARCH_H

#include <vector>
#include <unordered_map>
#include <string>

// Linear search
int linearSearch(const std::vector<int>& arr, int target);

// Binary search (sorted array)
int binarySearch(const std::vector<int>& arr, int target);

// Map functions
void addStudent(std::unordered_map<int, std::string>& students, int id, std::string name);
std::string findStudent(const std::unordered_map<int, std::string>& students, int id);

#endif
