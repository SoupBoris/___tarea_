//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include <stdlib.h>
#include <initializer_list>
using namespace std;
#ifndef POO2_UNIT1_WEEK_2_2020_2_MY_VECTOR_H
#define POO2_UNIT1_WEEK_2_2020_2_MY_VECTOR_H



namespace utec {

  template <typename T>
  class my_vector {
    T* data_;
    size_t size_;
    size_t reserved_;
  public:

  my_vector(){
    T* data = nullptr;
    size_ = 0;
    reserved_ = 5;
  }
  my_vector (const my_vector &old_vect){
  data_ = new T[reserved_];
  reserved_ = old_vect.reserved_;
  size_ = old_vect.size_;

  for(int i = 0; i<size_; i++){
    data_[i] = old_vect.data_[i];
  }

  }
  my_vector(size_t reserved){
    reserved_= reserved;
    T* data_ = new T[reserved_];
    }

  ~my_vector();

  size_t size(){
    T* temp =  new T[reserved_ * 2];
    reserved_ *= 2;
    for(int i = 0; i < size_; i++){
      temp[i] = data_[i];
    }
    delete [] data_;
    data_ = temp;
  }

  void push_back(T data){
    if (this-> size_ == this-> reserved_){
      size();
    }
    
    data_[size_] = data;
    size_++;
  }

  T pop_back(){
    T temp = this->data_[this->size_ - 1];
    this->data_[this->size_ - 1] = NULL;
    return temp;
  }

  void insert(T data, size_t posicion){
    this->data_[posicion - 1] = data; //implementar movida de datos??
  }

  void erase(size_t posicion){
    this->data_[posicion - 1] = NULL; //implementar movida de datos??
  }

  my_vector& operator=(initializer_list<T> values){
    if (data_){
      delete [] data_;
    }

    size_ = values.size();
    reserved_ = values.size();
    data_ = new T [values.size()];
    int i = 0;
    for(auto it = values.begin() ; it < values.end() ; it++){
      data_ [i] = *it;
      i++;
    }

    return *this;
  }

  T &operator[](size_t i) {
    if( i > size_ ) {
      cout << "ERROR CATASTROFICO - STACK OVERFLOW" <<endl; 
      return data_[0];
    }
    
    return data_[i];
    }

  my_vector operator+(my_vector vec1){
    my_vector combinado();

    for(int i = 0; i < size_; i++){
      combinado.push_back(data_[i]);
    }

    for(int i = 0; i < vec1.size_; i++){
      combinado.push_back(vec1.data_[i]);
    }

    return combinado;
    }

  /*my_vector operator+(my_vector vec1, my_vector vec2){
    my_vector<T> combinado();

    for(int i = 0; i < vec1.size_; i++){
      combinado.push_back(vec1.data_[i]);
    }

    for(int i = 0; i < vec2.size_; i++){
      combinado.push_back(vec2.data_[i]);
    }

    return combinado;
    }*/

  }; 
}




#endif //POO2_UNIT1_WEEK_2_2020_2_MY_VECTOR_H