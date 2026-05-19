#include <iostream>
#include <cmath>
#include<string>
#include <cstdlib>
#include <ctime>  
#include<CCTYPE>
#include<fstream>
#include<ctime>
#pragma warning (disable : 4996)
using namespace std;

//int MySum(int a, int b) { 
//	int s = 0;
//	s = a + b; 
//	return s; 
//}
//
//int ReadNumber() {
//int number;
//cout << "enter number:";
//cin >> number;
//while (cin.fail()) {
//	cin.clear();
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//	cout << "please enter a integear value:";
//	cin >> number;
//}
//return number;
//}

//int main() {


	//int arr1[5] = { 200,100,50,25,30 }; 
	//int a, b, c;    
	//a = 10;  
	//b = 20;  
	//a++;  
	//++b;  
	//c = a + b;  
	//cout << a << endl;
	//cout << b << endl;     
	//cout << c << endl;
	//
	//for (int i = 1; i <= 5; i++) {
	//	cout << i << endl; 
	//	a = a + a * i; 
	//}      
	//c = MySum(a, b); 
	//cout << c; return 0; 

	//int mark;
	//cout << "enter score:";
	//cin >> mark;
	//(mark > 50) ? cout<<"Pass" : cout<<"Fall";

	//int number;
	//cout << "enter number";
	//cin >> number;
	//(number > 0) ? cout << "positive number" : cout << "Negative number";
	//(number == 0) ? cout << "zero number" : (number > 0) ? 
	//	cout << "positive number" : cout << "negative number";

	//cout << "result is:" << (12 & 44);
	//cout << "result is:" << (12 | 45);
	//void sum(int, int);

	//int main() {
	//	
	//	int a = 3;
	//	int b = 4;
	//	sum(a, b);

	//}
	//void sum(int c, int d) {
	//	cout<< c + d;
	//}
	// 
	//
	// 
	// 
	// 
//int  mySum(int a, int b) {
//	return a + b;
//	}
//int mySum(int s,int w,int k) {
//	return s + w + k;
//}
//int mySum(int a,int b,int c,int d) {
//	return a + b + c + d;
//}
//int  mySum() {
//	cout << "hi";
//}
//int mySum2() {
//
//	mySum();
//}
//int mySum3() {
//	mySum2();
//}
//int main() {
//	int a = 3, b = 9, c = 5, d = 2;
//	cout<<mySum()<<endl;
//
//
//}

//void function2();
//void function4() {
//	cout << "hello";
//
//}
//void function3() {
//	function4();
//}
//
//void function2() {
//	function3();
//}
//void function1() {
//	function2();
//	function4();
//}

//void printNumbers(int n, int m) {
//	if (n <= m) {
//		cout << n << endl;
//		printNumbers(n + 1, m);
//	}
//}
//void printNumbersdown(int n, int m) {
//	if (n >= m) {
//		cout << n << endl;
//		printNumbersdown(n - 1, m);
//	}
//}
//int printNumbersdown(int n, int m) {
//	int result;
//	if(m!=0){
//		return(n * printNumbersdown(n, m - 1));
//	}
//
//}
#include<vector>

