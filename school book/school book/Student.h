#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"User.h"
#include<vector>
#include"Assignment.h"
using namespace std;
class Student:public User
{
public:
      User u;
      Assignment a;
      vector<int> grade;
      Student(User u, Assignment a, vector<int> grade) {
          this->grade = grade;
      }
      Student() {

      }
      ~Student() {

      }
};

