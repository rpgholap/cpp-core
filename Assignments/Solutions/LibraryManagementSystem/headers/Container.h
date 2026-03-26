#ifndef CONTAINER_H
#define CONTAINER_H

#include <string>

namespace LibrarySystem {

template <typename T>
class Container {
private:
    T* data;
    int size;
    int capacity;

    void resize() {
        capacity *= 2;
        T* newData = new T[capacity];
        for (int i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

public:
    Container() : size(0), capacity(10) {
        data = new T[capacity];
    }

    Container(const Container& other) : size(other.size), capacity(other.capacity) {
        data = new T[capacity];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }

    Container& operator=(const Container& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            capacity = other.capacity;
            data = new T[capacity];
            for (int i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    ~Container() {
        delete[] data;
    }

    void add(const T& item) {
        if (size >= capacity) {
            resize();
        }
        data[size++] = item;
    }

    bool remove(int index) {
        if (index < 0 || index >= size) return false;
        for (int i = index; i < size - 1; ++i) {
            data[i] = data[i + 1];
        }
        size--;
        return true;
    }

    // Overloaded find
    T* find(int id) const {
        for (int i = 0; i < size; ++i) {
            if (data[i].getId() == id) return &data[i];
        }
        return nullptr;
    }
    
    T* find(const std::string& name) const {
        for (int i = 0; i < size; ++i) {
            if (data[i].getName() == name) return &data[i];
        }
        return nullptr;
    }

    int getSize() const { return size; }
    
    T& operator[](int index) { return data[index]; }
    const T& operator[](int index) const { return data[index]; }
    
    void clear() {
        size = 0;
    }
};

}

#endif // CONTAINER_H