//void readNumbers(vector <int>& vNumbers) {
//	char readmore='Y';
//	int number;
//	while (readmore == 'y' || readmore == 'Y') {
//		cout << "enter the number :";
//		cin >> number;
//		vNumbers.push_back(number);
//		cout << "do you want to add more?";
//		cin >> readmore;
//		cout << "\n";
//	}
//}
//void printIntVector(vector <int>& x) {
//	for (int& number : x) {
//		cout << number << " ";
//	}
//}
//struct student {
//	string name="";
//	string surname="";
//	int age=0;
//};
//struct stEmployee {
//	string firstName = "";
//	string lastName = "";
//	int salary = 0;
//};
//void readEmployeesVector(vector  <stEmployee>& vEmployees) {
//	char readmore='Y';
//	int counter = 0;
//	while (readmore == 'y' || readmore == 'Y') {
//		stEmployee tempemployee;
//		counter++;
//
//
//		cout << "enter the first name of the employee "<<counter<<":";
//		cin >> tempemployee.firstName ;
//
//		cout << "enter the last name of the employee " << counter<<":";
//		cin >> tempemployee.lastName;
//
//		cout << "enter the salary of the employee "<< counter<< ":";
//		cin >> tempemployee.salary;
//
//        vEmployees.push_back(tempemployee);
//
//		cout << "do you want to add more?";
//		cin >> readmore;
//
//		cout << endl;
//	}
//}
//void printEmployeeVector(vector <stEmployee>& employees) {
//	int counter = 0;
//	for (stEmployee & emp : employees) {
//		counter++;
//		cout << "---------------Employee " << counter << " info ---------------"<<endl;
//		cout <<" first name :" << emp.firstName << endl;
//		cout << " last  name is :" << emp.lastName << endl;
//		cout << " salary is :" << emp.salary << endl;
//
//
//	}		
//	cout << "------------------------------------"<<endl;
//
//}
//void swap(int* n1, int* n2)
//{
//	int temp;    // متغير مؤقت لحفظ القيمة
//	temp = *n1;  // حفظ القيمة الموجودة في العنوان n1
//	*n1 = *n2;   // نقل القيمة من العنوان n2 إلى العنوان n1
//	*n2 = temp;  // نقل القيمة المحفوظة في temp إلى العنوان n2
//}
//void printFiileContent(string fileName) {
//	fstream readenFile;
//	readenFile.open(fileName, ios::in);
//	if (readenFile.is_open()) {
//		string line;
//		while (getline(readenFile, line)) {
//			cout << line<<endl;
//		}
//	}
//	readenFile.close();
//}
//void loadDataToVector(string fileName,vector <string>&vFileContent) {
//	fstream readenFile;
//	readenFile.open(fileName, ios::in);
//	if (readenFile.is_open()) {
//		string line;
//		while (getline(readenFile, line)) {
//			vFileContent.push_back(line);
//		}
//
//		readenFile.close();
//
//	}
//} 
//void saveVectorToFile(string fileName, vector <string>& vFileContent) {
//	fstream readenFile;
//	readenFile.open(fileName, ios::out);
//	if (readenFile.is_open()) {
//		for (string line : vFileContent) {
//			if(line!="")
//			readenFile << line << endl;
//		}
//		
//
//		readenFile.close();
//	}
//}

//void deleteRecordFromFile(string fileName,string record) {
//	vector <string> tempVector;
//	loadDataToVector(fileName, tempVector);
//	for (string& line : tempVector) {
//		if (line == record) {
//			line = "";
//		}
//	}
//	saveVectorToFile(fileName, tempVector);
//}

