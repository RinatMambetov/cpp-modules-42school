/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greita <greita@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:12:11 by greita            #+#    #+#             */
/*   Updated: 2022/10/28 14:29:44 by greita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <class T>
class Array {
 private:
  T *m_array;
  unsigned int m_size;

 public:
  Array() : m_array(new T[0]), m_size(0) {}

  ~Array() { delete[] m_array; }

  Array(unsigned int n) : m_array(new T[n]), m_size(n) {}

  Array(Array<T> const &orig) : m_size(orig.size()) {
    if (orig.getArray()) {
      m_array = new T[m_size];
      for (unsigned int i = 0; i < m_size; ++i) {
        m_array[i] = orig.getArray()[i];
      }
    }
  }
  Array<T> &operator=(Array<T> const &orig);
  T &operator[](unsigned int const index);
  T const &operator[](unsigned int const index) const;

  T *getArray() const { return m_array; }
  unsigned int size() const { return m_size; }

  class IndexIsOutOfBoundsException : public std::exception {
    virtual char const *what() const throw() {
      return "Index is out of bounds!";
    }
  };
};

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &orig) {
  if (this == &orig) return *this;
  m_size = orig.size();
  delete[] m_array;
  m_array = nullptr;
  if (orig.getArray()) {
    m_array = new T[m_size];
    for (unsigned int i = 0; i < m_size; ++i) {
      m_array[i] = orig.getArray()[i];
    }
  }
  return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int const index) {
  if (index > m_size - 1) throw(Array<T>::IndexIsOutOfBoundsException());
  return m_array[index];
}

template <typename T>
T const &Array<T>::operator[](unsigned int const index) const {
  if (index > m_size - 1) throw(Array<T>::IndexIsOutOfBoundsException());
  return m_array[index];
}

template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> const &arr) {
  for (unsigned int i = 0; i < arr.size(); ++i) {
    out << '<' << arr[i] << '>' << ' ';
  }
  return out;
}

#endif
