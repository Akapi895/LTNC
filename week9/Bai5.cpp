using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if (initialAge < 0) 
        {
            Person::age = 0;
            cout << "Age is not valid, setting age to 0.\n";
        }
        Person::age = initialAge;
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if (Person::age < 13) cout << "You are young.\n";
        else if (Person::age < 18) cout << "You are a teenager.\n";
        else cout << "You are old.\n";
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        Person::age++;
       /* if (Person::age < 13) cout << "You are young.\n";
        else if (Person::age < 18) cout << "You are a teenager.\n";
        else cout << "You are old.\n";*/
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}