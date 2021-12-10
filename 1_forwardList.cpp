#include<iostream>
#include<forward_list>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
        forward_list<int> flist1;
        forward_list<int> flist2;

        //flist1 = {4, 5, 6};
        //flist2 = {1, 2, 10};

        int flist1_count;        
        cin >> flist1_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < flist1_count; i++) {
            int flist1_item;
            cin >> flist1_item;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            flist1.push_front(flist1_item);
            flist1.sort();
        }
        for (int&c : flist1)
            cout << c << " ";
        cout << endl;

        int flist2_count;
        cin >> flist2_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < flist2_count; i++) {
            int flist2_item;
            cin >> flist2_item;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            flist2.push_front(flist2_item);
            flist2.sort();
        }
        for (int&c : flist2)
            cout << c << " ";
        cout << endl;

        flist1.merge(flist2);

        for (int&c : flist1)
            cout << c << " ";
        cout << endl;
    } 
   return 0;
}