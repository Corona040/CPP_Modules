#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main(void) {
	std::vector<int> vector;
	vector.push_back(3);
	vector.push_back(5);
	vector.push_back(7);
	std::list<int> list;
	list.push_back(3);
	list.push_back(5);
	list.push_back(7);
	try {
		std::cout << *easyfind::easyfind(vector, 3) << std::endl;;
		std::cout << *easyfind::easyfind(vector, 7) << std::endl;
		std::cout << *easyfind::easyfind(list, 3) << std::endl;;
		std::cout << *easyfind::easyfind(list, 7) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

// Motif
// Containers
//
// Associative containers -> template that implement associative arrays (arrays with key-value pairs)
//   can be ordered or unordered
//
// SFINAE -> Substitution Failure Is Not An Error (C++11)
//   principle: template substitution failure should not be compiler error
//   way to apply constraints to templates
//
//   bitset            unordered | ?              | dynamic | ?                    | ?               | ?
//   vector            unordered | contiguous     | dynamic | array                | ?               | ?
//   list              unordered | non-contiguous | dynamic | linked-list          | O(n) search     | O(1) add/delete
//   map               ordered   | non-contiguous | dynamic | binary balanced tree | n*log(n) search | ?
//   multimap          ordered   | non-contiguous | dynamic | ?                    | ?               | ?
//   stack             unordered | ?              | dynamic | stack                | ?               | O(1) LIFO
//   queue             unordered | ?              | dynamic | queue                | ?               | O(1) FIFO
//   dequeue           unordered | ?              | dynamic | double ended queue   | ?               | O(1) LIFO + FIFO
//   priority_queue    ordered   | ?              | dynamic | queue                | ?               | O(1) arbitrary sorting (strict weak sorting)
//   set               ordered   | ?              | dynamic | ?                    | ?               | ?
//   multiset          ordered   | non-contiguous | dynamic | binary balanced tree | ?               | O(log n) add/delete
//
//   array (C++11)     unordered | contiguous     | static  | array                | ?               | ?
//     (std::array vs array -> std::array is an object, allows objectish things)
