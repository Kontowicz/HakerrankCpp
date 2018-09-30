#pragma once

#include <vector>
#include <iostream>

using namespace std;

namespace _35
{
	class Person{
	public:
		string name;
		int age;
		virtual void getdata(){};
		virtual void putdata(){};
	};

	class Student__: public Person{
	private:
		static int global_id;
		int local_id;
	public:
		vector<int> marks;
		
		void getdata(){
			++global_id;
			local_id = global_id;
			cin>>name;
			cin>>age;
			for(int i(0); i<6; i++){
				int tmp(0);
				cin>>tmp;
				marks.push_back(tmp);
			}
		}
		
		void putdata(){
			 cout<<name<<" "<<age<<" ";
			int sum(0);
			for(int i(0); i<6; i++)
			   sum+=marks[i];
			cout<<sum<<" "<<local_id<<"\n";
		}
	};

	class Professor: public Person{
	private:
		static int global_id;
		int local_id;
	public:
		int publications;

		 void getdata(){
			++global_id;
			local_id = global_id;
			cin>>name;
			cin>>age;
			cin>>publications;
		}
		
		void putdata(){
			cout<<name<<" "<<age<<" "<<publications<<" "<<local_id<<"\n";
		}
	};
	int Student__::global_id = 0;
	int Professor::global_id = 0;

	void virtual_functions(){
		int n, val;
		std::vector<Person*> per;
		cin>>n; //The number of objects that is going to be created.
		per.resize(n);

		for(int i = 0;i < n;i++){

			cin>>val;
			if(val == 1){
				// If val is 1 current object is of type Professor
				per[i] = new Professor;

			}
			else per[i] = new Student__; // Else the current object is of type Student__

			per[i]->getdata(); // Get the data from the user.

		}

		for(int i=0;i<n;i++)
			per[i]->putdata(); // Print the required output for each object.

	}
}