/*
 * ring.h
 *
 *  Created on: 21.07.2019
 *      Author: forba
 */

#ifndef RING_H_
#define RING_H_
#include <iostream>

using namespace std;

/**
 * @brief The Ring Buffer Generator Class
 */
template<class T>
class ring {

private:
	int m_pos;
	int m_size;
	T *m_values;

public:
	//Nested Class iterator2
	class iterator;

public:
	// Ring Buffer Constructor
	ring(int size) :
			m_pos(0), m_size(size), m_values(NULL) {
		m_values = new T[size];
	}

	// Ring Buffer Destructor
	~ring() {
		delete[] m_values;
	}

	// Size or number of elements of Ring Buffer
	int size() {
		return m_size;
	}

	iterator begin() {
		return iterator(0, *this);
	}

	iterator end() {
		return iterator(m_size, *this);
	}

	// Add a new element to the Ring Buffer
	void add(T value) {
		m_values[m_pos++] = value;
		if (m_pos == m_size) {
			m_pos = 0;
		}
	}

	// Returns the element at "pos" position in the Ring Buffer
	T& get(int pos) {
		return m_values[pos];
	}
};

// Implementation of nested class iterartion
template<class T>
class ring<T>::iterator {
private:
	int m_pos;
	ring &m_ring;

public:
	// Constructor
	iterator(int pos, ring &aRing) :
			m_pos(pos), m_ring(aRing) {

	}

	// ++ Operator Overloading
	iterator& operator++(int) {
		m_pos++;
		return *this; // should return a reference to the thing that iterate
	}

	iterator& operator++() {
		m_pos++;
		return *this;
	}

	// * Operator Overloading
	T &operator*(){
		return m_ring.get(m_pos);
	}

	// != Operator Overloading
	bool operator!=(const iterator &other) const{
		return m_pos != other.m_pos;
	}
};

#endif /* RING_H_ */
