/* Exception handling */

//#include<iostream>
//using namespace std;
//int main()
//{
//	int x,y;
//	cout << "Enter the value of x and y : ";
//	cin >> x >> y;
//	try{
//	if(y == 0)
//		throw(x);
//	else
//		cout << "The division ans is : " << int(x/y) << endl;
//    }
//    
//	catch(int x)
//	{
//		cout << "Number cannot be divided by zero !!" << endl;
//	}
//	
//	return 0;
//}

/* Butterfly pattern */

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int rows;
//	cout << "Enter rows : ";
//	cin >> rows;
//	
//	for(int i = 1; i <= rows; i++)
//	{
//		for(int j = 1; j <= i; j++)
//			cout << "*" ;
//		for(int k = 1; k <= 2 * (rows - i); k++)
//			cout << " ";
//		for(int l = 1; l <= i; l++)
//			cout << "*" ;
//		cout << endl;
//	}
//	
//	for(int i = rows; i >= 1; i--)
//	{
//		for(int j = 1; j <= i; j++)
//			cout << "*" ;
//		for(int k = 1; k <= 2 * (rows - i); k++)
//			cout << " " ;
//		for(int l = 1; l <= i; l++)
//			cout << "*" ;
//		cout << endl;
//	}
//	return 0;	
//	
//}

/* Structure and array difference */

//#include<iostream>
//using namespace std;
//struct sem3{
//	int rno[30];
//	string sname[30];
//}s1;
//
//struct stud{
//	int rno;
//	string sname;
//}s2[30];
//
//int main()
//{
//	s1.rno[0] = 13;
//	s1.sname[0] = "Vivek";
//	
//	s2[0].rno = 14;
//	s2[0].sname = "Karan";
//	
//	cout << "The name and roll no in sem3 is : " << s1.sname[0] << " and " << s1.rno[0] << endl;
//	cout << "The name and roll no in stud is : " << s2[0].sname << " and " << s2[0].rno << endl;
//	return 0;
//	
//} 

/* Inheritance example */

//#include<iostream> 
//using namespace std;
//
//class Parent{
//	public:
//		int bal;
//		Parent() { bal = 500000; };
//		void balance()
//		{
//			cout << "This class contains balance : " << bal << endl;
//		}		
//};
//
//class Child : public Parent{ };
//
//class GrChild : public Child{ };
//
//int main()
//{
//	Child ch1;
//	ch1.balance();
//	
//	GrChild ch2;
//	ch2.balance();
//	
//	return 0;
//}

/* Operator Overloading */
 
//#include<iostream>
//using namespace std;
//
//class Height
//{
//	public:
//		int inch;
//		int feet;
//		int temp;
//		
//		Height operator + (Height &x)
//		{
//			Height temp;
//			temp.inch = inch + x.inch;
//			temp.feet = feet + x.feet;
//			
//			if(temp.inch > 12)
//			{
//				temp.feet ++;
//				temp.inch -= 12;
//			}
//			
//			return temp;
//		}
//};
//
//int main()
//{
//	Height h1, h2, ans;
//	h1.feet = 7; h1.inch = 7;
//	h2.feet = 4; h2.inch = 6;
//	
//	ans = h1 + h2;
//	cout << ans.feet << " and " << ans.inch;
//	return 0;
//}

/* Inheritance Example */

//#include<iostream>
//using namespace std;

//class Parent{
//	public:
//		int x;
//		//Parent():x(0){ };
//		Parent(){
//			x = 100;
//		};
//};
//
//class Child: public Parent{
//	public:
//		Child(){			
//			x = 1000;
//		};
//};
//
//int main()
//{
//	Parent p;
//	cout << "Value of x : " << p.x << endl;
//	Child c;
//	cout << "Value of x : " << c.x << endl;
//	return 0;
//}

/* Constructor */

