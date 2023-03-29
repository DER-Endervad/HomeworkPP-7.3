#pragma once
template<class T>
class S_vector
{
private:
	T* arr;
	int s_size = 0;
	int s_full = 0;
	
public:
	S_vector(int size) {
		arr = new T[size];
		s_size = size;
		s_full = size;
	}

	~S_vector<T>() {
		delete arr;
	}

	S_vector& operator=(const S_vector& copy) {
		this->arr = new T[copy.s_size];
		for (int i = 0; i < copy.s_size; ++i) {
			this->arr[i] = copy.arr[i];
		}
		delete copy.arr;
		this->s_size = copy.s_size;
		this->s_full = copy.s_full;
	}

	S_vector(const S_vector& copy) {
		this->arr = new T[copy.s_size];
		for (int i = 0; i < copy.s_size; ++i) {
			this->arr[i] = copy.arr[i];
		}
		this->s_size = copy.s_size;
		this->s_full = copy.s_full;
	}

	T& at(const int& number) {
		if (number < s_size) {
			return arr[number];
		}
	}

	void push_back(T value) {
		if (s_size == s_full) {

			s_full = s_size + (s_size / 2);
			T* arr2 = new int[s_full];
			for (int i = 0; i < s_size; ++i) {
				arr2[i] = arr[i];
			}
			arr2[s_size] = value;
			++s_size;
			delete[] arr;
			arr = arr2;
		}
		else {
			arr[s_size] = value;
			++s_size;
		}
	}

	int capacity() {
		return s_full;
	}
};

