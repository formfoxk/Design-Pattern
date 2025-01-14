#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_ITERATOR_DINER_MERGER_MENU_ITERATOR_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_ITERATOR_DINER_MERGER_MENU_ITERATOR_HPP_

namespace DinerMerger {

class DinerMenuIterator : public Iterator<MenuItem> {
	private: MenuItem** items;
	private: int position;

	public: DinerMenuIterator(MenuItem** items) : position(0) {
		this->items = items;
	}
	public: virtual MenuItem* next() {
		MenuItem* menuItem = items[position];
		position = position + 1;
		return menuItem;
	}
	public: virtual bool hasNext() {
		if (items[position] == 0) {
			return false;
		} else {
			return true;
		}
	}
};

} // namespace DinerMerger

#endif