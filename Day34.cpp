#include <bits/stdc++.h>
using namespace std;

template <typename T>

T myMax(T a, T b)
{
    return a > b ? a : b;
}

template <class T>
void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

void templateFunction()
{
    cout << myMax<int>(3, 7) << endl;
    cout << myMax<double>(3.0, 7.0) << endl;
    cout << myMax<char>('g', 'e') << endl;

    int a[5] = {10, 50, 30, 40, 20};
    int n = sizeof(a) / sizeof(a[0]);

    // calls template function
    bubbleSort<int>(a, n);

    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

// list is doublu linked list

void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

//
void doublyLL()
{
    list<int> gqlist1, gqlist2;

    for (int i = 1; i <= 10; ++i)
    {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);

    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);

    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();

    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);

    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);

    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);
}
// singly linked list
void showSLL(forward_list<int> flist)
{
    for (int &c : flist)
        cout << c << " ";
    cout << endl
        << endl;
}
void singlyLL()
{
    // Declaring forward list
    forward_list<int> flist1;
    forward_list<int> flist2;
    forward_list<int> flist3;

    // Assigning values using assign()
    flist1.assign({1, 2, 3});

    // 5 elements with value 10
    flist2.assign(5, 10);

    // Assigning values of list 1 to list 3
    flist3.assign(flist1.begin(), flist1.end());

    cout << "The elements of first forward list are : ";
    showSLL(flist1);
    cout << "The elements of second forward list are : ";
    showSLL(flist2);
    cout << "The elements of third forward list are : ";
    showSLL(flist3);
    cout << endl;
}

void singlyLL2()
{
    forward_list<int> flist = {10, 20, 30, 40, 50};
    cout << "The elements of flist are : ";
    showSLL(flist);


    // Inserting value using push_front()
    // Inserts 60 at front
    flist.push_front(60);

    // Displaying the forward list
    cout
        << "The forward list after push_front operation : ";
    showSLL(flist);

    // Inserting value using emplace_front()
    // Inserts 70 at front
    flist.emplace_front(70);

    // Displaying the forward list
    cout << "The forward list after emplace_front "
            "operation : ";
    showSLL(flist);

    // Deleting first value using pop_front()
    // Pops 70
    flist.pop_front();

    // Displaying the forward list
    cout << "The forward list after pop_front operation : ";
    showSLL(flist);
}

int main()
{
    templateFunction();

    singlyLL();
    
    singlyLL2();
    
    doublyLL();
}