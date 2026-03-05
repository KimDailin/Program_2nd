#include "../Program/stdafx.h"
#include "Container.h"

template<typename T>
inline Container<T>::Container(int allocateSize)
{
	size = allocateSize;
	index = 0;
	list = new T[allocateSize];
}

template <typename T>
Container<T>::~Container()
{
	delete[] pointer;
}

template<typename T>
inline void Container<T>::Push(T data)
{
	if (index < size)
	{
		pointer[index] = data;
		cout << pointer[index] << endl;
	}
	else 
	{
		cout << "Index Out of Range" << endl;
	}
	index++;
}

template<typename T>
Container<T>::~Container()
{
	delete[] list;
}

template class Container<bool>;
template class Container<char>;
template class Container<int>;
template class Container<float>;
template class Container<double>;
template class Container<const char*>;