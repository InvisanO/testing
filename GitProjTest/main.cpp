#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <array>
#include <deque>
#include <set>


typedef std::vector<int> int_vector;
template <typename T>
void PrintList(const list<T>& lst) {
	for (auto i = lst.begin(); i != lst.end(); ++i) {
		cout << *i << endl;
	}
}
using namespace std;

template <typename T>
void PrintList(const list<T>& lst) {

}

int main(){
    // vector
	
	vector<int> vecStandard = {34, 23, 32, 7, 9};
	vector<int> vec;
	vec.reserve(100); // capacity = 100
	vec.push_back(2);
	vec.push_back(23);
	vec.push_back(21);
	vec.push_back(5);
	vec.push_back(3);
	vector<int> newvec(55, 30);


	cout << vec.empty(); // true or false
	vec.shrink_to_fit(); // reducing capacity to fit size
	cout << vec.capacity();

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	// cout << vec.at(9);

	vec.clear();
	// vec.pop_back();  last element delete

	vec.resize(217); // 217 000000000..., (217,5) - 55555...

	// vec.insert();
	// vec.erase();
	cout << vec.capacity() << endl; // capacity - additional reserved memory for dynamic array
	cout << vecStandard.capacity();

	// auto

	auto a = 88;
	auto b = 7.888;
	auto c = "auto"; // const char array[]

	auto d = true;

	vector<int>::iterator it = vec.begin();
	auto it2 = vec.begin(); // auto easy

	// ITERATORS

	// iterators dla konteinerow iz stl - similar to smart pointers shared_ptr o tak dalee...

	std::string vec[] = { "aaa", "aa", "a", "aaa", "aaaa" };

	// Using a range-based for loop
	for (const auto& str : vec) {
		std::cout << str << std::endl;
	}

	// Alternatively, using iterators
	for (auto it = std::begin(vec); it != std::end(vec); ++it) {
		std::cout << *it << std::endl;
	}

	// int arr[] = {2,3,5};

	// cout << *(arr + 2);


	


	// operator [] ne ���������� � ����������� ����������� stl, � ������� ���� � �������� � []


	vector<int>::iterator it;

	it = vec.begin();

	cout << *it;
	*it = 6543;
	cout << *(it + 5 - 2);
	it++;
	cout << *it;
	it += 4;
	it -= 2;

	vec.insert(it, 9876); // advance(it, 5) 0 1 2 3 4 9876
	vec.erase(it, it+5); // ������� ������� �� ���������, ����� range �������� � 0 �� 4
	advance(it, 5); // *it + 5 ���� �� �������������� ����� ���������

	for (vector<int>::const_iterator i = vec.cbegin(); i != vec.cend(); i++) // ��� ����� ����
	{
		//  *i = 5; -  cant
		cout << *i << endl;
	}
	for (vector<int>::reverse_iterator i = vec.rbegin(); i != vec.rend(); i++) // ��� ����� ����
	{
		//  *i = 5; -  cant
		cout << *i << endl;
	}

	// list ����������� ������

	list<int> myList;
	myList.push_back(59);
	myList.push_front(45);

	list<int>::iterator it = myList.begin();

	/*
	// vector

	vector<int> vecStandard = { 34, 23, 32, 7, 9 };
	vector<int> vec;
	vec.reserve(100); // capacity = 100
	vec.push_back(2);
	vec.push_back(23);
	vec.push_back(21);
	vec.push_back(5);
	vec.push_back(3);
	vector<int> newvec(55, 30);


	cout << vec.empty(); // true or false
	vec.shrink_to_fit(); // reducing capacity to fit size
	cout << vec.capacity();

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	// cout << vec.at(9);

	vec.clear();
	// vec.pop_back();  last element delete

	vec.resize(217); // 217 000000000..., (217,5) - 55555...

	// vec.insert();
	// vec.erase();
	cout << vec.capacity() << endl; // capacity - additional reserved memory for dynamic array
	cout << vecStandard.capacity();

	// auto

	auto a = 88;
	auto b = 7.888;
	auto c = "auto"; // const char array[]

	auto d = true;

	vector<int>::iterator it = vec.begin();
	auto it2 = vec.begin(); // auto easy

	// ITERATORS

	// iterators dla konteinerow iz stl - similar to smart pointers shared_ptr o tak dalee...

	std::string vec[] = { "aaa", "aa", "a", "aaa", "aaaa" };

	// Using a range-based for loop
	for (const auto& str : vec) {
		std::cout << str << std::endl;
	}

	// Alternatively, using iterators
	for (auto it = std::begin(vec); it != std::end(vec); ++it) {
		std::cout << *it << std::endl;
	}
	// int arr[] = {2,3,5};
	// cout << *(arr + 2);
	// operator [] ne ���������� � ����������� ����������� stl, � ������� ���� � �������� � []
	vector<int>::iterator it;
	it = vec.begin();
	cout << *it;
	*it = 6543;
	cout << *(it + 5 - 2);
	it++;
	cout << *it;
	it += 4;
	it -= 2;

	vec.insert(it, 9876); // advance(it, 5) 0 1 2 3 4 9876
	vec.erase(it, it + 5); // ������� ������� �� ���������, ����� range �������� � 0 �� 4
	advance(it, 5); // *it + 5 ���� �� �������������� ����� ���������

	for (vector<int>::const_iterator i = vec.cbegin(); i != vec.cend(); i++) // ��� ����� ����
	{
		//  *i = 5; -  cant
		cout << *i << endl;
	}
	for (vector<int>::reverse_iterator i = vec.rbegin(); i != vec.rend(); i++) // ��� ����� ����
	{
		//  *i = 5; -  cant
		cout << *i << endl;
	}

	// list ����������� ������
	*/
	/*
	list<int> myList;
	myList.push_back(59);
	myList.push_front(45);

	list<int>::iterator it = myList.begin();
	PrintList(myList);
	myList.pop_back();
	PrintList(myList);
	myList.unique(); // �������� ���������� ��������������
	// myList.clear(); // ��������
	// advance(it, number));
	// erase
	// remove - �����

	// myList.assign(myList2.begin(), myList2.end());
	// ����������� list2 � list1
	// foreach

	for (auto var : myList) {
		cout << var << endl;
		// ����������� ������ � �� ������
	}

	// ������ ������

	for (const auto &var : myList) {
		cout << var << endl;

	}

	// forward list ����������� ������

	forward_list<string> list = { "awdf", "awfe", "wqfgrt" };
	list.push_front("string");

	auto it = list.before_begin(); // ��� ������������� insert_after ������ ��� ������ after
	// it-- ������
	list.insert_after(it, "qwewv"); // ��������� ����� ������������� ��������
	for (const auto& var : list) {
		cout << var << endl;

	}

	// ����������� ������

	array<int, 4> arr1 = {3,4,55,6}; // 55 > 5
	array<int, 4> arr2 = { 3,4,5,6 };
	// arr1.fill(435); // ���������� � 435
	// cout << arr1.at(3) << endl;
	// arr1.front();
	// arr1.back();
	// comparing ooperators
	cout << bool(arr1 < arr2) << endl; // 0

	// deque - ������������ ������� - ����������� ������ �� ������ ������� ��� ������������ ������
	// ��� ��� ���� ��������

	// ���� ��� ����� ��������� ��������� ��������� � ������ � ���� ��������� �������
	// ������ ������������������ ������� �� ��� ������� ��������� �� List
	// it ����� �������� � ����� �����������
	deque<int> dq = {3, 4645, 2, 13, 43};
	dq.at(0);
	dq[0]; // �� �������� ����� �� �������

	// SET, MULTISET - �� ������ ��������� ������

	// SET ������ ������ ���������� �����, �� ����� �������� ������� ������
	set<int> mySet;

	for (int i = 0; i < 20; i++)
	{
		mySet.insert(rand()%10);
	}

	//auto it = mySet.find(10); // ���� ��� �������� �� ������� mySet.end();

	for (auto &item: mySet)
	{
		cout << item << endl;
	}
	// MULTISET ��������� �������� ��������� ���������� ���������

	int value;
	cin >> value;
	if (mySet.find(value) != mySet.end()) {
		cout << "Value " << value << " found!";
	}
	else {
		cout << "Value " << value << " was not found!";
	}
	auto result = mySet.erase(5);
	auto res = mySet.insert(55); // returns iterator, bool
	// size_t - unsigned int
	multiset<int> multi = {23,54,32,53,3,3,3,3,3};
	auto res1 = multi.lower_bound(3); // ������ ������
	auto res2 = multi.lower_bound(3); // ������� ����� ����� 3 - 23
	auto a = multi.equal_range(3); // upper and lower bound
	*/















}





	



