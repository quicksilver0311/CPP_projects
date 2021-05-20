#include <cstdlib>

#include "list.h"

using namespace std;

int main(int argc, char** argv) {
	
	List list1;
	list1.AddNode(3);
	list1.AddNode(5);
	list1.AddNode(7);
	list1.PrintList();

	list1.DeleteNode(5);
	list1.PrintList();

	list1.DeleteNode(1);
	list1.PrintList();

	list1.DeleteNode(3);
	list1.PrintList();


}
