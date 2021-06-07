#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"Teacher.h"
using namespace std;
class User: public Teacher
{
public: string fname, lname;
	  string ID;
	  ofstream ofs;
	  ifstream ifs;
	  User(string fname, string lname, string ID) {
		  this->fname = fname;
		  this->lname = lname;
		  this->ID = ID;
	  }
	  User();
	  ~User();
	  void Add();
	  void View_adm();
	  void View_tea();
	  void View_stu();
	  
};

