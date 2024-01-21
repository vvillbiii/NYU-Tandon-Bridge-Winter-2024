# Module 6: Loops in C++
* Introduction to Loops
    - Discusses the motivation for using loops in programming.
    - Emphasizes the role of loops in enabling repetitive execution and control flow

### While loops 
* While Loops
    - Explains the syntax and semantics of while loops.
    - Demonstrates their application in a counting program.

* While loop example 
    - prints numbers 1 to 5 <br>
    `int count = 1;
    while (count <= 5) {
    std::cout << count << std::endl;
    count++;
}
`

### For loops 
* For Loops
    - Covers syntax and usage, compared with while loops.
    - Application demonstrated in a counting program for contrast.

* For loop example
    - prints numbers 1 to 5 <br>

`for (int i = 1; i <= 5; i++) {
    std::cout << i << std::endl;
}
`

### Advanced Examples

* Counting & Summing Digits
    - Illustrates how to count digits and sum them using loops.
    - Includes detailed C++ code examples.

    `int num = 12345;
     int sum, count;
     int currDigit;

    cout <<"Enter a positve interger: "<< endl;
    cin>>num;

    sum = 0;
    count = 0;

    while (num > 0) {
     currDigit = number % 10;
     count++;
     sum += currDigit;
     num = num / 10;
    }

    cout << num << "has " << count << " digits ";
    cout << "and their sum is " << sum  << endl;
`
