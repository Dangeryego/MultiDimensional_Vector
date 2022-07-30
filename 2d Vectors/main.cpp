#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > vector_1;
    vector < int > vector_2;

    vector_1.push_back (10);
    vector_1.push_back (20);
    cout << "First element of Vector 1 is " << vector_1.at (0) << endl;
    cout << "Second element of Vector 1 is " << vector_1.at (1) << endl;
    cout << "Size of Vector 1 is " << vector_1.size() << endl;

    vector_2.push_back (100);
    vector_2.push_back (200);
    cout << "\nFirst element of Vector 2 is " << vector_2.at (0) << endl;
    cout << "Second element of Vector 2 is " << vector_2.at (1) << endl;
    cout << "Size of Vector 2 is " << vector_2.size() << endl;

    vector <vector <int>> vector_2d;
    vector_2d.push_back (vector_1);
    vector_2d.push_back (vector_2);
    cout << "\nSize of Vector 2d is " << vector_2d.size () << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    cout << "*-----------------------------------------------------------------*" << endl;

    vector_1.at (0) = 1000;
    cout << "\nNow the first element of Vector 1 is " << vector_1.at (0) << endl;
    //    TESTING WHETHER THERE IS A CHANGE IN vector_2d OR NOT
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    cout << "As the result shows, there is no changes in the Elements of vector_2d";




    return 0;
}
