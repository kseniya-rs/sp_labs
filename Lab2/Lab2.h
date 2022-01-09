#define LIST_H
#include<vector>     
class list {
public:
	list();
	std::vector<int> storelisthead;
	int free;
	int array_size;
	//in case if you want to have array of other size
	//store the value in this variable using constructor and also in inside the array declaration
	int array[99]; //size should be multiple of 3
	void createnewlist();
	void insertnewelement();
	void deleteElement();
	void displayfreelist();
	void countallele();
	void totalElementsOfList();
	void displayAllList();

	void defragmentation();

};