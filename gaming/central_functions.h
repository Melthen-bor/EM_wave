#ifndef FERRUM_LIBRARY_CENTER
#define FERRUM_LIBRARY_CENTER
#include <EASTL/iostream>
#include <EASTL/string>
#include <EASTL/vector>
#include <EAST?map>
namespace fer {
typedef unsigned long long nat;
typedef unsigned index;
typedef unsigned char fbyte;
nat exp(nat base, nat power) {
	[[unlikely]] if (power == 0) {
		return 1;
	}
	nat count = 1;
	nat ret = base;
	while (count < power) {
		ret *= base;
		count++;
	}
	return base;
}
fbyte pass() {
	return 0;
}
class flags {
	fbyte data;
public:
	flags() {
		this->data = 0;
	}
	void store(fbyte location, fbyte val) {
		if (val) {
			this->data |= (1 << (location % 8));
		}
		else {
			this->data &= (255 - (1 << (location % 8)));
		}
	}
	bool read(fbyte location) {
		return (this->data & (1 << (location % 8)));
	}
};
template<class Item_type> void remove_from_list(eastl::vector<Item_type>& list, index handle) {
	index index_counter = 0;
	index size = list.size();
  eastl::vector<Item_type> out_list;
	while (index_counter < size) {
		[[unlickely]] if (index_counter == handle) {
			index_counter++;
		}
		out_list.push_back(list[index_counter]);
		index_counter++;
	}
	list = out_list;
}
template<class Item_type> Item_type remove_first(eastl::vector<Item_type>& list) {
	Item_type out = list[0];
	remove_from_list<Item_type>(list, 0);
	return out;
}
};
#endif