//#include<iostream>
//using namespace std;
//
//class Car{
//	public:
//		Car(int tyres = 4, string color = "Red", int seat = 5)
//		{
//			cout << "Car with " << tyres << " tyres " << color << " color and " << seat << " seats is created !" << endl;  	
//		};
//};
//
//int main()
//{
//	Car c1(4,"Black",4);
//	Car c2(4,"Grey",5);
//	Car c3;
//	return 0;
//}

/*C++ program for unary minus (-) operator overloading.*/

//#include<iostream>
//using namespace std;
// 
//class Num
//{
//    private:
//        int num;
//         
//    public:
//        //function to get number
//        void Input(int x)
//        {
//            num = x;
//        }
//        //function to display number
//        void Display()
//        {
//            cout << "value of num is: " << num;
//        }
//        //unary - operator overloading
//        void operator - ()
//        {
//            num =- num;
//        }
//};
//
//int main()
//{
//    Num obj;
//    obj.Input(10);
//    -obj;
//    obj.Display();
//    cout << endl;
//    return 0;
//     
//}

/* Polymorphism example */

//#include <iostream>
//using namespace std;
//
//class Animal {
//  public:
//    void animalSound() {
//      cout << "The animal makes a sound \n";
//    }
//};
//
//// Derived class
//class Pig : public Animal {
//  public:
//    void animalSound() {
//      cout << "The pig says: wee wee \n";
//    }
//};
//
//// Derived class
//class Dog : public Animal {
//  public:
//    void animalSound() {
//      cout << "The dog says: bow wow \n";
//    }
//};
//
//int main() {
//  Animal myAnimal;
//  Pig myPig;
//  Dog myDog;
//
//  myAnimal.animalSound();
//  myPig.animalSound();
//  myDog.animalSound();
//  return 0;
//}

/* inline function example */

//#include <iostream>  
//using namespace std;  
//inline int add(int a, int b)  
//{  
//    return(a+b);  
//}  
//int main()  
//{  
//    cout << "Addition of 'a' and 'b' is : "<< add(2,3); 
//    return 0;    
//}  

/* Object as a parameter */

// C++ program to calculate the average marks of two students

//#include <iostream>
//using namespace std;
//
//class Student {
//
//   public:
//    int marks;
//
//    // constructor to initialize marks
//    Student(int m) {
//        marks = m;
//    }
//};
//
//// function that has objects as parameters
//void Avg(Student s1, Student s2) {
//
//    // calculate the average of marks of s1 and s2 
//    float avg = (s1.marks + s2.marks) / 2;
//
//   cout << "Average Marks = " << avg << endl;
//
//}
//
//int main() {
//    Student stud1(88.0), stud2(56.0);
//
//  // pass the objects as arguments
//   Avg(stud1, stud2);
//
//    return 0;
//}

/* Constructor overloading */

// C++ program to demonstrate constructor overloading
//#include <iostream>
//using namespace std;
//
//class Person {
//   private:
//    int age;
//
//   public:
//    // Constructor with no arguments
//    Person() {
//        age = 20;
//    }
//
//    // Constructor with an argument
//    Person(int a) {
//        age = a;
//    }
//
//    int getAge() {
//        return age;
//    }
//};
//
//int main() {
//    Person person1, person2(45);
//
//    cout << "Person1 Age = " << person1.getAge() << endl;
//    cout << "Person2 Age = " << person2.getAge() << endl;
//
//    return 0;
//}

/* Templates */

//#include <iostream>
//using namespace std;
//  
//// One function works for all data types
//template <typename T> T Max(T x, T y)
//{
//    return (x > y) ? x : y; // ternary operator (short hand if - else)
//}
//  
//int main()
//{
//    cout << Max<int>(3, 7) << endl; // Call Max for int
//    cout << Max<double>(13.2, 7.0) << endl; // call Max for double
//    cout << Max<char>('g', 'e') << endl; // call Max for char
//  
//    return 0;
//}

/* File handling */

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string lines;
	ifstream File1("First.txt");
	
	while(getline(File1, lines))
	{
		cout << lines;
	}	
	
	File1.close();
	return 0;
}












