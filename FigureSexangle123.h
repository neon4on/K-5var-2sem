#pragma once
#include "Figure123.cpp"
#include <vector> // Вектор
#include <algorithm> // Find 
#include <iostream>
using namespace std;

class FigureSexangle123 : public Figure123
{
public:
    void Create(int& num);
    void Delete(int & num);
    void Show(int& num);
    void Verification(int& num);
    void MoveO(int& num);
    void Intersect(int& num);
};

