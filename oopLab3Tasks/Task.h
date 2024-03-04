#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Task
{
public:
    string description;
    bool completed;
    Task(string desc) : description(desc), completed(false) {}

};
