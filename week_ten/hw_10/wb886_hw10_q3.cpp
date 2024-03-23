#include <iostream>
#include <vector>
using namespace std;

void resizeArray(int*& arr, int& size);

void main1()
{
    int MAX_SIZE = 10; 
    int* sequence = new int[MAX_SIZE];
    int count = 0;
    
    cout << "Please enter a sequence of positive integers, each in a separate line."<<endl;
    cout << "End you input by typing -1."<<endl;
    int num; 
    while(num != -1){
        cin>> num;

        sequence[count++] = num;

        if(count == MAX_SIZE){
            resizeArray(sequence, MAX_SIZE);
        }
        
    }

    int search;
    cout << "Please enter a number you want to search."<<endl;
    cin >> search;

    int lines[MAX_SIZE];
    int lineCount = 0;
    for (int i = 0; i < count; i++) {
        if (sequence[i] == search) {
            lines[lineCount++] = i;
        }
    }

    if(lineCount > 0){
        cout << search << " shows in line ";
        for(int i = 0; i < lineCount; i++){
            cout<< lines[i];

            if(i == lineCount - 1){
                cout<<".";
            }else {
                cout<< ", ";
            }
        }
        cout<<endl;
    } else {
        cout << search << " is not in sequence." <<endl;
    }

}

void main2()
{
    vector<int> sequence;
    vector<int> lines; 

    cout << "Please enter a sequence of positive integers, each in a separate line."<<endl;
    cout << "End you input by typing -1."<<endl;
    int num; 
    while(num != -1){
        sequence.push_back(num);
        cin>> num;
    }

    int search;
    cout << "Please enter a number you want to search."<<endl;
    cin >> search;

    for(int i = 0; i < sequence.size(); i++){
        if(sequence[i] == search){
            lines.push_back(i);
        }
    }

    if (lines.size() == 0) {
        cout << search << " is not in sequence." << endl;
    }

    else {
        cout << search << " shows in lines ";
        for (int i = 0; i < lines.size(); i++) {
            cout << lines[i];
            if (i == lines.size() - 1)
                cout << "." << endl;
            else
                cout << ", ";
        }
    }
}

void resizeArray(int *&input, int &size) {
    size = 2 * size;
    int *outputArray = new int[size];
    for (int i = 0; i < size / 2; i++) {
        outputArray[i] = input[i];
    }
    delete [] input;
    input = outputArray;
}

int main()
{
 
    cout << "Main 1:" << endl;
    main1();
    cout << "Main 2:" << endl;
    main2();
    return 0;
}

