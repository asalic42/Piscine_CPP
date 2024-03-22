#include "PmergeMe.hpp"
#include <cstring>
int main(int ac, char *av[])
{
    (void)av;
    if (ac < 2)
        std::cout << "Error" << std::endl;
    else
    {
        std::string input;
        for (int i=1; i < ac; i ++)
        {
            input.append(av[i]);
            if (i <= ac -2)
                input.append(" ");
        }
        PmergeMe instance(input);
        instance.executor();
    }
}

//     // PmergeMe test;
//     // int nb[8] = {2, 6, 1, 5, 15, 11, 4, 7};
//     // std::vector<int> v;
//     // for (int i=0; i < 8; i ++)
//     //     {v.push_back(nb[i]);
//     //     std::cout << nb[i] << std::endl;}
//     // std::cout << std::endl;
//     // for (std::vector<int>::const_iterator it = v.begin(); it < v.end(); it ++)
//     //     std::cout << *it << std::endl;
//     // std::cout << std::endl;
//     // std::vector<int> v_result = test.mergeVec(v);
//     // for (std::vector<int>::const_iterator it = v_result.begin(); it < v_result.end(); it ++)
//     //     std::cout << *it << std::endl;

/* * * * ALGO chatgpt merge-insert * * * * */
// A voir autre algo

// #include <iostream>
// #include <vector>
// #include <algorithm>

// // Fonction de fusion pour le tri fusion
// template<typename Iterator>
// void merge(Iterator begin, Iterator mid, Iterator end) {
//     typedef typename std::iterator_traits<Iterator>::value_type T;

//     std::vector<T> temp(begin, end);
//     Iterator left = begin, right = mid;
//     Iterator merged = begin;

//     while (left < mid && right < end) {
//         if (*left <= *right) {
//             *merged = *left;
//             ++left;
//         } else {
//             *merged = *right;
//             ++right;
//         }
//         ++merged;
//     }

//     // Copie les éléments restants de la première moitié
//     std::copy(left, mid, merged);

//     // Copie les éléments restants de la seconde moitié
//     std::copy(right, end, merged);
// }

// // Fonction de tri fusion-insertion
// template<typename Iterator>
// void mergeInsertionSort(Iterator begin, Iterator end, size_t insertionThreshold) {
//     typedef typename std::iterator_traits<Iterator>::difference_type Diff;

//     Diff size = std::distance(begin, end);
//     if (size <= 1) return;

//     if (size <= static_cast<Diff>(insertionThreshold)) {
//         std::sort(begin, end);
//     } else {
//         Iterator mid = begin + (size / 2);
//         mergeInsertionSort(begin, mid, insertionThreshold);
//         mergeInsertionSort(mid, end, insertionThreshold);
//         merge(begin, mid, end);
//     }
// }

// int main() {
//     int nb [9] =  {9, 8, 7, 6, 5, 4, 3, 2, 1};
//     std::vector<int> array;
//     for (int i=0; i < 9; i ++)
//         {array.push_back(nb[i]);
//         std::cout << nb[i] << std::endl;}

//     std::cout << "Before sorting: ";
//     for (std::vector<int>::iterator it = array.begin(); it != array.end(); ++it)
//         std::cout << *it << " ";
//     std::cout << std::endl;

//     mergeInsertionSort(array.begin(), array.end(), 9); // Choisissez une valeur pour insertionThreshold
//     std::cout << "After sorting: ";
//     for (std::vector<int>::iterator it = array.begin(); it != array.end(); ++it)
//         std::cout << *it << " ";
//     std::cout << std::endl;

// }
