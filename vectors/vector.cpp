// vectors.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;



int main()
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(1000);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "vector one is : " << vector1.at(0) << endl<<vector1.at(1) <<endl;
    cout<< "size of vector one is : " <<vector1.size() <<endl;
    cout <<"vector two is  : " <<vector2.at(0) << endl<<vector2.at(1)<<endl;
    cout << "size of vector two is : " << vector2.size() << endl;
    cout << "==============================================" << endl;
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "vector 2d is : " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) <<" " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    return 0;
}

