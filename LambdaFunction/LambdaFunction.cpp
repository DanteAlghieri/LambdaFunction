// LambdaFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int maxim(vector<int> v);
vector<int> declare_and_insert_elements_vector(int i);

void print_element(int value)
{
    cout << value << " ";
}


void print_vector_using_simple_iterator(vector<int> v) 
{

    for (auto it = begin(v); it != end(v); ++it) {
        std::cout << *it << " ";

    }
    
    cout << "\n";
}


void print_vector_using_for_each_algorithm(vector<int> v)
{
    for_each(begin(v), end(v), print_element);

    cout << "\n";
}

void print_vector_using_lambda(vector<int> v)
{
    for_each(begin(v), end(v), [](int value)->int { cout << value << " "; return 0; });

    cout << "\n";


}



int main()
{
    vector<int> v{ 4, 1, 3, 5, 2, 3, 1, 7, 8, 7, 12, 88, 2, 3, 5 };

    int no_of_elems_in_vectorul = 10;

    print_vector_using_simple_iterator(v);

    print_vector_using_for_each_algorithm(v);

    print_vector_using_lambda(v);

    maxim(v);

    vector<int> vectorul = declare_and_insert_elements_vector(no_of_elems_in_vectorul);

    print_vector_using_simple_iterator(vectorul);

    return 0;

}

