#include<iostream>
#include"Assignment.h"
#include"Student.h"
#include"Teacher.h"
#include"User.h"
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
void Add(User u) {
	ifstream ifs("user.txt", fstream::app);
	ifs >> u.fname >> u.lname >> u.ID;
}
void Dlt(vector<User> u,string cID) {
	for (int i = 0; i< u.size(); i++) {
		if (u[i].ID==cID) {
			erase(u[i],u[i]+1);//????
		}
	}
}
// როგორც უზერზე გვიწერია ისე დავწეროთ კონკრეტული txt ფაილიდან ვექტორში ინფორმაციის ჩამოტვირთვა (უზერზეც შესაცვლელია if ის გარეთაა გამოსატანი)
int main() {
	ifstream fin("admins.txt");
	vector<Student> s;
	vector<Teacher> t;
	vector<Assignment> a;
	vector<User> u;
	string fname, lname, ID;
	string userType;
	User user1;
	Teacher t1;
	Student s1;
	cout << "which type of user would you like to log in to" << endl;
	cin >> userType;
	cout << "enter first name "<<endl;
	cin >> fname;
	cout << " enter last name " << endl;
	cin >> lname;
	cout << "enter ID " << endl;
	cin >> ID;
	if (userType == "user")
	{
		while (fin >> user1.fname >> user1.lname >> user1.ID) 
		{
			u.push_back(user1);
		}
		for (int i = 0; i < u.size(); i++)
		{
			if (u[i].ID == ID)
			{
				if (i == u.size() - 1 && u[i].ID != ID)
				{
					cout << "this user does not exist" << endl;
					break;
				}
				cout << " WHICH LIST WOULD YOU LIKE TO SEE?" << endl << "1)	Administrators" << endl << "2)	Teachers" << endl << "3)	Students" << endl;
				int k; //გადასაყვანია დინამიურზე
				cin >> k;
				switch (k) {
				case 1: for (int i = 0; i < u.size(); i++) {
					u[i].View_adm();
				}
				}
					
			}
		}
	}
	else if (userType == "teacher") {
		while (fin >> t1.fname >> t1.lname >> t1.ID) {
			t.push_back(t1);
		}
		for (int i = 0; i < u.size(); i++) {
			if (t[i].ID == ID)
				// გაგრძელება under construction 
		}
	}
	else if (userType == "student") {
		while (fin >> s1.fname >> s1.lname >> s1.ID) {
			s.push_back(s1);
		}
		for (int i = 0; i < u.size(); i++) {
			if (s[i].ID == ID)
				// გაგრძელება under construction 
		}
	}
	else cout << "ERROR" << endl;
}