//void updateRecordinFile(string fileName, string record,string newRecord) {
//	vector <string> tempVector;
//	loadDataToVector(fileName, tempVector);
//	for (string& line : tempVector) {
//		if (line == record) {
//			line = newRecord;
//		}
//	}
//	saveVectorToFile(fileName, tempVector);
//}

	int main() {
		//   int page = 10;
		   //int total = 100;
		   //float x = 454;
		   //float y = 435;
		   //printf("the page number is = %d / %d \n", page, total);
		   //printf("the page number is = %0*d \n",5, page);
		   //printf("the page number is = %.*f \n", 5, x/y);
		   //printf("the page number is = %.5f", x / y);
		   //cout << setw(6) << "name " << "|" << setw(6) << "age" <<"|" << endl;
		   //cout << "------------------------------" << endl;
		   //cout << setw(6) << "velid " << "|" << setw(6) << "19" << "|" << endl;
		   //cout << setw(6) << "ahmed " << "|" << setw(6) << "23" << "|" << endl;
		   //cout << setw(6) << "omar " << "|" << setw(6) << "20" << "|" << endl;
		   //cout << "------------------------------";
		   //int x[5][5] = {
		   //	{1,2,3,4,5},
		   //	{ 6, 7, 8, 9, 10 },
		   //	{11,12,13,14,15},
		   //	{16,17,18,19,20},
		   //	{21,22,23,24,25},
		   //};
		   //for (int i = 0; i < 5; i++) {
		   //	for (int j = 0; j < 5; j++) {
		   //		cout << x[i][j]<<" ";
		   //	}
		   //	cout << endl;
		   //}
		   //int multtable[10][10];
		   //for (int i = 0; i < 10; i++) {
		   //	for (int j = 0; j < 10; j++) {
		   //		multtable[i][j] = (i+1) * (j+1);
		   //		cout << multtable[i][j]<<" ";
		   //	}
		   //	cout << endl;
		   //}

		   //vector <string> vNames = { "velid","omar","ahmad","khaled","mahmoud"};
		   //for (string &name : vNames) {

		   //	cout<<"this name is : " << name << endl;
		   //}
		   //vector <int> vNumbers;
		   //vNumbers.push_back(10);
		   //vNumbers.push_back(11);
		   //vNumbers.push_back(12);
		   //vNumbers.push_back(13);
		   //vNumbers.push_back(14);
		   //vNumbers.push_back(15);
		   //vNumbers.pop_back();
		   //vNumbers.pop_back();
		   //vNumbers.pop_back();
		   //cout<<vNumbers.empty()<<endl;
		   //cout << vNumbers.size()<<endl;
		   //cout << vNumbers.size()<<endl;
		   //cout << vNumbers.capacity()<<endl;
		   //cout << vNumbers.front() << endl;
		   //cout << vNumbers.back() << endl;



		   //for (int &number : vNumbers) {
		   //	cout << number << " "<<endl;
		   //}
		   //vector<int>Numbers;
		   //readNumbers(Numbers);
		   //cout << "your vector elements are :";
		   //printVector(Numbers);
		   //vector <student> students;
		   //student tempstudent;
		   //tempstudent.name = "velid";
		   //tempstudent.surname = "saeedi";
		   //tempstudent.age = 19;
		   //students.push_back(tempstudent);

		   //tempstudent.name = "omar";
		   //tempstudent.surname = "saeedi";
		   //tempstudent.age = 32;
		   //students.push_back(tempstudent);

		   //tempstudent.name = "muhammed";
		   //tempstudent.surname = "aslan";
		   //tempstudent.age = 23;
		   //students.push_back(tempstudent);

		   //for (student Student : students) {
		   //	cout << "name :" << Student.name << endl;
		   //	cout << "surname:" << Student.surname << endl;
		   //	cout << "age:" << Student.age << "\n\n";

		   //}
		   //int a = 10;
		   //int& x = a;

		   /*cout << &a<<endl;
		   cout << &x << endl;*/
		   //x = 20;
		   //cout << a << endl;
		   //cout << x << endl;

	   // int a = 5;
	   //int* p = &a;

	   //cout << p <<endl;
	   //int ab = 7;
	   //int* po = &a;
	   //cout <<* p;
	   //cout << p;
	   //cout << po;

	   //int a = 1, b = 2;
	   //
	   //cout << "Before swapping" << endl;
	   //cout << "a = " << a << endl;
	   //cout << "b = " << b << endl;
	   //
	   //// نرسل عناوين المتغيرات باستخدام الرمز &
	   //swap(&a, &b);
	   //
	   //cout << "\nAfter swapping" << endl;
	   //cout << "a = " << a << endl;
	   //cout << "b = " << b << endl;

	   //int arr[4] = { 1,2,3,4 };
	   //int* ptr = arr;
	   //
	   //cout << ptr<<endl;
	   //cout << ptr+1 << endl;
	   //cout << ptr+2 << endl;
	   //cout << ptr+3 << endl;

	   //cout << *ptr << endl;
	   //cout << *(ptr + 1) << endl;
	   //cout << *(ptr + 2) << endl;
	   //cout << *(ptr + 3) << endl;
	   //for (int i = 0; i < 4; i++) {
	   //	cout << *(ptr + i)<<endl;
	   //}
	   //student student1, * ptr;
	   //student1.name = "velid";
	   //ptr = &student1;
	   //cout << ptr->name;

	   //void * ptr;
	   //float num = 6.5;
	   //ptr = &num;
	   //cout << ptr << endl;
	   //cout << *(static_cast<float*>(ptr));

	   //int* ptrAge = new int;
	   //string* ptrName = new string;
	   //
	   //*ptrAge = 19;
	   //*ptrName = "velid";
	   //cout << "the age of " << *ptrName << " is " << *ptrAge;
	   //
	   //delete ptrAge;
	   //delete ptrName;

		   //declare an int pointer
		   //int  num;
		   //cout << "pleases enter number student \n";
		   //cin >> num;


		   //float* poin;
		   //poin = new float[num];

		   //for (int i = 0; i < num; i++) {
		   //	cout << "pleases enter mark a student :";
		   //	cin >> *(poin + i);

		   //}
		   //for (int i = 0; i < num; i++) {
		   //	cout << "\nstudent : " << *(poin + i);


		   //}

		   //delete[] poin;

		   //vector <int> numbers = {1,2,3,4};
		   //cout << numbers.at(0)<<endl;
		   //cout << numbers[0];
		   //numbers[0] = 45;
		   //for (const int &i : numbers) {
		   //	cout << &i << endl;
		   //}
		   //vector<int>::iterator iter;
		   //int* ptr;
		   //ptr = &numbers.front();
		   //for (iter = numbers.begin(); iter != numbers.end(); iter++) {
		   //	cout << *iter << endl;
		   //}

	   //string title = "software engineering students are smart";
	   //
	   //title.append(" no ");
	   //
	   //cout << titel<<endl;
	   //
	   //cout<<title.at(3)<<endl;
	   //char letter = title.at(2);
	   //cout<<isupper(letter)<<endl;
	   //char letter2 = title.at(0);
	   //char x;
	   //x = 'x';
	   //x=toupper(x);
	   //cout << x << endl;
	   //cout << ispunct(x);

	   //fstream myFile;
	   //myFile.open("myFile.txt", ios::app|ios::out);
	   //
	   //if (myFile.is_open()) {
	   //	myFile << "ISLAM SOURCES " << endl;
	   //	myFile << "quran"<<endl;
	   //	myFile << "Hadis"<<endl;
	   //	myFile << "alims"<<endl;
	   //
	   //
	   //
	   //
	   //	myFile.close();
	   //
	   //	cout << "Done sucsesfully!";
	   //
	   //}
	   //vector <string> vFileContent;
	   //
	   //loadDataToVector("myFile.txt",vFileContent);
	   //printStringVector(vFileContent);

		//vector <string> vNames = { "velid","muhammed","omar","ammar","ahmed"};

		//saveVectorToFile("myFile.txt", vNames);
		//printFiileContent("myFile.txt");
		//cout << "\n\n";
		////deleteRecordFromFile("myFile.txt", "velid");
  //      updateRecordinFile("myFile.txt", "ammar", "amr");
		//printFiileContent("myFile.txt");
//time_t t = time(0);
//char* dt = ctime(&t);
//cout << "local date and time is: " << dt << endl;
//tm* utctime = gmtime(&t);
//dt = asctime(utctime);
//cout << "utc time is " << dt << endl;

	time_t tim = time(0);
	tm* now = localtime(&tim);

	cout << "years" << now->tm_year + 1900 << endl;
	cout << "month" << now->tm_mon + 1 << endl;
	cout << "day :" << now->tm_mday << endl;
	cout << "hour :" << now->tm_min << endl;
	cout << "second : " << now->tm_sec << endl;


	cout << "week day (days since sunday ): " << now->tm_wday << endl;
	cout << "year  day (days since jan lst ): " << now->tm_yday << endl;

	cout << "hours of  daylight  saving time : " << now->tm_isdst << endl;






		return 0;
	}