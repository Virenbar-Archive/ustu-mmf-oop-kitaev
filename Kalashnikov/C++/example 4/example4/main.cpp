#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

int main(){

    int sample[10];

    int t;

    for (t=0; t<10; ++t)
        sample[t] = t;

    for (t=0; t<10; ++t)
        cout << "Index " << t << " Volume: " << sample[t] << "\n";

    int avg, min_val, max_val;
    int num[10];

    for (int i = 0; i<10; ++i)
        num[i] = rand();
    // AVG
    avg = 0;
    for (int i = 0; i<10; ++i)
        avg += num[i];
    avg /= 10;

    cout << "\navg = " << avg << "\n";
    // MIN MAX
    min_val = max_val = num[0];

    for (int i = 1; i<10; ++i){
        if (min_val > num[i])
            min_val = num[i];
        if (max_val < num[i])
            max_val = num[i];
    }

    cout << "MIN : " << min_val << "\n";
    cout << "MAX : " << max_val << "\n\n";

    int b[10];

    for (int i = 0; i<10; ++i)
        b[i] = num[i];

    for (int i = 0; i<10; ++i)
        cout << b[i] << "  " << num[i] << "\n";

    cout << "\n\n";

    int nums [3][4];

    for (int t=0; t < 3; ++t){
        for(int i=0; i < 4; ++i){
            nums [t][i] = (t*4) + i + 1;
            cout << nums [t][i] << " " ;
        }
        cout << "\n";
    }

    int nums1[10];
    int a1, b1, t1;
    int size1;

    size1 = 10;

    srand(911);

    for (t1 = 0; t1 < size1; t1++)
        nums1[t1] = rand();

    cout << "start array:\n";

    for (t1 = 0; t1 < size1; t1++)
        cout << nums1[t1] << "  ";

    cout << '\n';

    for (a1 = 1; a1 < size1; a1++){
        for (b1 = size1-1; b1 >= a1; b1--) {
            if (nums1[b1-1] > nums1[b1]){
                t1 = nums1[b1-1];
                nums1[b1-1] = nums1[b1];
                nums1[b1] = t1;
            }
        }
    }

    cout << "after array: \n";

    for (t1 = 0; t1 < size1; t1++)
        cout << nums1[t1] << "  ";

    cout << "\n\n";
/*
    char str[80];

    cout << "Enter string: ";
    cin >>  str;

    cout << "U string: ";
    cout << str;

    cout << "\n\n";
*/
    char rome[90];

    cout << "\npls, enter txt: ";

    gets(rome);


    cout << "U string: ";
    cout << rome;

    cout << "\n\n";

    char s1[80], s2[80];

    strcpy(s1, "C++");
    strcpy(s2, " be cool");

    cout << "Length string: " << strlen(s1);
    cout << " " << strlen(s2) << "\n";

    if (!strcmp(s1,s2))
        cout << "good";
    else
        cout << "bad";

    cout << "\n";

    strcat(s1,s2);
    cout << s1 << "\n";

    strcpy(s2,s1);
    cout << s1 << " and " << s2 << "\n";

    if (!strcmp(s1,s2))
        cout << "s1 == s2\n";

    char str[80];

    int i;

    strcpy(str, "aFFFf");

    for (i=0; str[i]; i++)
        str[i] = tolower(str[i]);

    cout << str << "\n";

    return 0;
}
















